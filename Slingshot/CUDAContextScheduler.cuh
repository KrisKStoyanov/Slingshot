#pragma once
#include <cuda_runtime.h>
#include <device_launch_parameters.h>

#include "GUIConsole.h"

#define checkCudaErrors(val) CheckError((val),#val, __FILE__, __LINE__)

namespace HC {
	void ScheduleRenderKernel(int areaW, int areaH, dim3 CTAsize);
	void CheckError(cudaError_t result, char const* const func, const char* const file, int const line);

	class vec3 {
	public:
		__host__ __device__ vec3() { e[0] = 0.0f, e[1] = 0.0f, e[2] = 0.0f; }
		__host__ __device__ vec3(const float v) { e[0] = v, e[1] = v, e[2] = v; }
		__host__ __device__ vec3(const float e0, float e1, float e2) { e[0] = e0, e[1] = e1, e[2] = e2; }
		__host__ __device__ vec3(const vec3& v) { e[0] = v.x(), e[1] = v.y(), e[2] = v.z(); }

		__host__ __device__ inline void x(const float v) { e[0] = v; }
		__host__ __device__ inline void y(const float v) { e[1] = v; }
		__host__ __device__ inline void z(const float v) { e[2] = v; }

		__host__ __device__ inline float x() const { return e[0]; }
		__host__ __device__ inline float y() const { return e[1]; }
		__host__ __device__ inline float z() const { return e[2]; }

		__host__ __device__ inline void r(const float v) { e[0] = v; }
		__host__ __device__ inline void g(const float v) { e[1] = v; }
		__host__ __device__ inline void b(const float v) { e[2] = v; }

		__host__ __device__ inline float r() const { return e[0]; }
		__host__ __device__ inline float g() const { return e[1]; }
		__host__ __device__ inline float b() const { return e[2]; }

	private:
		float e[3];
	};

	class vec4 {
	public:
		__host__ __device__ vec4() { e[0] = 0.0f, e[1] = 0.0f, e[2] = 0.0f, e[3] = 1.0f; }
		__host__ __device__ vec4(const float v) { e[0] = v, e[1] = v, e[2] = v, e[3] = 1.0f; }
		__host__ __device__ vec4(const float e0, float e1, float e2, float e3) { e[0] = e0, e[1] = e1, e[2] = e2, e[3] = e3; }
		__host__ __device__ vec4(const vec4& v) { e[0] = v.x(), e[1] = v.y(), e[2] = v.z(), e[3] = v.w(); }

		__host__ __device__ inline void x(const float v) { e[0] = v; }
		__host__ __device__ inline void y(const float v) { e[1] = v; }
		__host__ __device__ inline void z(const float v) { e[2] = v; }
		__host__ __device__ inline void w(const float v) { e[3] = v; }

		__host__ __device__ inline float x() const { return e[0]; }
		__host__ __device__ inline float y() const { return e[1]; }
		__host__ __device__ inline float z() const { return e[2]; }
		__host__ __device__ inline float w() const { return e[3]; }

		__host__ __device__ inline void r(const float v) { e[0] = v; }
		__host__ __device__ inline void g(const float v) { e[1] = v; }
		__host__ __device__ inline void b(const float v) { e[2] = v; }
		__host__ __device__ inline void a(const float v) { e[3] = v; }

		__host__ __device__ inline float r() const { return e[0]; }
		__host__ __device__ inline float g() const { return e[1]; }
		__host__ __device__ inline float b() const { return e[2]; }
		__host__ __device__ inline float a() const { return e[3]; }

	private:
		float e[4];
	};

	__host__ __device__ inline vec3 operator+ (const vec3 lhs, const vec3 rhs) { vec3 v(lhs.x() + rhs.x(), lhs.y() + rhs.y(), lhs.z() + rhs.z()); return v; }
	__host__ __device__ inline vec3 operator* (const float lhs, const vec3 rhs) { vec3 v(lhs * rhs.x(), lhs * rhs.y(), lhs * rhs.z()); return v; }
	__host__ __device__ inline vec4 operator+ (const vec4 lhs, const vec4 rhs) { vec4 v(lhs.x() + rhs.x(), lhs.y() + rhs.y(), lhs.z() + rhs.z(), lhs.w() + rhs.w()); return v; }
	__host__ __device__ inline vec4 operator* (const float lhs, const vec4 rhs) { vec4 v(lhs * rhs.x(), lhs * rhs.y(), lhs * rhs.z(), lhs * rhs.w()); return v; }

	__host__ __device__ inline float hcSqrt(const float v, const int prec = 1)
	{
		int iV = (int)v;
		float s = iV;
		for (int j = iV; j > 0; --j) {
			for (int i = 1; i < iV; ++i) {
				float tR = i * i;
				if (tR == j) {
					s = i;
					goto endloop;
				}
			}
		}
	endloop:
		if (s * s == v) {
			return s;
		}
		for (int i = 0; i < prec; ++i) {
			float d = v / s;
			s = (d + s) / 2;
		}

		return s;
	}

	__host__ __device__ inline float hcMag(const vec3 v) { return (hcSqrt(v.x() * v.x() + v.y() * v.y() + v.z() * v.z())); }
	__host__ __device__ inline vec3 hcNorm(const vec3 v) { float d = hcMag(v); return d > 0 ? (vec3(v.x() / d, v.y() / d, v.z() / d)) : vec3(0.0f); }
	__host__ __device__ inline float hcDot(const vec3 a, const vec3 b) { return ((a.x() * b.x() + a.y() * b.y() + a.z() * b.z())); }
	__host__ __device__ inline vec3 hcCross(const vec3 a, const vec3 b) { return vec3((a.y() * b.z() - a.z() * b.y()),(a.z() * b.x() - a.x() * b.z()),(a.x() * b.y() - a.y() * b.x())); }

	class ray {
	public:
		__device__ ray() {}
		__device__ ray(const vec3& a, const vec3& b) { A = a, B = b; }
		__device__ inline vec3 origin() const { return A; }
		__device__ inline vec3 direction() const { return B; }
		__device__ inline vec3 intercept(const float t) const { return A + t * B; }
	private:
		vec3 A;
		vec3 B;
	};

	__device__ inline vec3 d_color(const ray& r) {
		vec3 rayDir = hcNorm(r.direction());
		float t = 0.5f * (rayDir.y() + 1.0f);
		return (1.0f - t) * vec3(1.0f) + t * vec3(0.5f, 0.7f, 1.0f);
	}
}
