





<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
  <link rel="dns-prefetch" href="https://github.githubassets.com">
  <link rel="dns-prefetch" href="https://avatars0.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars1.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars2.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars3.githubusercontent.com">
  <link rel="dns-prefetch" href="https://github-cloud.s3.amazonaws.com">
  <link rel="dns-prefetch" href="https://user-images.githubusercontent.com/">



  <link crossorigin="anonymous" media="all" integrity="sha512-7mtunHqp/Bw0ND9akjJME8XCh0WPm3HAXOSeX7skL0qGAhpdfzkQvYcujYcwNPTpWKeKMFUGZGtvnEkcczFgwQ==" rel="stylesheet" href="https://github.githubassets.com/assets/frameworks-9b5314213e37056ed87b0418056c4f2c.css" />
  
    <link crossorigin="anonymous" media="all" integrity="sha512-zN9k72nJMGLW0JyvHHe6ktFME29zCKRJDG9kegTyxx/lhwVmOyO3V1cDxu1Q7o3/LVfNnMfKiha3wx6iuE/8kQ==" rel="stylesheet" href="https://github.githubassets.com/assets/github-86e6b1aa404c85a5f11eb944c515ddb0.css" />
    
    
    
    


  <meta name="viewport" content="width=device-width">
  
  <title>DirectX-Graphics-Samples/d3dx12.h at master · microsoft/DirectX-Graphics-Samples</title>
    <meta name="description" content="This repo contains the DirectX Graphics samples that demonstrate how to build graphics intensive applications on Windows. - microsoft/DirectX-Graphics-Samples">
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
  <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
  <meta property="fb:app_id" content="1401488693436528">

    <meta name="twitter:image:src" content="https://avatars2.githubusercontent.com/u/6154722?s=400&amp;v=4" /><meta name="twitter:site" content="@github" /><meta name="twitter:card" content="summary" /><meta name="twitter:title" content="microsoft/DirectX-Graphics-Samples" /><meta name="twitter:description" content="This repo contains the DirectX Graphics samples that demonstrate how to build graphics intensive applications on Windows. - microsoft/DirectX-Graphics-Samples" />
    <meta property="og:image" content="https://avatars2.githubusercontent.com/u/6154722?s=400&amp;v=4" /><meta property="og:site_name" content="GitHub" /><meta property="og:type" content="object" /><meta property="og:title" content="microsoft/DirectX-Graphics-Samples" /><meta property="og:url" content="https://github.com/microsoft/DirectX-Graphics-Samples" /><meta property="og:description" content="This repo contains the DirectX Graphics samples that demonstrate how to build graphics intensive applications on Windows. - microsoft/DirectX-Graphics-Samples" />

  <link rel="assets" href="https://github.githubassets.com/">
  <link rel="web-socket" href="wss://live.github.com/_sockets/VjI6NDQ2NDk2MTYyOjFkYmJhM2RhN2JkYzMxOTJhMDE2NDE2MzAwYTgwN2VkYzI4MzczMGVhZjIwNmQ3NDgwNWVkZjYwMDlmMDM5YWE=--a5aeb6a060ed6f49065dac21a23d9acc3fd1dff3">
  <link rel="sudo-modal" href="/sessions/sudo_modal">

    <meta name="request-id" content="C3DC:1E601:F0A374A:167F2C35:5DF105D3" data-pjax-transient>



  

  <meta name="selected-link" value="repo_source" data-pjax-transient>

      <meta name="google-site-verification" content="KT5gs8h0wvaagLKAVWq8bbeNwnZZK1r1XQysX3xurLU">
    <meta name="google-site-verification" content="ZzhVyEFwb7w3e0-uOTltm8Jsck2F5StVihD0exw2fsA">
    <meta name="google-site-verification" content="GXs5KoUUkNCoaAZn7wPN-t01Pywp9M3sEjnt_3_ZWPc">

    <meta name="octolytics-host" content="collector.githubapp.com" /><meta name="octolytics-app-id" content="github" /><meta name="octolytics-event-url" content="https://collector.githubapp.com/github-external/browser_event" /><meta name="octolytics-dimension-request_id" content="C3DC:1E601:F0A374A:167F2C35:5DF105D3" /><meta name="octolytics-dimension-region_edge" content="ams" /><meta name="octolytics-dimension-region_render" content="iad" /><meta name="octolytics-dimension-ga_id" content="" class="js-octo-ga-id" /><meta name="octolytics-dimension-visitor_id" content="1514856287085568475" /><meta name="octolytics-actor-id" content="22742239" /><meta name="octolytics-actor-login" content="KrisKStoyanov" /><meta name="octolytics-actor-hash" content="aba1951057ad2c84f93f13787ca9a95f296e4fcb066b3917495aacba465abd59" />

<meta name="analytics-location" content="/&lt;user-name&gt;/&lt;repo-name&gt;/blob/show" data-pjax-transient="true" />



    <meta name="google-analytics" content="UA-3769691-2">

  <meta class="js-ga-set" name="userId" content="ff477ca9b6ad2748fa10be1febbef8ea">

<meta class="js-ga-set" name="dimension1" content="Logged In">



  

      <meta name="hostname" content="github.com">
    <meta name="user-login" content="KrisKStoyanov">

      <meta name="expected-hostname" content="github.com">

      <meta name="js-proxy-site-detection-payload" content="ZjNlZDA3NWQ3ZDI3ZjdiMGFmNGM4MDgzM2YxMTVhNTE3ZjYwOThmOWFjZWNiMzhiMTIzYzY2OTFmNGI0NjlmY3x7InJlbW90ZV9hZGRyZXNzIjoiMjEyLjEwNC4xMjYuMjQxIiwicmVxdWVzdF9pZCI6IkMzREM6MUU2MDE6RjBBMzc0QToxNjdGMkMzNTo1REYxMDVEMyIsInRpbWVzdGFtcCI6MTU3NjA3Njc1OCwiaG9zdCI6ImdpdGh1Yi5jb20ifQ==">

    <meta name="enabled-features" content="MARKETPLACE_FEATURED_BLOG_POSTS,MARKETPLACE_INVOICED_BILLING,MARKETPLACE_SOCIAL_PROOF_CUSTOMERS,MARKETPLACE_TRENDING_SOCIAL_PROOF,MARKETPLACE_RECOMMENDATIONS,MARKETPLACE_PENDING_INSTALLATIONS,NOTIFY_ON_BLOCK,RELATED_ISSUES,GHE_CLOUD_TRIAL">

    <meta name="html-safe-nonce" content="9e92776398d89f1d990eb56a435c786ac1057a56">

  <meta http-equiv="x-pjax-version" content="bac69c31c1a85e06cae508430701a633">
  

      <link href="https://github.com/microsoft/DirectX-Graphics-Samples/commits/master.atom" rel="alternate" title="Recent Commits to DirectX-Graphics-Samples:master" type="application/atom+xml">

  <meta name="go-import" content="github.com/microsoft/DirectX-Graphics-Samples git https://github.com/microsoft/DirectX-Graphics-Samples.git">

  <meta name="octolytics-dimension-user_id" content="6154722" /><meta name="octolytics-dimension-user_login" content="microsoft" /><meta name="octolytics-dimension-repository_id" content="36831874" /><meta name="octolytics-dimension-repository_nwo" content="microsoft/DirectX-Graphics-Samples" /><meta name="octolytics-dimension-repository_public" content="true" /><meta name="octolytics-dimension-repository_is_fork" content="false" /><meta name="octolytics-dimension-repository_network_root_id" content="36831874" /><meta name="octolytics-dimension-repository_network_root_nwo" content="microsoft/DirectX-Graphics-Samples" /><meta name="octolytics-dimension-repository_explore_github_marketplace_ci_cta_shown" content="false" />


    <link rel="canonical" href="https://github.com/microsoft/DirectX-Graphics-Samples/blob/master/Libraries/D3DX12/d3dx12.h" data-pjax-transient>


  <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">

  <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">

  <link rel="mask-icon" href="https://github.githubassets.com/pinned-octocat.svg" color="#000000">
  <link rel="icon" type="image/x-icon" class="js-site-favicon" href="https://github.githubassets.com/favicon.ico">

<meta name="theme-color" content="#1e2327">



  <meta name="webauthn-auth-enabled" content="true">

  <meta name="webauthn-registration-enabled" content="true">

  <link rel="manifest" href="/manifest.json" crossOrigin="use-credentials">

  </head>

  <body class="logged-in env-production page-responsive page-blob">
    

  <div class="position-relative js-header-wrapper ">
    <a href="#start-of-content" tabindex="1" class="p-3 bg-blue text-white show-on-focus js-skip-to-content">Skip to content</a>
    <span class="Progress progress-pjax-loader position-fixed width-full js-pjax-loader-bar">
      <span class="progress-pjax-loader-bar top-0 left-0" style="width: 0%;"></span>
    </span>

    
    
    


          <header class="Header js-details-container Details flex-wrap flex-lg-nowrap p-responsive" role="banner">

    <div class="Header-item d-none d-lg-flex">
      <a class="Header-link" href="https://github.com/" data-hotkey="g d" aria-label="Homepage" data-ga-click="Header, go to dashboard, icon:logo">
  <svg class="octicon octicon-mark-github v-align-middle" height="32" viewBox="0 0 16 16" version="1.1" width="32" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0016 8c0-4.42-3.58-8-8-8z"/></svg>
</a>

    </div>

    <div class="Header-item d-lg-none">
      <button class="Header-link btn-link js-details-target" type="button" aria-label="Toggle navigation" aria-expanded="false">
        <svg height="24" class="octicon octicon-three-bars" viewBox="0 0 12 16" version="1.1" width="18" aria-hidden="true"><path fill-rule="evenodd" d="M11.41 9H.59C0 9 0 8.59 0 8c0-.59 0-1 .59-1H11.4c.59 0 .59.41.59 1 0 .59 0 1-.59 1h.01zm0-4H.59C0 5 0 4.59 0 4c0-.59 0-1 .59-1H11.4c.59 0 .59.41.59 1 0 .59 0 1-.59 1h.01zM.59 11H11.4c.59 0 .59.41.59 1 0 .59 0 1-.59 1H.59C0 13 0 12.59 0 12c0-.59 0-1 .59-1z"/></svg>
      </button>
    </div>

    <div class="Header-item Header-item--full flex-column flex-lg-row width-full flex-order-2 flex-lg-order-none mr-0 mr-lg-3 mt-3 mt-lg-0 Details-content--hidden">
        <div class="header-search flex-self-stretch flex-lg-self-auto mr-0 mr-lg-3 mb-3 mb-lg-0 scoped-search site-scoped-search js-site-search position-relative js-jump-to"
  role="combobox"
  aria-owns="jump-to-results"
  aria-label="Search or jump to"
  aria-haspopup="listbox"
  aria-expanded="false"
>
  <div class="position-relative">
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="js-site-search-form" role="search" aria-label="Site" data-scope-type="Repository" data-scope-id="36831874" data-scoped-search-url="/microsoft/DirectX-Graphics-Samples/search" data-unscoped-search-url="/search" action="/microsoft/DirectX-Graphics-Samples/search" accept-charset="UTF-8" method="get"><input name="utf8" type="hidden" value="&#x2713;" />
      <label class="form-control input-sm header-search-wrapper p-0 header-search-wrapper-jump-to position-relative d-flex flex-justify-between flex-items-center js-chromeless-input-container">
        <input type="text"
          class="form-control input-sm header-search-input jump-to-field js-jump-to-field js-site-search-focus js-site-search-field is-clearable"
          data-hotkey="s,/"
          name="q"
          value=""
          placeholder="Search or jump to…"
          data-unscoped-placeholder="Search or jump to…"
          data-scoped-placeholder="Search or jump to…"
          autocapitalize="off"
          aria-autocomplete="list"
          aria-controls="jump-to-results"
          aria-label="Search or jump to…"
          data-jump-to-suggestions-path="/_graphql/GetSuggestedNavigationDestinations#csrf-token=4g+42tzYF5lD0J1uaQqILu+n1DaZuOBVv56pg8ul7C7h+ST3w2WG5hqqC24rDM4SOqwZD8fG1wF3kG+M7G+uiQ=="
          spellcheck="false"
          autocomplete="off"
          >
          <input type="hidden" class="js-site-search-type-field" name="type" >
            <img src="https://github.githubassets.com/images/search-key-slash.svg" alt="" class="mr-2 header-search-key-slash">

            <div class="Box position-absolute overflow-hidden d-none jump-to-suggestions js-jump-to-suggestions-container">
              
<ul class="d-none js-jump-to-suggestions-template-container">
  

<li class="d-flex flex-justify-start flex-items-center p-0 f5 navigation-item js-navigation-item js-jump-to-suggestion" role="option">
  <a tabindex="-1" class="no-underline d-flex flex-auto flex-items-center jump-to-suggestions-path js-jump-to-suggestion-path js-navigation-open p-2" href="">
    <div class="jump-to-octicon js-jump-to-octicon flex-shrink-0 mr-2 text-center d-none">
      <svg height="16" width="16" class="octicon octicon-repo flex-shrink-0 js-jump-to-octicon-repo d-none" title="Repository" aria-label="Repository" viewBox="0 0 12 16" version="1.1" role="img"><path fill-rule="evenodd" d="M4 9H3V8h1v1zm0-3H3v1h1V6zm0-2H3v1h1V4zm0-2H3v1h1V2zm8-1v12c0 .55-.45 1-1 1H6v2l-1.5-1.5L3 16v-2H1c-.55 0-1-.45-1-1V1c0-.55.45-1 1-1h10c.55 0 1 .45 1 1zm-1 10H1v2h2v-1h3v1h5v-2zm0-10H2v9h9V1z"/></svg>
      <svg height="16" width="16" class="octicon octicon-project flex-shrink-0 js-jump-to-octicon-project d-none" title="Project" aria-label="Project" viewBox="0 0 15 16" version="1.1" role="img"><path fill-rule="evenodd" d="M10 12h3V2h-3v10zm-4-2h3V2H6v8zm-4 4h3V2H2v12zm-1 1h13V1H1v14zM14 0H1a1 1 0 00-1 1v14a1 1 0 001 1h13a1 1 0 001-1V1a1 1 0 00-1-1z"/></svg>
      <svg height="16" width="16" class="octicon octicon-search flex-shrink-0 js-jump-to-octicon-search d-none" title="Search" aria-label="Search" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M15.7 13.3l-3.81-3.83A5.93 5.93 0 0013 6c0-3.31-2.69-6-6-6S1 2.69 1 6s2.69 6 6 6c1.3 0 2.48-.41 3.47-1.11l3.83 3.81c.19.2.45.3.7.3.25 0 .52-.09.7-.3a.996.996 0 000-1.41v.01zM7 10.7c-2.59 0-4.7-2.11-4.7-4.7 0-2.59 2.11-4.7 4.7-4.7 2.59 0 4.7 2.11 4.7 4.7 0 2.59-2.11 4.7-4.7 4.7z"/></svg>
    </div>

    <img class="avatar mr-2 flex-shrink-0 js-jump-to-suggestion-avatar d-none" alt="" aria-label="Team" src="" width="28" height="28">

    <div class="jump-to-suggestion-name js-jump-to-suggestion-name flex-auto overflow-hidden text-left no-wrap css-truncate css-truncate-target">
    </div>

    <div class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none js-jump-to-badge-search">
      <span class="js-jump-to-badge-search-text-default d-none" aria-label="in this repository">
        In this repository
      </span>
      <span class="js-jump-to-badge-search-text-global d-none" aria-label="in all of GitHub">
        All GitHub
      </span>
      <span aria-hidden="true" class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>

    <div aria-hidden="true" class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none d-on-nav-focus js-jump-to-badge-jump">
      Jump to
      <span class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>
  </a>
</li>

</ul>

<ul class="d-none js-jump-to-no-results-template-container">
  <li class="d-flex flex-justify-center flex-items-center f5 d-none js-jump-to-suggestion p-2">
    <span class="text-gray">No suggested jump to results</span>
  </li>
</ul>

<ul id="jump-to-results" role="listbox" class="p-0 m-0 js-navigation-container jump-to-suggestions-results-container js-jump-to-suggestions-results-container">
  

<li class="d-flex flex-justify-start flex-items-center p-0 f5 navigation-item js-navigation-item js-jump-to-scoped-search d-none" role="option">
  <a tabindex="-1" class="no-underline d-flex flex-auto flex-items-center jump-to-suggestions-path js-jump-to-suggestion-path js-navigation-open p-2" href="">
    <div class="jump-to-octicon js-jump-to-octicon flex-shrink-0 mr-2 text-center d-none">
      <svg height="16" width="16" class="octicon octicon-repo flex-shrink-0 js-jump-to-octicon-repo d-none" title="Repository" aria-label="Repository" viewBox="0 0 12 16" version="1.1" role="img"><path fill-rule="evenodd" d="M4 9H3V8h1v1zm0-3H3v1h1V6zm0-2H3v1h1V4zm0-2H3v1h1V2zm8-1v12c0 .55-.45 1-1 1H6v2l-1.5-1.5L3 16v-2H1c-.55 0-1-.45-1-1V1c0-.55.45-1 1-1h10c.55 0 1 .45 1 1zm-1 10H1v2h2v-1h3v1h5v-2zm0-10H2v9h9V1z"/></svg>
      <svg height="16" width="16" class="octicon octicon-project flex-shrink-0 js-jump-to-octicon-project d-none" title="Project" aria-label="Project" viewBox="0 0 15 16" version="1.1" role="img"><path fill-rule="evenodd" d="M10 12h3V2h-3v10zm-4-2h3V2H6v8zm-4 4h3V2H2v12zm-1 1h13V1H1v14zM14 0H1a1 1 0 00-1 1v14a1 1 0 001 1h13a1 1 0 001-1V1a1 1 0 00-1-1z"/></svg>
      <svg height="16" width="16" class="octicon octicon-search flex-shrink-0 js-jump-to-octicon-search d-none" title="Search" aria-label="Search" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M15.7 13.3l-3.81-3.83A5.93 5.93 0 0013 6c0-3.31-2.69-6-6-6S1 2.69 1 6s2.69 6 6 6c1.3 0 2.48-.41 3.47-1.11l3.83 3.81c.19.2.45.3.7.3.25 0 .52-.09.7-.3a.996.996 0 000-1.41v.01zM7 10.7c-2.59 0-4.7-2.11-4.7-4.7 0-2.59 2.11-4.7 4.7-4.7 2.59 0 4.7 2.11 4.7 4.7 0 2.59-2.11 4.7-4.7 4.7z"/></svg>
    </div>

    <img class="avatar mr-2 flex-shrink-0 js-jump-to-suggestion-avatar d-none" alt="" aria-label="Team" src="" width="28" height="28">

    <div class="jump-to-suggestion-name js-jump-to-suggestion-name flex-auto overflow-hidden text-left no-wrap css-truncate css-truncate-target">
    </div>

    <div class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none js-jump-to-badge-search">
      <span class="js-jump-to-badge-search-text-default d-none" aria-label="in this repository">
        In this repository
      </span>
      <span class="js-jump-to-badge-search-text-global d-none" aria-label="in all of GitHub">
        All GitHub
      </span>
      <span aria-hidden="true" class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>

    <div aria-hidden="true" class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none d-on-nav-focus js-jump-to-badge-jump">
      Jump to
      <span class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>
  </a>
</li>

  

<li class="d-flex flex-justify-start flex-items-center p-0 f5 navigation-item js-navigation-item js-jump-to-global-search d-none" role="option">
  <a tabindex="-1" class="no-underline d-flex flex-auto flex-items-center jump-to-suggestions-path js-jump-to-suggestion-path js-navigation-open p-2" href="">
    <div class="jump-to-octicon js-jump-to-octicon flex-shrink-0 mr-2 text-center d-none">
      <svg height="16" width="16" class="octicon octicon-repo flex-shrink-0 js-jump-to-octicon-repo d-none" title="Repository" aria-label="Repository" viewBox="0 0 12 16" version="1.1" role="img"><path fill-rule="evenodd" d="M4 9H3V8h1v1zm0-3H3v1h1V6zm0-2H3v1h1V4zm0-2H3v1h1V2zm8-1v12c0 .55-.45 1-1 1H6v2l-1.5-1.5L3 16v-2H1c-.55 0-1-.45-1-1V1c0-.55.45-1 1-1h10c.55 0 1 .45 1 1zm-1 10H1v2h2v-1h3v1h5v-2zm0-10H2v9h9V1z"/></svg>
      <svg height="16" width="16" class="octicon octicon-project flex-shrink-0 js-jump-to-octicon-project d-none" title="Project" aria-label="Project" viewBox="0 0 15 16" version="1.1" role="img"><path fill-rule="evenodd" d="M10 12h3V2h-3v10zm-4-2h3V2H6v8zm-4 4h3V2H2v12zm-1 1h13V1H1v14zM14 0H1a1 1 0 00-1 1v14a1 1 0 001 1h13a1 1 0 001-1V1a1 1 0 00-1-1z"/></svg>
      <svg height="16" width="16" class="octicon octicon-search flex-shrink-0 js-jump-to-octicon-search d-none" title="Search" aria-label="Search" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M15.7 13.3l-3.81-3.83A5.93 5.93 0 0013 6c0-3.31-2.69-6-6-6S1 2.69 1 6s2.69 6 6 6c1.3 0 2.48-.41 3.47-1.11l3.83 3.81c.19.2.45.3.7.3.25 0 .52-.09.7-.3a.996.996 0 000-1.41v.01zM7 10.7c-2.59 0-4.7-2.11-4.7-4.7 0-2.59 2.11-4.7 4.7-4.7 2.59 0 4.7 2.11 4.7 4.7 0 2.59-2.11 4.7-4.7 4.7z"/></svg>
    </div>

    <img class="avatar mr-2 flex-shrink-0 js-jump-to-suggestion-avatar d-none" alt="" aria-label="Team" src="" width="28" height="28">

    <div class="jump-to-suggestion-name js-jump-to-suggestion-name flex-auto overflow-hidden text-left no-wrap css-truncate css-truncate-target">
    </div>

    <div class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none js-jump-to-badge-search">
      <span class="js-jump-to-badge-search-text-default d-none" aria-label="in this repository">
        In this repository
      </span>
      <span class="js-jump-to-badge-search-text-global d-none" aria-label="in all of GitHub">
        All GitHub
      </span>
      <span aria-hidden="true" class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>

    <div aria-hidden="true" class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none d-on-nav-focus js-jump-to-badge-jump">
      Jump to
      <span class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>
  </a>
</li>


    <li class="d-flex flex-justify-center flex-items-center p-0 f5 js-jump-to-suggestion">
      <img src="https://github.githubassets.com/images/spinners/octocat-spinner-128.gif" alt="Octocat Spinner Icon" class="m-2" width="28">
    </li>
</ul>

            </div>
      </label>
</form>  </div>
</div>


      <nav class="d-flex flex-column flex-lg-row flex-self-stretch flex-lg-self-auto" aria-label="Global">
    <a class="Header-link d-block d-lg-none py-2 py-lg-0 border-top border-lg-top-0 border-white-fade-15" data-ga-click="Header, click, Nav menu - item:dashboard:user" aria-label="Dashboard" href="/dashboard">
      Dashboard
</a>
  <a class="js-selected-navigation-item Header-link  mr-0 mr-lg-3 py-2 py-lg-0 border-top border-lg-top-0 border-white-fade-15" data-hotkey="g p" data-ga-click="Header, click, Nav menu - item:pulls context:user" aria-label="Pull requests you created" data-selected-links="/pulls /pulls/assigned /pulls/mentioned /pulls" href="/pulls">
    Pull requests
</a>
  <a class="js-selected-navigation-item Header-link  mr-0 mr-lg-3 py-2 py-lg-0 border-top border-lg-top-0 border-white-fade-15" data-hotkey="g i" data-ga-click="Header, click, Nav menu - item:issues context:user" aria-label="Issues you created" data-selected-links="/issues /issues/assigned /issues/mentioned /issues" href="/issues">
    Issues
</a>
    <div class="mr-0 mr-lg-3 py-2 py-lg-0 border-top border-lg-top-0 border-white-fade-15">
      <a class="js-selected-navigation-item Header-link" data-ga-click="Header, click, Nav menu - item:marketplace context:user" data-octo-click="marketplace_click" data-octo-dimensions="location:nav_bar" data-selected-links=" /marketplace" href="/marketplace">
        Marketplace
</a>      

    </div>

  <a class="js-selected-navigation-item Header-link  mr-0 mr-lg-3 py-2 py-lg-0 border-top border-lg-top-0 border-white-fade-15" data-ga-click="Header, click, Nav menu - item:explore" data-selected-links="/explore /trending /trending/developers /integrations /integrations/feature/code /integrations/feature/collaborate /integrations/feature/ship showcases showcases_search showcases_landing /explore" href="/explore">
    Explore
</a>


    <a class="Header-link d-block d-lg-none mr-0 mr-lg-3 py-2 py-lg-0 border-top border-lg-top-0 border-white-fade-15" href="https://github.com/KrisKStoyanov">
      <img class="avatar" height="20" width="20" alt="@KrisKStoyanov" src="https://avatars0.githubusercontent.com/u/22742239?s=60&amp;v=4" />
      KrisKStoyanov
</a>
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form action="/logout" accept-charset="UTF-8" method="post"><input name="utf8" type="hidden" value="&#x2713;" /><input type="hidden" name="authenticity_token" value="vlgtMORTWFg3vH1jr8Wz8CajRuW1uYA6in5ZB1YuQHPKtLD4h7o4f5G8iQaA1PEi/1P58SK6OWs7zpsFSOFteQ==" />
      <button type="submit" class="Header-link mr-0 mr-lg-3 py-2 py-lg-0 border-top border-lg-top-0 border-white-fade-15 d-lg-none btn-link d-block width-full text-left" data-ga-click="Header, sign out, icon:logout" style="padding-left: 2px;">
        <svg class="octicon octicon-sign-out v-align-middle" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 9V7H8V5h4V3l4 3-4 3zm-2 3H6V3L2 1h8v3h1V1c0-.55-.45-1-1-1H1C.45 0 0 .45 0 1v11.38c0 .39.22.73.55.91L6 16.01V13h4c.55 0 1-.45 1-1V8h-1v4z"/></svg>
        Sign out
      </button>
</form></nav>

    </div>

    <div class="Header-item Header-item--full flex-justify-center d-lg-none position-relative">
      <div class="css-truncate css-truncate-target width-fit position-absolute left-0 right-0 text-center">
              <svg class="octicon octicon-repo" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M4 9H3V8h1v1zm0-3H3v1h1V6zm0-2H3v1h1V4zm0-2H3v1h1V2zm8-1v12c0 .55-.45 1-1 1H6v2l-1.5-1.5L3 16v-2H1c-.55 0-1-.45-1-1V1c0-.55.45-1 1-1h10c.55 0 1 .45 1 1zm-1 10H1v2h2v-1h3v1h5v-2zm0-10H2v9h9V1z"/></svg>
    <a class="Header-link" href="/microsoft">microsoft</a>
    /
    <a class="Header-link" href="/microsoft/DirectX-Graphics-Samples">DirectX-Graphics-Samples</a>

</div>
    </div>


    <div class="Header-item mr-0 mr-lg-3 flex-order-1 flex-lg-order-none">
      

    <a aria-label="You have no unread notifications" class="Header-link notification-indicator position-relative tooltipped tooltipped-sw js-socket-channel js-notification-indicator" data-hotkey="g n" data-ga-click="Header, go to notifications, icon:read" data-channel="notification-changed:22742239" href="/notifications">
        <span class="mail-status "></span>
        <svg class="octicon octicon-bell" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M14 12v1H0v-1l.73-.58c.77-.77.81-2.55 1.19-4.42C2.69 3.23 6 2 6 2c0-.55.45-1 1-1s1 .45 1 1c0 0 3.39 1.23 4.16 5 .38 1.88.42 3.66 1.19 4.42l.66.58H14zm-7 4c1.11 0 2-.89 2-2H5c0 1.11.89 2 2 2z"/></svg>
</a>
    </div>


    <div class="Header-item position-relative d-none d-lg-flex">
      <details class="details-overlay details-reset">
  <summary class="Header-link"
      aria-label="Create new…"
      data-ga-click="Header, create new, icon:add">
    <svg class="octicon octicon-plus" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 9H7v5H5V9H0V7h5V2h2v5h5v2z"/></svg> <span class="dropdown-caret"></span>
  </summary>
  <details-menu class="dropdown-menu dropdown-menu-sw">
    
<a role="menuitem" class="dropdown-item" href="/new" data-ga-click="Header, create new repository">
  New repository
</a>

  <a role="menuitem" class="dropdown-item" href="/new/import" data-ga-click="Header, import a repository">
    Import repository
  </a>

<a role="menuitem" class="dropdown-item" href="https://gist.github.com/" data-ga-click="Header, create new gist">
  New gist
</a>

  <a role="menuitem" class="dropdown-item" href="/organizations/new" data-ga-click="Header, create new organization">
    New organization
  </a>


  <div role="none" class="dropdown-divider"></div>
  <div class="dropdown-header">
    <span title="microsoft/DirectX-Graphics-Samples">This repository</span>
  </div>
    <a role="menuitem" class="dropdown-item" href="/microsoft/DirectX-Graphics-Samples/issues/new" data-ga-click="Header, create new issue" data-skip-pjax>
      New issue
    </a>


  </details-menu>
</details>

    </div>

    <div class="Header-item position-relative mr-0 d-none d-lg-flex">
      
  <details class="details-overlay details-reset js-feature-preview-indicator-container" data-feature-preview-indicator-src="/users/KrisKStoyanov/feature_preview/indicator_check.json">

  <summary class="Header-link"
    aria-label="View profile and more"
    data-ga-click="Header, show menu, icon:avatar">
    <img alt="@KrisKStoyanov" class="avatar" src="https://avatars3.githubusercontent.com/u/22742239?s=40&amp;v=4" height="20" width="20">
      <span class="feature-preview-indicator js-feature-preview-indicator" hidden></span>
    <span class="dropdown-caret"></span>
  </summary>
  <details-menu class="dropdown-menu dropdown-menu-sw mt-2" style="width: 180px">
    <div class="header-nav-current-user css-truncate"><a role="menuitem" class="no-underline user-profile-link px-3 pt-2 pb-2 mb-n2 mt-n1 d-block" href="/KrisKStoyanov" data-ga-click="Header, go to profile, text:Signed in as">Signed in as <strong class="css-truncate-target">KrisKStoyanov</strong></a></div>
    <div role="none" class="dropdown-divider"></div>

      <div class="pl-3 pr-3 f6 user-status-container js-user-status-context pb-1" data-url="/users/status?compact=1&amp;link_mentions=0&amp;truncate=1">
        
<div class="js-user-status-container
    user-status-compact rounded-1 px-2 py-1 mt-2
    border
  " data-team-hovercards-enabled>
  <details class="js-user-status-details details-reset details-overlay details-overlay-dark">
    <summary class="btn-link btn-block link-gray no-underline js-toggle-user-status-edit toggle-user-status-edit "
      role="menuitem" data-hydro-click="{&quot;event_type&quot;:&quot;user_profile.click&quot;,&quot;payload&quot;:{&quot;profile_user_id&quot;:6154722,&quot;target&quot;:&quot;EDIT_USER_STATUS&quot;,&quot;user_id&quot;:22742239,&quot;client_id&quot;:&quot;352704964.1568711131&quot;,&quot;originating_request_id&quot;:&quot;C3DC:1E601:F0A374A:167F2C35:5DF105D3&quot;,&quot;originating_url&quot;:&quot;https://github.com/microsoft/DirectX-Graphics-Samples/blob/master/Libraries/D3DX12/d3dx12.h&quot;,&quot;referrer&quot;:&quot;https://github.com/Microsoft/DirectX-Graphics-Samples/tree/master/Libraries/D3DX12&quot;}}" data-hydro-click-hmac="03c1cfa6321a30b540432166c03f583f54dcc0bbd00852e5acf9927171604c59">
      <div class="d-flex">
        <div class="f6 lh-condensed user-status-header
          d-inline-block v-align-middle
            user-status-emoji-only-header circle
            pr-2
"
            style="max-width: 29px"
          >
          <div class="user-status-emoji-container flex-shrink-0 mr-1 mt-1 lh-condensed-ultra v-align-bottom" style="">
            <svg class="octicon octicon-smiley" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8s3.58 8 8 8 8-3.58 8-8-3.58-8-8-8zm4.81 12.81a6.72 6.72 0 01-2.17 1.45c-.83.36-1.72.53-2.64.53-.92 0-1.81-.17-2.64-.53-.81-.34-1.55-.83-2.17-1.45a6.773 6.773 0 01-1.45-2.17A6.59 6.59 0 011.21 8c0-.92.17-1.81.53-2.64.34-.81.83-1.55 1.45-2.17.62-.62 1.36-1.11 2.17-1.45A6.59 6.59 0 018 1.21c.92 0 1.81.17 2.64.53.81.34 1.55.83 2.17 1.45.62.62 1.11 1.36 1.45 2.17.36.83.53 1.72.53 2.64 0 .92-.17 1.81-.53 2.64-.34.81-.83 1.55-1.45 2.17zM4 6.8v-.59c0-.66.53-1.19 1.2-1.19h.59c.66 0 1.19.53 1.19 1.19v.59c0 .67-.53 1.2-1.19 1.2H5.2C4.53 8 4 7.47 4 6.8zm5 0v-.59c0-.66.53-1.19 1.2-1.19h.59c.66 0 1.19.53 1.19 1.19v.59c0 .67-.53 1.2-1.19 1.2h-.59C9.53 8 9 7.47 9 6.8zm4 3.2c-.72 1.88-2.91 3-5 3s-4.28-1.13-5-3c-.14-.39.23-1 .66-1h8.59c.41 0 .89.61.75 1z"/></svg>
          </div>
        </div>
        <div class="
          d-inline-block v-align-middle
          
          
           css-truncate css-truncate-target 
           user-status-message-wrapper f6"
           style="line-height: 20px;" >
          <div class="d-inline-block text-gray-dark v-align-text-top text-left">
              <span class="text-gray ml-2">Set status</span>
          </div>
        </div>
      </div>
    </summary>
    <details-dialog class="details-dialog rounded-1 anim-fade-in fast Box Box--overlay" role="dialog" tabindex="-1">
      <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="position-relative flex-auto js-user-status-form" action="/users/status?compact=1&amp;link_mentions=0&amp;truncate=1" accept-charset="UTF-8" method="post"><input name="utf8" type="hidden" value="&#x2713;" /><input type="hidden" name="_method" value="put" /><input type="hidden" name="authenticity_token" value="E2mQJ9RoRP1dYFDG/bQcjsgmH6MOkNGxw6D6XdwNqlGt6cO2RYc1kQ+/Ayl2rQva1fa3vva0PRBfZmOP1zxB+Q==" />
        <div class="Box-header bg-gray border-bottom p-3">
          <button class="Box-btn-octicon js-toggle-user-status-edit btn-octicon float-right" type="reset" aria-label="Close dialog" data-close-dialog>
            <svg class="octicon octicon-x" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z"/></svg>
          </button>
          <h3 class="Box-title f5 text-bold text-gray-dark">Edit status</h3>
        </div>
        <input type="hidden" name="emoji" class="js-user-status-emoji-field" value="">
        <input type="hidden" name="organization_id" class="js-user-status-org-id-field" value="">
        <div class="px-3 py-2 text-gray-dark">
          <div class="js-characters-remaining-container position-relative mt-2">
            <div class="input-group d-table form-group my-0 js-user-status-form-group">
              <span class="input-group-button d-table-cell v-align-middle" style="width: 1%">
                <button type="button" aria-label="Choose an emoji" class="btn-outline btn js-toggle-user-status-emoji-picker btn-open-emoji-picker p-0">
                  <span class="js-user-status-original-emoji" hidden></span>
                  <span class="js-user-status-custom-emoji"></span>
                  <span class="js-user-status-no-emoji-icon" >
                    <svg class="octicon octicon-smiley" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8s3.58 8 8 8 8-3.58 8-8-3.58-8-8-8zm4.81 12.81a6.72 6.72 0 01-2.17 1.45c-.83.36-1.72.53-2.64.53-.92 0-1.81-.17-2.64-.53-.81-.34-1.55-.83-2.17-1.45a6.773 6.773 0 01-1.45-2.17A6.59 6.59 0 011.21 8c0-.92.17-1.81.53-2.64.34-.81.83-1.55 1.45-2.17.62-.62 1.36-1.11 2.17-1.45A6.59 6.59 0 018 1.21c.92 0 1.81.17 2.64.53.81.34 1.55.83 2.17 1.45.62.62 1.11 1.36 1.45 2.17.36.83.53 1.72.53 2.64 0 .92-.17 1.81-.53 2.64-.34.81-.83 1.55-1.45 2.17zM4 6.8v-.59c0-.66.53-1.19 1.2-1.19h.59c.66 0 1.19.53 1.19 1.19v.59c0 .67-.53 1.2-1.19 1.2H5.2C4.53 8 4 7.47 4 6.8zm5 0v-.59c0-.66.53-1.19 1.2-1.19h.59c.66 0 1.19.53 1.19 1.19v.59c0 .67-.53 1.2-1.19 1.2h-.59C9.53 8 9 7.47 9 6.8zm4 3.2c-.72 1.88-2.91 3-5 3s-4.28-1.13-5-3c-.14-.39.23-1 .66-1h8.59c.41 0 .89.61.75 1z"/></svg>
                  </span>
                </button>
              </span>
              <text-expander keys=": @" data-mention-url="/autocomplete/user-suggestions" data-emoji-url="/autocomplete/emoji">
                <input
                  type="text"
                  autocomplete="off"
                  data-no-org-url="/autocomplete/user-suggestions"
                  data-org-url="/suggestions?mention_suggester=1"
                  data-maxlength="80"
                  class="d-table-cell width-full form-control js-user-status-message-field js-characters-remaining-field"
                  placeholder="What's happening?"
                  name="message"
                  value=""
                  aria-label="What is your current status?">
              </text-expander>
              <div class="error">Could not update your status, please try again.</div>
            </div>
            <div style="margin-left: 53px" class="my-1 text-small label-characters-remaining js-characters-remaining" data-suffix="remaining" hidden>
              80 remaining
            </div>
          </div>
          <include-fragment class="js-user-status-emoji-picker" data-url="/users/status/emoji"></include-fragment>
          <div class="overflow-auto ml-n3 mr-n3 px-3 border-bottom" style="max-height: 33vh">
            <div class="user-status-suggestions js-user-status-suggestions collapsed overflow-hidden">
              <h4 class="f6 text-normal my-3">Suggestions:</h4>
              <div class="mx-3 mt-2 clearfix">
                  <div class="float-left col-6">
                      <button type="button" value=":palm_tree:" class="d-flex flex-items-baseline flex-items-stretch lh-condensed f6 btn-link link-gray no-underline js-predefined-user-status mb-1">
                        <div class="emoji-status-width mr-2 v-align-middle js-predefined-user-status-emoji">
                          <g-emoji alias="palm_tree" fallback-src="https://github.githubassets.com/images/icons/emoji/unicode/1f334.png">🌴</g-emoji>
                        </div>
                        <div class="d-flex flex-items-center no-underline js-predefined-user-status-message ws-normal text-left" style="border-left: 1px solid transparent">
                          On vacation
                        </div>
                      </button>
                      <button type="button" value=":face_with_thermometer:" class="d-flex flex-items-baseline flex-items-stretch lh-condensed f6 btn-link link-gray no-underline js-predefined-user-status mb-1">
                        <div class="emoji-status-width mr-2 v-align-middle js-predefined-user-status-emoji">
                          <g-emoji alias="face_with_thermometer" fallback-src="https://github.githubassets.com/images/icons/emoji/unicode/1f912.png">🤒</g-emoji>
                        </div>
                        <div class="d-flex flex-items-center no-underline js-predefined-user-status-message ws-normal text-left" style="border-left: 1px solid transparent">
                          Out sick
                        </div>
                      </button>
                  </div>
                  <div class="float-left col-6">
                      <button type="button" value=":house:" class="d-flex flex-items-baseline flex-items-stretch lh-condensed f6 btn-link link-gray no-underline js-predefined-user-status mb-1">
                        <div class="emoji-status-width mr-2 v-align-middle js-predefined-user-status-emoji">
                          <g-emoji alias="house" fallback-src="https://github.githubassets.com/images/icons/emoji/unicode/1f3e0.png">🏠</g-emoji>
                        </div>
                        <div class="d-flex flex-items-center no-underline js-predefined-user-status-message ws-normal text-left" style="border-left: 1px solid transparent">
                          Working from home
                        </div>
                      </button>
                      <button type="button" value=":dart:" class="d-flex flex-items-baseline flex-items-stretch lh-condensed f6 btn-link link-gray no-underline js-predefined-user-status mb-1">
                        <div class="emoji-status-width mr-2 v-align-middle js-predefined-user-status-emoji">
                          <g-emoji alias="dart" fallback-src="https://github.githubassets.com/images/icons/emoji/unicode/1f3af.png">🎯</g-emoji>
                        </div>
                        <div class="d-flex flex-items-center no-underline js-predefined-user-status-message ws-normal text-left" style="border-left: 1px solid transparent">
                          Focusing
                        </div>
                      </button>
                  </div>
              </div>
            </div>
            <div class="user-status-limited-availability-container">
              <div class="form-checkbox my-0">
                <input type="checkbox" name="limited_availability" value="1" class="js-user-status-limited-availability-checkbox" data-default-message="I may be slow to respond." aria-describedby="limited-availability-help-text-truncate-true-compact-true" id="limited-availability-truncate-true-compact-true">
                <label class="d-block f5 text-gray-dark mb-1" for="limited-availability-truncate-true-compact-true">
                  Busy
                </label>
                <p class="note" id="limited-availability-help-text-truncate-true-compact-true">
                  When others mention you, assign you, or request your review,
                  GitHub will let them know that you have limited availability.
                </p>
              </div>
            </div>
          </div>
            

<div class="d-inline-block f5 mr-2 pt-3 pb-2" >
  <div class="d-inline-block mr-1">
    Clear status
  </div>

  <details class="js-user-status-expire-drop-down f6 dropdown details-reset details-overlay d-inline-block mr-2">
    <summary class="f5 btn-link link-gray-dark border px-2 py-1 rounded-1" aria-haspopup="true">
      <div class="js-user-status-expiration-interval-selected d-inline-block v-align-baseline">
        Never
      </div>
      <div class="dropdown-caret"></div>
    </summary>

    <ul class="dropdown-menu dropdown-menu-se pl-0 overflow-auto" style="width: 220px; max-height: 15.5em">
      <li>
        <button type="button" class="btn-link dropdown-item js-user-status-expire-button ws-normal" title="Never">
          <span class="d-inline-block text-bold mb-1">Never</span>
          <div class="f6 lh-condensed">Keep this status until you clear your status or edit your status.</div>
        </button>
      </li>
      <li class="dropdown-divider" role="none"></li>
        <li>
          <button type="button" class="btn-link dropdown-item ws-normal js-user-status-expire-button" title="in 30 minutes" value="2019-12-11T17:35:58+02:00">
            in 30 minutes
          </button>
        </li>
        <li>
          <button type="button" class="btn-link dropdown-item ws-normal js-user-status-expire-button" title="in 1 hour" value="2019-12-11T18:05:58+02:00">
            in 1 hour
          </button>
        </li>
        <li>
          <button type="button" class="btn-link dropdown-item ws-normal js-user-status-expire-button" title="in 4 hours" value="2019-12-11T21:05:58+02:00">
            in 4 hours
          </button>
        </li>
        <li>
          <button type="button" class="btn-link dropdown-item ws-normal js-user-status-expire-button" title="today" value="2019-12-11T23:59:59+02:00">
            today
          </button>
        </li>
        <li>
          <button type="button" class="btn-link dropdown-item ws-normal js-user-status-expire-button" title="this week" value="2019-12-15T23:59:59+02:00">
            this week
          </button>
        </li>
    </ul>
  </details>
  <input class="js-user-status-expiration-date-input" type="hidden" name="expires_at" value="">
</div>

          <include-fragment class="js-user-status-org-picker" data-url="/users/status/organizations"></include-fragment>
        </div>
        <div class="d-flex flex-items-center flex-justify-between p-3 border-top">
          <button type="submit" disabled class="width-full btn btn-primary mr-2 js-user-status-submit">
            Set status
          </button>
          <button type="button" disabled class="width-full js-clear-user-status-button btn ml-2 ">
            Clear status
          </button>
        </div>
</form>    </details-dialog>
  </details>
</div>

      </div>
      <div role="none" class="dropdown-divider"></div>


    <a role="menuitem" class="dropdown-item" href="/KrisKStoyanov" data-ga-click="Header, go to profile, text:your profile">Your profile</a>

    <a role="menuitem" class="dropdown-item" href="/KrisKStoyanov?tab=repositories" data-ga-click="Header, go to repositories, text:your repositories">Your repositories</a>

    <a role="menuitem" class="dropdown-item" href="/KrisKStoyanov?tab=projects" data-ga-click="Header, go to projects, text:your projects">Your projects</a>

    <a role="menuitem" class="dropdown-item" href="/KrisKStoyanov?tab=stars" data-ga-click="Header, go to starred repos, text:your stars">Your stars</a>
      <a role="menuitem" class="dropdown-item" href="https://gist.github.com/mine" data-ga-click="Header, your gists, text:your gists">Your gists</a>





    <div role="none" class="dropdown-divider"></div>
      
<div id="feature-enrollment-toggle" class="hide-sm hide-md feature-preview-details position-relative">
  <button
    type="button"
    class="dropdown-item btn-link"
    role="menuitem"
    data-feature-preview-trigger-url="/users/KrisKStoyanov/feature_previews"
    data-feature-preview-close-details="{&quot;event_type&quot;:&quot;feature_preview.clicks.close_modal&quot;,&quot;payload&quot;:{&quot;client_id&quot;:&quot;352704964.1568711131&quot;,&quot;originating_request_id&quot;:&quot;C3DC:1E601:F0A374A:167F2C35:5DF105D3&quot;,&quot;originating_url&quot;:&quot;https://github.com/microsoft/DirectX-Graphics-Samples/blob/master/Libraries/D3DX12/d3dx12.h&quot;,&quot;referrer&quot;:&quot;https://github.com/Microsoft/DirectX-Graphics-Samples/tree/master/Libraries/D3DX12&quot;,&quot;user_id&quot;:22742239}}"
    data-feature-preview-close-hmac="9c72ce17b31066357c38c70583c88a655de115ac2ebe169c496fa13c70ea127a"
    data-hydro-click="{&quot;event_type&quot;:&quot;feature_preview.clicks.open_modal&quot;,&quot;payload&quot;:{&quot;link_location&quot;:&quot;user_dropdown&quot;,&quot;client_id&quot;:&quot;352704964.1568711131&quot;,&quot;originating_request_id&quot;:&quot;C3DC:1E601:F0A374A:167F2C35:5DF105D3&quot;,&quot;originating_url&quot;:&quot;https://github.com/microsoft/DirectX-Graphics-Samples/blob/master/Libraries/D3DX12/d3dx12.h&quot;,&quot;referrer&quot;:&quot;https://github.com/Microsoft/DirectX-Graphics-Samples/tree/master/Libraries/D3DX12&quot;,&quot;user_id&quot;:22742239}}"
    data-hydro-click-hmac="812312753c734d1a1e9324efb2ca1be3a55bdd24e901235cb6a99a3e473b2446"
  >
    Feature preview
  </button>
    <span class="feature-preview-indicator js-feature-preview-indicator" hidden></span>
</div>

    <a role="menuitem" class="dropdown-item" href="https://help.github.com" data-ga-click="Header, go to help, text:help">Help</a>
    <a role="menuitem" class="dropdown-item" href="/settings/profile" data-ga-click="Header, go to settings, icon:settings">Settings</a>
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="logout-form" action="/logout" accept-charset="UTF-8" method="post"><input name="utf8" type="hidden" value="&#x2713;" /><input type="hidden" name="authenticity_token" value="oYQKPSKrvn9iilvvFmn3Tye2WB4OQpiA4tgeVZZt99nVaJf1QULeWMSKr4o5eLWd/kbnCplBIdFTaNxXiKLa0w==" />
      
      <button type="submit" class="dropdown-item dropdown-signout" data-ga-click="Header, sign out, icon:logout" role="menuitem">
        Sign out
      </button>
</form>  </details-menu>
</details>

    </div>

  </header>

      

  </div>

  <div id="start-of-content" class="show-on-focus"></div>


    <div id="js-flash-container">

</div>



  <div class="application-main " data-commit-hovercards-enabled>
        <div itemscope itemtype="http://schema.org/SoftwareSourceCode" class="">
    <main  >
      


  



  








  <div class=" pagehead repohead readability-menu experiment-repo-nav pt-0 pt-lg-4 ">
    <div class="repohead-details-container clearfix container-lg p-responsive d-none d-lg-block">

      <ul class="pagehead-actions">




  <li>
    
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form data-remote="true" class="clearfix js-social-form js-social-container" action="/notifications/subscribe" accept-charset="UTF-8" method="post"><input name="utf8" type="hidden" value="&#x2713;" /><input type="hidden" name="authenticity_token" value="7abPyF6Bm6gok/jTqOqYztXNOyHzB92U6bruRY/eRtK9EzJQ6RSUmJe4FkJdXMieA7KgG8+2iOoGNkR0REQv6g==" />      <input type="hidden" name="repository_id" value="36831874">

      <details class="details-reset details-overlay select-menu float-left">
        <summary class="select-menu-button float-left btn btn-sm btn-with-count" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;WATCH_BUTTON&quot;,&quot;repository_id&quot;:36831874,&quot;client_id&quot;:&quot;352704964.1568711131&quot;,&quot;originating_request_id&quot;:&quot;C3DC:1E601:F0A374A:167F2C35:5DF105D3&quot;,&quot;originating_url&quot;:&quot;https://github.com/microsoft/DirectX-Graphics-Samples/blob/master/Libraries/D3DX12/d3dx12.h&quot;,&quot;referrer&quot;:&quot;https://github.com/Microsoft/DirectX-Graphics-Samples/tree/master/Libraries/D3DX12&quot;,&quot;user_id&quot;:22742239}}" data-hydro-click-hmac="cd1c23e28f69a17c2b484697c145139172b69eb314426cf087e775c8b7382ad0" data-ga-click="Repository, click Watch settings, action:blob#show">          <span data-menu-button>
              <svg class="octicon octicon-eye v-align-text-bottom" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
              Watch
          </span>
</summary>        <details-menu
          class="select-menu-modal position-absolute mt-5"
          style="z-index: 99;">
          <div class="select-menu-header">
            <span class="select-menu-title">Notifications</span>
          </div>
          <div class="select-menu-list">
            <button type="submit" name="do" value="included" class="select-menu-item width-full" aria-checked="true" role="menuitemradio">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <div class="select-menu-item-text">
                <span class="select-menu-item-heading">Not watching</span>
                <span class="description">Be notified only when participating or @mentioned.</span>
                <span class="hidden-select-button-text" data-menu-button-contents>
                  <svg class="octicon octicon-eye v-align-text-bottom" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
                  Watch
                </span>
              </div>
            </button>

            <button type="submit" name="do" value="release_only" class="select-menu-item width-full" aria-checked="false" role="menuitemradio">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <div class="select-menu-item-text">
                <span class="select-menu-item-heading">Releases only</span>
                <span class="description">Be notified of new releases, and when participating or @mentioned.</span>
                <span class="hidden-select-button-text" data-menu-button-contents>
                  <svg class="octicon octicon-eye v-align-text-bottom" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
                  Unwatch releases
                </span>
              </div>
            </button>

            <button type="submit" name="do" value="subscribed" class="select-menu-item width-full" aria-checked="false" role="menuitemradio">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <div class="select-menu-item-text">
                <span class="select-menu-item-heading">Watching</span>
                <span class="description">Be notified of all conversations.</span>
                <span class="hidden-select-button-text" data-menu-button-contents>
                  <svg class="octicon octicon-eye v-align-text-bottom" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
                  Unwatch
                </span>
              </div>
            </button>

            <button type="submit" name="do" value="ignore" class="select-menu-item width-full" aria-checked="false" role="menuitemradio">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <div class="select-menu-item-text">
                <span class="select-menu-item-heading">Ignoring</span>
                <span class="description">Never be notified.</span>
                <span class="hidden-select-button-text" data-menu-button-contents>
                  <svg class="octicon octicon-mute v-align-text-bottom" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 2.81v10.38c0 .67-.81 1-1.28.53L3 10H1c-.55 0-1-.45-1-1V7c0-.55.45-1 1-1h2l3.72-3.72C7.19 1.81 8 2.14 8 2.81zm7.53 3.22l-1.06-1.06-1.97 1.97-1.97-1.97-1.06 1.06L11.44 8 9.47 9.97l1.06 1.06 1.97-1.97 1.97 1.97 1.06-1.06L13.56 8l1.97-1.97z"/></svg>
                  Stop ignoring
                </span>
              </div>
            </button>
          </div>
        </details-menu>
      </details>
        <a class="social-count js-social-count"
          href="/microsoft/DirectX-Graphics-Samples/watchers"
          aria-label="428 users are watching this repository">
          428
        </a>
</form>
  </li>

  <li>
      <div class="js-toggler-container js-social-container starring-container ">
    <form class="starred js-social-form" action="/microsoft/DirectX-Graphics-Samples/unstar" accept-charset="UTF-8" method="post"><input name="utf8" type="hidden" value="&#x2713;" /><input type="hidden" name="authenticity_token" value="Iog8iWpOshEIChXd0B+k+KjXxT0NdlUQjaUgJJQm0Cpz0//EqKK2anVML8TZ+RqOAwnY9udTOpxeN3ZqJhtQlw==" />
      <input type="hidden" name="context" value="repository"></input>
      <button type="submit" class="btn btn-sm btn-with-count js-toggler-target" aria-label="Unstar this repository" title="Unstar microsoft/DirectX-Graphics-Samples" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;UNSTAR_BUTTON&quot;,&quot;repository_id&quot;:36831874,&quot;client_id&quot;:&quot;352704964.1568711131&quot;,&quot;originating_request_id&quot;:&quot;C3DC:1E601:F0A374A:167F2C35:5DF105D3&quot;,&quot;originating_url&quot;:&quot;https://github.com/microsoft/DirectX-Graphics-Samples/blob/master/Libraries/D3DX12/d3dx12.h&quot;,&quot;referrer&quot;:&quot;https://github.com/Microsoft/DirectX-Graphics-Samples/tree/master/Libraries/D3DX12&quot;,&quot;user_id&quot;:22742239}}" data-hydro-click-hmac="cf3abc03665709288af36ca6fdafeb2b75205239c7f88e5f69a648b3515d55d9" data-ga-click="Repository, click unstar button, action:blob#show; text:Unstar">        <svg aria-label="star" height="16" class="octicon octicon-star v-align-text-bottom" viewBox="0 0 14 16" version="1.1" width="14" role="img"><path fill-rule="evenodd" d="M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74L14 6z"/></svg>

        Unstar
</button>        <a class="social-count js-social-count" href="/microsoft/DirectX-Graphics-Samples/stargazers"
           aria-label="2755 users starred this repository">
           2.8k
        </a>
</form>
    <form class="unstarred js-social-form" action="/microsoft/DirectX-Graphics-Samples/star" accept-charset="UTF-8" method="post"><input name="utf8" type="hidden" value="&#x2713;" /><input type="hidden" name="authenticity_token" value="/kXsao7GZgSPA6fGeKel9+vEVRxKx4IRaVIFR6NQrSXOKdWLZkKSQIyLx0b0LmFIArYY3fHxUjRd0ihaoOOLTg==" />
      <input type="hidden" name="context" value="repository"></input>
      <button type="submit" class="btn btn-sm btn-with-count js-toggler-target" aria-label="Unstar this repository" title="Star microsoft/DirectX-Graphics-Samples" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;STAR_BUTTON&quot;,&quot;repository_id&quot;:36831874,&quot;client_id&quot;:&quot;352704964.1568711131&quot;,&quot;originating_request_id&quot;:&quot;C3DC:1E601:F0A374A:167F2C35:5DF105D3&quot;,&quot;originating_url&quot;:&quot;https://github.com/microsoft/DirectX-Graphics-Samples/blob/master/Libraries/D3DX12/d3dx12.h&quot;,&quot;referrer&quot;:&quot;https://github.com/Microsoft/DirectX-Graphics-Samples/tree/master/Libraries/D3DX12&quot;,&quot;user_id&quot;:22742239}}" data-hydro-click-hmac="fb2aff049c69e1397d7a7e0858017ec80850c0ec24b1efca7da655b38f00bf37" data-ga-click="Repository, click star button, action:blob#show; text:Star">        <svg aria-label="star" height="16" class="octicon octicon-star v-align-text-bottom" viewBox="0 0 14 16" version="1.1" width="14" role="img"><path fill-rule="evenodd" d="M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74L14 6z"/></svg>

        Star
</button>        <a class="social-count js-social-count" href="/microsoft/DirectX-Graphics-Samples/stargazers"
           aria-label="2755 users starred this repository">
          2.8k
        </a>
</form>  </div>

  </li>

  <li>
          <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="btn-with-count" action="/microsoft/DirectX-Graphics-Samples/fork" accept-charset="UTF-8" method="post"><input name="utf8" type="hidden" value="&#x2713;" /><input type="hidden" name="authenticity_token" value="qNAr3mZscuNoNCNbJmkVqv69tEZgx6iSww4HuuQRqc5+KIDY6/zpmeusql1fFbrM9DWQcoyj86YSh2Xj0I2oKg==" />
            <button class="btn btn-sm btn-with-count" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;FORK_BUTTON&quot;,&quot;repository_id&quot;:36831874,&quot;client_id&quot;:&quot;352704964.1568711131&quot;,&quot;originating_request_id&quot;:&quot;C3DC:1E601:F0A374A:167F2C35:5DF105D3&quot;,&quot;originating_url&quot;:&quot;https://github.com/microsoft/DirectX-Graphics-Samples/blob/master/Libraries/D3DX12/d3dx12.h&quot;,&quot;referrer&quot;:&quot;https://github.com/Microsoft/DirectX-Graphics-Samples/tree/master/Libraries/D3DX12&quot;,&quot;user_id&quot;:22742239}}" data-hydro-click-hmac="fb244d9f7d4329ba4882e27b99eb51b9362a3709618e21932bb76ed9c0336875" data-ga-click="Repository, show fork modal, action:blob#show; text:Fork" type="submit" title="Fork your own copy of microsoft/DirectX-Graphics-Samples to your account" aria-label="Fork your own copy of microsoft/DirectX-Graphics-Samples to your account">              <svg class="octicon octicon-repo-forked v-align-text-bottom" viewBox="0 0 10 16" version="1.1" width="10" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 1a1.993 1.993 0 00-1 3.72V6L5 8 3 6V4.72A1.993 1.993 0 002 1a1.993 1.993 0 00-1 3.72V6.5l3 3v1.78A1.993 1.993 0 005 15a1.993 1.993 0 001-3.72V9.5l3-3V4.72A1.993 1.993 0 008 1zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3 10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3-10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
              Fork
</button></form>
    <a href="/microsoft/DirectX-Graphics-Samples/network/members" class="social-count"
       aria-label="1041 users forked this repository">
      1k
    </a>
  </li>
</ul>

      <h1 class="public ">
    <svg class="octicon octicon-repo" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M4 9H3V8h1v1zm0-3H3v1h1V6zm0-2H3v1h1V4zm0-2H3v1h1V2zm8-1v12c0 .55-.45 1-1 1H6v2l-1.5-1.5L3 16v-2H1c-.55 0-1-.45-1-1V1c0-.55.45-1 1-1h10c.55 0 1 .45 1 1zm-1 10H1v2h2v-1h3v1h5v-2zm0-10H2v9h9V1z"/></svg>
  <span class="author" itemprop="author"><a class="url fn" rel="author" data-hovercard-type="organization" data-hovercard-url="/orgs/microsoft/hovercard" href="/microsoft">microsoft</a></span><!--
--><span class="path-divider">/</span><!--
--><strong itemprop="name"><a data-pjax="#js-repo-pjax-container" href="/microsoft/DirectX-Graphics-Samples">DirectX-Graphics-Samples</a></strong>
  

</h1>

    </div>
    
<nav class="hx_reponav reponav js-repo-nav js-sidenav-container-pjax container-lg p-responsive d-none d-lg-block"
     itemscope
     itemtype="http://schema.org/BreadcrumbList"
    aria-label="Repository"
     data-pjax="#js-repo-pjax-container">

  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a class="js-selected-navigation-item selected reponav-item" itemprop="url" data-hotkey="g c" aria-current="page" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches repo_packages /microsoft/DirectX-Graphics-Samples" href="/microsoft/DirectX-Graphics-Samples">
      <div class="d-inline"><svg class="octicon octicon-code" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M9.5 3L8 4.5 11.5 8 8 11.5 9.5 13 14 8 9.5 3zm-5 0L0 8l4.5 5L6 11.5 2.5 8 6 4.5 4.5 3z"/></svg></div>
      <span itemprop="name">Code</span>
      <meta itemprop="position" content="1">
</a>  </span>

    <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
      <a itemprop="url" data-hotkey="g i" class="js-selected-navigation-item reponav-item" data-selected-links="repo_issues repo_labels repo_milestones /microsoft/DirectX-Graphics-Samples/issues" href="/microsoft/DirectX-Graphics-Samples/issues">
        <div class="d-inline"><svg class="octicon octicon-issue-opened" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7 2.3c3.14 0 5.7 2.56 5.7 5.7s-2.56 5.7-5.7 5.7A5.71 5.71 0 011.3 8c0-3.14 2.56-5.7 5.7-5.7zM7 1C3.14 1 0 4.14 0 8s3.14 7 7 7 7-3.14 7-7-3.14-7-7-7zm1 3H6v5h2V4zm0 6H6v2h2v-2z"/></svg></div>
        <span itemprop="name">Issues</span>
        <span class="Counter">68</span>
        <meta itemprop="position" content="2">
</a>    </span>

  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a data-hotkey="g p" data-skip-pjax="true" itemprop="url" class="js-selected-navigation-item reponav-item" data-selected-links="repo_pulls checks /microsoft/DirectX-Graphics-Samples/pulls" href="/microsoft/DirectX-Graphics-Samples/pulls">
      <div class="d-inline"><svg class="octicon octicon-git-pull-request" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M11 11.28V5c-.03-.78-.34-1.47-.94-2.06C9.46 2.35 8.78 2.03 8 2H7V0L4 3l3 3V4h1c.27.02.48.11.69.31.21.2.3.42.31.69v6.28A1.993 1.993 0 0010 15a1.993 1.993 0 001-3.72zm-1 2.92c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zM4 3c0-1.11-.89-2-2-2a1.993 1.993 0 00-1 3.72v6.56A1.993 1.993 0 002 15a1.993 1.993 0 001-3.72V4.72c.59-.34 1-.98 1-1.72zm-.8 10c0 .66-.55 1.2-1.2 1.2-.65 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg></div>
      <span itemprop="name">Pull requests</span>
      <span class="Counter">3</span>
      <meta itemprop="position" content="3">
</a>  </span>

    <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement" class="position-relative float-left">
      <a data-hotkey="g w" data-skip-pjax="true" class="js-selected-navigation-item reponav-item" data-selected-links="repo_actions /microsoft/DirectX-Graphics-Samples/actions" href="/microsoft/DirectX-Graphics-Samples/actions">
        <div class="d-inline"><svg class="octicon octicon-play" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M14 8A7 7 0 110 8a7 7 0 0114 0zm-8.223 3.482l4.599-3.066a.5.5 0 000-.832L5.777 4.518A.5.5 0 005 4.934v6.132a.5.5 0 00.777.416z"/></svg></div>
        Actions
</a>
    </span>

    <a data-hotkey="g b" class="js-selected-navigation-item reponav-item" data-selected-links="repo_projects new_repo_project repo_project /microsoft/DirectX-Graphics-Samples/projects" href="/microsoft/DirectX-Graphics-Samples/projects">
      <div class="d-inline"><svg class="octicon octicon-project" viewBox="0 0 15 16" version="1.1" width="15" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M10 12h3V2h-3v10zm-4-2h3V2H6v8zm-4 4h3V2H2v12zm-1 1h13V1H1v14zM14 0H1a1 1 0 00-1 1v14a1 1 0 001 1h13a1 1 0 001-1V1a1 1 0 00-1-1z"/></svg></div>
      Projects
      <span class="Counter" >0</span>
</a>

    <a class="js-selected-navigation-item reponav-item" data-hotkey="g w" data-selected-links="repo_wiki /microsoft/DirectX-Graphics-Samples/wiki" href="/microsoft/DirectX-Graphics-Samples/wiki">
      <div class="d-inline"><svg class="octicon octicon-book" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M3 5h4v1H3V5zm0 3h4V7H3v1zm0 2h4V9H3v1zm11-5h-4v1h4V5zm0 2h-4v1h4V7zm0 2h-4v1h4V9zm2-6v9c0 .55-.45 1-1 1H9.5l-1 1-1-1H2c-.55 0-1-.45-1-1V3c0-.55.45-1 1-1h5.5l1 1 1-1H15c.55 0 1 .45 1 1zm-8 .5L7.5 3H2v9h6V3.5zm7-.5H9.5l-.5.5V12h6V3z"/></svg></div>
      Wiki
</a>
    <a data-skip-pjax="true" class="js-selected-navigation-item reponav-item" data-selected-links="security alerts policy code_scanning /microsoft/DirectX-Graphics-Samples/security/advisories" href="/microsoft/DirectX-Graphics-Samples/security/advisories">
      <div class="d-inline"><svg class="octicon octicon-shield" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M0 2l7-2 7 2v6.02C14 12.69 8.69 16 7 16c-1.69 0-7-3.31-7-7.98V2zm1 .75L7 1l6 1.75v5.268C13 12.104 8.449 15 7 15c-1.449 0-6-2.896-6-6.982V2.75zm1 .75L7 2v12c-1.207 0-5-2.482-5-5.985V3.5z"/></svg></div>
      Security
</a>
    <a class="js-selected-navigation-item reponav-item" data-selected-links="repo_graphs repo_contributors dependency_graph pulse people /microsoft/DirectX-Graphics-Samples/pulse" href="/microsoft/DirectX-Graphics-Samples/pulse">
      <div class="d-inline"><svg class="octicon octicon-graph" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M16 14v1H0V0h1v14h15zM5 13H3V8h2v5zm4 0H7V3h2v10zm4 0h-2V6h2v7z"/></svg></div>
      Insights
</a>

</nav>

  <div class="reponav-wrapper reponav-small d-lg-none">
  <nav class="reponav js-reponav text-center no-wrap"
       itemscope
       itemtype="http://schema.org/BreadcrumbList">

    <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
      <a class="js-selected-navigation-item selected reponav-item" itemprop="url" aria-current="page" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches repo_packages /microsoft/DirectX-Graphics-Samples" href="/microsoft/DirectX-Graphics-Samples">
        <span itemprop="name">Code</span>
        <meta itemprop="position" content="1">
</a>    </span>

      <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
        <a itemprop="url" class="js-selected-navigation-item reponav-item" data-selected-links="repo_issues repo_labels repo_milestones /microsoft/DirectX-Graphics-Samples/issues" href="/microsoft/DirectX-Graphics-Samples/issues">
          <span itemprop="name">Issues</span>
          <span class="Counter">68</span>
          <meta itemprop="position" content="2">
</a>      </span>

    <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
      <a itemprop="url" class="js-selected-navigation-item reponav-item" data-selected-links="repo_pulls checks /microsoft/DirectX-Graphics-Samples/pulls" href="/microsoft/DirectX-Graphics-Samples/pulls">
        <span itemprop="name">Pull requests</span>
        <span class="Counter">3</span>
        <meta itemprop="position" content="3">
</a>    </span>

      <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
        <a itemprop="url" class="js-selected-navigation-item reponav-item" data-selected-links="repo_projects new_repo_project repo_project /microsoft/DirectX-Graphics-Samples/projects" href="/microsoft/DirectX-Graphics-Samples/projects">
          <span itemprop="name">Projects</span>
          <span class="Counter">0</span>
          <meta itemprop="position" content="4">
</a>      </span>

      <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
        <a itemprop="url" class="js-selected-navigation-item reponav-item" data-selected-links="repo_wiki /microsoft/DirectX-Graphics-Samples/wiki" href="/microsoft/DirectX-Graphics-Samples/wiki">
          <span itemprop="name">Wiki</span>
          <meta itemprop="position" content="5">
</a>      </span>

      <a itemprop="url" class="js-selected-navigation-item reponav-item" data-selected-links="security alerts policy code_scanning /microsoft/DirectX-Graphics-Samples/security/advisories" href="/microsoft/DirectX-Graphics-Samples/security/advisories">
        <span itemprop="name">Security</span>
        <meta itemprop="position" content="6">
</a>
      <a class="js-selected-navigation-item reponav-item" data-selected-links="pulse /microsoft/DirectX-Graphics-Samples/pulse" href="/microsoft/DirectX-Graphics-Samples/pulse">
        Pulse
</a>
      <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
        <a itemprop="url" class="js-selected-navigation-item reponav-item" data-selected-links="community /microsoft/DirectX-Graphics-Samples/community" href="/microsoft/DirectX-Graphics-Samples/community">
          Community
</a>      </span>

  </nav>
</div>


  </div>
<div class="container-lg clearfix new-discussion-timeline experiment-repo-nav  p-responsive">
  <div class="repository-content ">

    
    


  


    <a class="d-none js-permalink-shortcut" data-hotkey="y" href="/microsoft/DirectX-Graphics-Samples/blob/29fb35649a449da30adcbfefee5d2e1a8258c718/Libraries/D3DX12/d3dx12.h">Permalink</a>

    <!-- blob contrib key: blob_contributors:v21:131c0930ee8457ec81dcc9edcfec29b5 -->
      

    <div class="d-flex flex-items-start flex-shrink-0 pb-3 flex-column flex-md-row">
      <span class="d-flex flex-justify-between width-full width-md-auto">
        
<details class="details-reset details-overlay select-menu branch-select-menu  hx_rsm" id="branch-select-menu">
  <summary class="btn btn-sm select-menu-button css-truncate"
           data-hotkey="w"
           title="Switch branches or tags">
    <i>Branch:</i>
    <span class="css-truncate-target" data-menu-button>master</span>
  </summary>

  <details-menu class="select-menu-modal hx_rsm-modal position-absolute" style="z-index: 99;" src="/microsoft/DirectX-Graphics-Samples/refs/master/Libraries/D3DX12/d3dx12.h?source_action=show&amp;source_controller=blob" preload>
    <include-fragment class="select-menu-loading-overlay anim-pulse">
      <svg height="32" class="octicon octicon-octoface" viewBox="0 0 16 16" version="1.1" width="32" aria-hidden="true"><path fill-rule="evenodd" d="M14.7 5.34c.13-.32.55-1.59-.13-3.31 0 0-1.05-.33-3.44 1.3-1-.28-2.07-.32-3.13-.32s-2.13.04-3.13.32c-2.39-1.64-3.44-1.3-3.44-1.3-.68 1.72-.26 2.99-.13 3.31C.49 6.21 0 7.33 0 8.69 0 13.84 3.33 15 7.98 15S16 13.84 16 8.69c0-1.36-.49-2.48-1.3-3.35zM8 14.02c-3.3 0-5.98-.15-5.98-3.35 0-.76.38-1.48 1.02-2.07 1.07-.98 2.9-.46 4.96-.46 2.07 0 3.88-.52 4.96.46.65.59 1.02 1.3 1.02 2.07 0 3.19-2.68 3.35-5.98 3.35zM5.49 9.01c-.66 0-1.2.8-1.2 1.78s.54 1.79 1.2 1.79c.66 0 1.2-.8 1.2-1.79s-.54-1.78-1.2-1.78zm5.02 0c-.66 0-1.2.79-1.2 1.78s.54 1.79 1.2 1.79c.66 0 1.2-.8 1.2-1.79s-.53-1.78-1.2-1.78z"/></svg>
    </include-fragment>
  </details-menu>
</details>

        <div class="BtnGroup flex-shrink-0 d-md-none">
          <a href="/microsoft/DirectX-Graphics-Samples/find/master"
                class="js-pjax-capture-input btn btn-sm BtnGroup-item"
                data-pjax
                data-hotkey="t">
            Find file
          </a>
          <clipboard-copy value="Libraries/D3DX12/d3dx12.h" class="btn btn-sm BtnGroup-item">
            Copy path
          </clipboard-copy>
        </div>
      </span>
      <h2 id="blob-path" class="breadcrumb flex-auto min-width-0 text-normal flex-md-self-center ml-md-2 mr-md-3 my-2 my-md-0">
        <span class="js-repo-root text-bold"><span class="js-path-segment"><a data-pjax="true" href="/microsoft/DirectX-Graphics-Samples"><span>DirectX-Graphics-Samples</span></a></span></span><span class="separator">/</span><span class="js-path-segment"><a data-pjax="true" href="/microsoft/DirectX-Graphics-Samples/tree/master/Libraries"><span>Libraries</span></a></span><span class="separator">/</span><span class="js-path-segment"><a data-pjax="true" href="/microsoft/DirectX-Graphics-Samples/tree/master/Libraries/D3DX12"><span>D3DX12</span></a></span><span class="separator">/</span><strong class="final-path">d3dx12.h</strong>
      </h2>

      <div class="BtnGroup flex-shrink-0 d-none d-md-inline-block">
        <a href="/microsoft/DirectX-Graphics-Samples/find/master"
              class="js-pjax-capture-input btn btn-sm BtnGroup-item"
              data-pjax
              data-hotkey="t">
          Find file
        </a>
        <clipboard-copy value="Libraries/D3DX12/d3dx12.h" class="btn btn-sm BtnGroup-item">
          Copy path
        </clipboard-copy>
      </div>
    </div>

    



    
  <div class="Box Box--condensed d-flex flex-column flex-shrink-0">
      <div class="Box-body d-flex flex-justify-between bg-blue-light flex-column flex-md-row flex-items-start flex-md-items-center">
        <span class="pr-md-4 f6">
          <a rel="contributor" data-skip-pjax="true" data-hovercard-type="user" data-hovercard-url="/users/walbourn/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/walbourn"><img class="avatar" src="https://avatars2.githubusercontent.com/u/11866002?s=40&amp;v=4" width="20" height="20" alt="@walbourn" /></a>
          <a class="text-bold link-gray-dark lh-default v-align-middle" rel="contributor" data-hovercard-type="user" data-hovercard-url="/users/walbourn/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/walbourn">walbourn</a>
            <span class="lh-default v-align-middle">
              <a data-pjax="true" title="Fixed /analyze warning for VS 2019 in D3DX12.h" class="link-gray" href="/microsoft/DirectX-Graphics-Samples/commit/a7a87f1853b5540f10920518021d91ae641033fb">Fixed /analyze warning for VS 2019 in D3DX12.h</a>
            </span>
        </span>
        <span class="d-inline-block flex-shrink-0 v-align-bottom f6 mt-2 mt-md-0">
          <a class="pr-2 text-mono link-gray" href="/microsoft/DirectX-Graphics-Samples/commit/a7a87f1853b5540f10920518021d91ae641033fb" data-pjax>a7a87f1</a>
          <relative-time datetime="2019-08-22T20:10:37Z" class="no-wrap">Aug 23, 2019</relative-time>
        </span>
      </div>

    <div class="Box-body d-flex flex-items-center flex-auto f6 border-bottom-0 flex-wrap" >
      <details class="details-reset details-overlay details-overlay-dark lh-default text-gray-dark float-left mr-2" id="blob_contributors_box">
        <summary class="btn-link">
          <span><strong>5</strong> contributors</span>
        </summary>
        <details-dialog
          class="Box Box--overlay d-flex flex-column anim-fade-in fast"
          aria-label="Users who have contributed to this file"
          src="/microsoft/DirectX-Graphics-Samples/contributors-list/master/Libraries/D3DX12/d3dx12.h" preload>
          <div class="Box-header">
            <button class="Box-btn-octicon btn-octicon float-right" type="button" aria-label="Close dialog" data-close-dialog>
              <svg class="octicon octicon-x" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z"/></svg>
            </button>
            <h3 class="Box-title">
              Users who have contributed to this file
            </h3>
          </div>
          <include-fragment class="octocat-spinner my-3" aria-label="Loading..."></include-fragment>
        </details-dialog>
      </details>
        <span class="">
    <a class="avatar-link" data-hovercard-type="user" data-hovercard-url="/users/walbourn/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/microsoft/DirectX-Graphics-Samples/commits/master/Libraries/D3DX12/d3dx12.h?author=walbourn">
      <img class="avatar mr-1" src="https://avatars2.githubusercontent.com/u/11866002?s=40&amp;v=4" width="20" height="20" alt="@walbourn" /> 
</a>    <a class="avatar-link" data-hovercard-type="user" data-hovercard-url="/users/pkristof/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/microsoft/DirectX-Graphics-Samples/commits/master/Libraries/D3DX12/d3dx12.h?author=pkristof">
      <img class="avatar mr-1" src="https://avatars3.githubusercontent.com/u/25936161?s=40&amp;v=4" width="20" height="20" alt="@pkristof" /> 
</a>    <a class="avatar-link" data-hovercard-type="user" data-hovercard-url="/users/bobbrow/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/microsoft/DirectX-Graphics-Samples/commits/master/Libraries/D3DX12/d3dx12.h?author=bobbrow">
      <img class="avatar mr-1" src="https://avatars0.githubusercontent.com/u/12818240?s=40&amp;v=4" width="20" height="20" alt="@bobbrow" /> 
</a>    <a class="avatar-link" data-hovercard-type="user" data-hovercard-url="/users/shuweihsu/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/microsoft/DirectX-Graphics-Samples/commits/master/Libraries/D3DX12/d3dx12.h?author=shuweihsu">
      <img class="avatar mr-1" src="https://avatars1.githubusercontent.com/u/26016216?s=40&amp;v=4" width="20" height="20" alt="@shuweihsu" /> 
</a>    <a class="avatar-link" data-hovercard-type="user" data-hovercard-url="/users/jenatali/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/microsoft/DirectX-Graphics-Samples/commits/master/Libraries/D3DX12/d3dx12.h?author=jenatali">
      <img class="avatar mr-1" src="https://avatars1.githubusercontent.com/u/17788890?s=40&amp;v=4" width="20" height="20" alt="@jenatali" /> 
</a>
</span>

    </div>
  </div>





    <div class="Box mt-3 position-relative">
      
<div class="Box-header py-2 d-flex flex-column flex-shrink-0 flex-md-row flex-md-items-center">
  <div class="text-mono f6 flex-auto pr-3 flex-order-2 flex-md-order-1 mt-2 mt-md-0">

      3440 lines (3262 sloc)
      <span class="file-info-divider"></span>
    139 KB
  </div>

  <div class="d-flex py-1 py-md-0 flex-auto flex-order-1 flex-md-order-2 flex-sm-grow-0 flex-justify-between">

    <div class="BtnGroup">
      <a id="raw-url" class="btn btn-sm BtnGroup-item" href="/microsoft/DirectX-Graphics-Samples/raw/master/Libraries/D3DX12/d3dx12.h">Raw</a>
        <a class="btn btn-sm js-update-url-with-hash BtnGroup-item" data-hotkey="b" href="/microsoft/DirectX-Graphics-Samples/blame/master/Libraries/D3DX12/d3dx12.h">Blame</a>
      <a rel="nofollow" class="btn btn-sm BtnGroup-item" href="/microsoft/DirectX-Graphics-Samples/commits/master/Libraries/D3DX12/d3dx12.h">History</a>
    </div>


    <div>
            <a class="btn-octicon tooltipped tooltipped-nw hide-sm"
               href="github-windows://openRepo/https://github.com/microsoft/DirectX-Graphics-Samples?branch=master&amp;filepath=Libraries%2FD3DX12%2Fd3dx12.h"
               aria-label="Open this file in GitHub Desktop"
               data-ga-click="Repository, open with desktop, type:windows">
                <svg class="octicon octicon-device-desktop" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M15 2H1c-.55 0-1 .45-1 1v9c0 .55.45 1 1 1h5.34c-.25.61-.86 1.39-2.34 2h8c-1.48-.61-2.09-1.39-2.34-2H15c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm0 9H1V3h14v8z"/></svg>
            </a>

            <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="inline-form js-update-url-with-hash" action="/microsoft/DirectX-Graphics-Samples/edit/master/Libraries/D3DX12/d3dx12.h" accept-charset="UTF-8" method="post"><input name="utf8" type="hidden" value="&#x2713;" /><input type="hidden" name="authenticity_token" value="p5dwwY4Xl/8bp0PDin38+8wpCpq75vMmI61iq8x2l5dxAJZhk8b5UT0jALXD1hUOkDdE/mO+NIlQJ5ngxVblPA==" />
              <button class="btn-octicon tooltipped tooltipped-nw" type="submit"
                aria-label="Edit the file in your fork of this project" data-hotkey="e" data-disable-with>
                <svg class="octicon octicon-pencil" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M0 12v3h3l8-8-3-3-8 8zm3 2H1v-2h1v1h1v1zm10.3-9.3L12 6 9 3l1.3-1.3a.996.996 0 011.41 0l1.59 1.59c.39.39.39 1.02 0 1.41z"/></svg>
              </button>
</form>
          <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="inline-form" action="/microsoft/DirectX-Graphics-Samples/delete/master/Libraries/D3DX12/d3dx12.h" accept-charset="UTF-8" method="post"><input name="utf8" type="hidden" value="&#x2713;" /><input type="hidden" name="authenticity_token" value="DiR8Lz+ZZmOaHFPjeWN9SOYBxuxHavzAXJ9/ja45N2W3EBc8c9yoyl3n/ILrQuHDCa8I00ycZTFlTMTaSLs60Q==" />
            <button class="btn-octicon btn-octicon-danger tooltipped tooltipped-nw" type="submit"
              aria-label="Delete the file in your fork of this project" data-disable-with>
              <svg class="octicon octicon-trashcan" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M11 2H9c0-.55-.45-1-1-1H5c-.55 0-1 .45-1 1H2c-.55 0-1 .45-1 1v1c0 .55.45 1 1 1v9c0 .55.45 1 1 1h7c.55 0 1-.45 1-1V5c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm-1 12H3V5h1v8h1V5h1v8h1V5h1v8h1V5h1v9zm1-10H2V3h9v1z"/></svg>
            </button>
</form>    </div>
  </div>
</div>




      

  <div itemprop="text" class="Box-body p-0 blob-wrapper data type-c ">
      
<table class="highlight tab-size js-file-line-container" data-tab-size="8">
      <tr>
        <td id="L1" class="blob-num js-line-number" data-line-number="1"></td>
        <td id="LC1" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>*********************************************************</span></td>
      </tr>
      <tr>
        <td id="L2" class="blob-num js-line-number" data-line-number="2"></td>
        <td id="LC2" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span></span></td>
      </tr>
      <tr>
        <td id="L3" class="blob-num js-line-number" data-line-number="3"></td>
        <td id="LC3" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Copyright (c) Microsoft. All rights reserved.</span></td>
      </tr>
      <tr>
        <td id="L4" class="blob-num js-line-number" data-line-number="4"></td>
        <td id="LC4" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> This code is licensed under the MIT License (MIT).</span></td>
      </tr>
      <tr>
        <td id="L5" class="blob-num js-line-number" data-line-number="5"></td>
        <td id="LC5" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF</span></td>
      </tr>
      <tr>
        <td id="L6" class="blob-num js-line-number" data-line-number="6"></td>
        <td id="LC6" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY</span></td>
      </tr>
      <tr>
        <td id="L7" class="blob-num js-line-number" data-line-number="7"></td>
        <td id="LC7" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR</span></td>
      </tr>
      <tr>
        <td id="L8" class="blob-num js-line-number" data-line-number="8"></td>
        <td id="LC8" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.</span></td>
      </tr>
      <tr>
        <td id="L9" class="blob-num js-line-number" data-line-number="9"></td>
        <td id="LC9" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span></span></td>
      </tr>
      <tr>
        <td id="L10" class="blob-num js-line-number" data-line-number="10"></td>
        <td id="LC10" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>*********************************************************</span></td>
      </tr>
      <tr>
        <td id="L11" class="blob-num js-line-number" data-line-number="11"></td>
        <td id="LC11" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L12" class="blob-num js-line-number" data-line-number="12"></td>
        <td id="LC12" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifndef</span> __D3DX12_H__</td>
      </tr>
      <tr>
        <td id="L13" class="blob-num js-line-number" data-line-number="13"></td>
        <td id="LC13" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">__D3DX12_H__</span></td>
      </tr>
      <tr>
        <td id="L14" class="blob-num js-line-number" data-line-number="14"></td>
        <td id="LC14" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L15" class="blob-num js-line-number" data-line-number="15"></td>
        <td id="LC15" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>d3d12.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L16" class="blob-num js-line-number" data-line-number="16"></td>
        <td id="LC16" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L17" class="blob-num js-line-number" data-line-number="17"></td>
        <td id="LC17" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> defined( __cplusplus )</td>
      </tr>
      <tr>
        <td id="L18" class="blob-num js-line-number" data-line-number="18"></td>
        <td id="LC18" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L19" class="blob-num js-line-number" data-line-number="19"></td>
        <td id="LC19" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_DEFAULT {};</td>
      </tr>
      <tr>
        <td id="L20" class="blob-num js-line-number" data-line-number="20"></td>
        <td id="LC20" class="blob-code blob-code-inner js-file-line"><span class="pl-k">extern</span> <span class="pl-k">const</span> DECLSPEC_SELECTANY CD3DX12_DEFAULT D3D12_DEFAULT;</td>
      </tr>
      <tr>
        <td id="L21" class="blob-num js-line-number" data-line-number="21"></td>
        <td id="LC21" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L22" class="blob-num js-line-number" data-line-number="22"></td>
        <td id="LC22" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L23" class="blob-num js-line-number" data-line-number="23"></td>
        <td id="LC23" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">bool</span> operator==( <span class="pl-k">const</span> D3D12_VIEWPORT&amp; l, <span class="pl-k">const</span> D3D12_VIEWPORT&amp; r )</td>
      </tr>
      <tr>
        <td id="L24" class="blob-num js-line-number" data-line-number="24"></td>
        <td id="LC24" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L25" class="blob-num js-line-number" data-line-number="25"></td>
        <td id="LC25" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> l.<span class="pl-smi">TopLeftX</span> == r.<span class="pl-smi">TopLeftX</span> &amp;&amp; l.<span class="pl-smi">TopLeftY</span> == r.<span class="pl-smi">TopLeftY</span> &amp;&amp; l.<span class="pl-smi">Width</span> == r.<span class="pl-smi">Width</span> &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L26" class="blob-num js-line-number" data-line-number="26"></td>
        <td id="LC26" class="blob-code blob-code-inner js-file-line">        l.<span class="pl-smi">Height</span> == r.<span class="pl-smi">Height</span> &amp;&amp; l.<span class="pl-smi">MinDepth</span> == r.<span class="pl-smi">MinDepth</span> &amp;&amp; l.<span class="pl-smi">MaxDepth</span> == r.<span class="pl-smi">MaxDepth</span>;</td>
      </tr>
      <tr>
        <td id="L27" class="blob-num js-line-number" data-line-number="27"></td>
        <td id="LC27" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L28" class="blob-num js-line-number" data-line-number="28"></td>
        <td id="LC28" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L29" class="blob-num js-line-number" data-line-number="29"></td>
        <td id="LC29" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L30" class="blob-num js-line-number" data-line-number="30"></td>
        <td id="LC30" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">bool</span> operator!=( <span class="pl-k">const</span> D3D12_VIEWPORT&amp; l, <span class="pl-k">const</span> D3D12_VIEWPORT&amp; r )</td>
      </tr>
      <tr>
        <td id="L31" class="blob-num js-line-number" data-line-number="31"></td>
        <td id="LC31" class="blob-code blob-code-inner js-file-line">{ <span class="pl-k">return</span> !( l == r ); }</td>
      </tr>
      <tr>
        <td id="L32" class="blob-num js-line-number" data-line-number="32"></td>
        <td id="LC32" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L33" class="blob-num js-line-number" data-line-number="33"></td>
        <td id="LC33" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L34" class="blob-num js-line-number" data-line-number="34"></td>
        <td id="LC34" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_RECT : public D3D12_RECT</td>
      </tr>
      <tr>
        <td id="L35" class="blob-num js-line-number" data-line-number="35"></td>
        <td id="LC35" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L36" class="blob-num js-line-number" data-line-number="36"></td>
        <td id="LC36" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_RECT</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L37" class="blob-num js-line-number" data-line-number="37"></td>
        <td id="LC37" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_RECT</span>( <span class="pl-k">const</span> D3D12_RECT&amp; o ) :</td>
      </tr>
      <tr>
        <td id="L38" class="blob-num js-line-number" data-line-number="38"></td>
        <td id="LC38" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_RECT</span>( o )</td>
      </tr>
      <tr>
        <td id="L39" class="blob-num js-line-number" data-line-number="39"></td>
        <td id="LC39" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L40" class="blob-num js-line-number" data-line-number="40"></td>
        <td id="LC40" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_RECT</span>(</td>
      </tr>
      <tr>
        <td id="L41" class="blob-num js-line-number" data-line-number="41"></td>
        <td id="LC41" class="blob-code blob-code-inner js-file-line">        LONG Left,</td>
      </tr>
      <tr>
        <td id="L42" class="blob-num js-line-number" data-line-number="42"></td>
        <td id="LC42" class="blob-code blob-code-inner js-file-line">        LONG Top,</td>
      </tr>
      <tr>
        <td id="L43" class="blob-num js-line-number" data-line-number="43"></td>
        <td id="LC43" class="blob-code blob-code-inner js-file-line">        LONG Right,</td>
      </tr>
      <tr>
        <td id="L44" class="blob-num js-line-number" data-line-number="44"></td>
        <td id="LC44" class="blob-code blob-code-inner js-file-line">        LONG Bottom )</td>
      </tr>
      <tr>
        <td id="L45" class="blob-num js-line-number" data-line-number="45"></td>
        <td id="LC45" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L46" class="blob-num js-line-number" data-line-number="46"></td>
        <td id="LC46" class="blob-code blob-code-inner js-file-line">        left = Left;</td>
      </tr>
      <tr>
        <td id="L47" class="blob-num js-line-number" data-line-number="47"></td>
        <td id="LC47" class="blob-code blob-code-inner js-file-line">        top = Top;</td>
      </tr>
      <tr>
        <td id="L48" class="blob-num js-line-number" data-line-number="48"></td>
        <td id="LC48" class="blob-code blob-code-inner js-file-line">        right = Right;</td>
      </tr>
      <tr>
        <td id="L49" class="blob-num js-line-number" data-line-number="49"></td>
        <td id="LC49" class="blob-code blob-code-inner js-file-line">        bottom = Bottom;</td>
      </tr>
      <tr>
        <td id="L50" class="blob-num js-line-number" data-line-number="50"></td>
        <td id="LC50" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L51" class="blob-num js-line-number" data-line-number="51"></td>
        <td id="LC51" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L52" class="blob-num js-line-number" data-line-number="52"></td>
        <td id="LC52" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L53" class="blob-num js-line-number" data-line-number="53"></td>
        <td id="LC53" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L54" class="blob-num js-line-number" data-line-number="54"></td>
        <td id="LC54" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_VIEWPORT : public D3D12_VIEWPORT</td>
      </tr>
      <tr>
        <td id="L55" class="blob-num js-line-number" data-line-number="55"></td>
        <td id="LC55" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L56" class="blob-num js-line-number" data-line-number="56"></td>
        <td id="LC56" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_VIEWPORT</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L57" class="blob-num js-line-number" data-line-number="57"></td>
        <td id="LC57" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_VIEWPORT</span>( <span class="pl-k">const</span> D3D12_VIEWPORT&amp; o ) :</td>
      </tr>
      <tr>
        <td id="L58" class="blob-num js-line-number" data-line-number="58"></td>
        <td id="LC58" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_VIEWPORT</span>( o )</td>
      </tr>
      <tr>
        <td id="L59" class="blob-num js-line-number" data-line-number="59"></td>
        <td id="LC59" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L60" class="blob-num js-line-number" data-line-number="60"></td>
        <td id="LC60" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_VIEWPORT</span>(</td>
      </tr>
      <tr>
        <td id="L61" class="blob-num js-line-number" data-line-number="61"></td>
        <td id="LC61" class="blob-code blob-code-inner js-file-line">        FLOAT topLeftX,</td>
      </tr>
      <tr>
        <td id="L62" class="blob-num js-line-number" data-line-number="62"></td>
        <td id="LC62" class="blob-code blob-code-inner js-file-line">        FLOAT topLeftY,</td>
      </tr>
      <tr>
        <td id="L63" class="blob-num js-line-number" data-line-number="63"></td>
        <td id="LC63" class="blob-code blob-code-inner js-file-line">        FLOAT width,</td>
      </tr>
      <tr>
        <td id="L64" class="blob-num js-line-number" data-line-number="64"></td>
        <td id="LC64" class="blob-code blob-code-inner js-file-line">        FLOAT height,</td>
      </tr>
      <tr>
        <td id="L65" class="blob-num js-line-number" data-line-number="65"></td>
        <td id="LC65" class="blob-code blob-code-inner js-file-line">        FLOAT minDepth = D3D12_MIN_DEPTH,</td>
      </tr>
      <tr>
        <td id="L66" class="blob-num js-line-number" data-line-number="66"></td>
        <td id="LC66" class="blob-code blob-code-inner js-file-line">        FLOAT maxDepth = D3D12_MAX_DEPTH )</td>
      </tr>
      <tr>
        <td id="L67" class="blob-num js-line-number" data-line-number="67"></td>
        <td id="LC67" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L68" class="blob-num js-line-number" data-line-number="68"></td>
        <td id="LC68" class="blob-code blob-code-inner js-file-line">        TopLeftX = topLeftX;</td>
      </tr>
      <tr>
        <td id="L69" class="blob-num js-line-number" data-line-number="69"></td>
        <td id="LC69" class="blob-code blob-code-inner js-file-line">        TopLeftY = topLeftY;</td>
      </tr>
      <tr>
        <td id="L70" class="blob-num js-line-number" data-line-number="70"></td>
        <td id="LC70" class="blob-code blob-code-inner js-file-line">        Width = width;</td>
      </tr>
      <tr>
        <td id="L71" class="blob-num js-line-number" data-line-number="71"></td>
        <td id="LC71" class="blob-code blob-code-inner js-file-line">        Height = height;</td>
      </tr>
      <tr>
        <td id="L72" class="blob-num js-line-number" data-line-number="72"></td>
        <td id="LC72" class="blob-code blob-code-inner js-file-line">        MinDepth = minDepth;</td>
      </tr>
      <tr>
        <td id="L73" class="blob-num js-line-number" data-line-number="73"></td>
        <td id="LC73" class="blob-code blob-code-inner js-file-line">        MaxDepth = maxDepth;</td>
      </tr>
      <tr>
        <td id="L74" class="blob-num js-line-number" data-line-number="74"></td>
        <td id="LC74" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L75" class="blob-num js-line-number" data-line-number="75"></td>
        <td id="LC75" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_VIEWPORT</span>(</td>
      </tr>
      <tr>
        <td id="L76" class="blob-num js-line-number" data-line-number="76"></td>
        <td id="LC76" class="blob-code blob-code-inner js-file-line">        _In_ ID3D12Resource* pResource,</td>
      </tr>
      <tr>
        <td id="L77" class="blob-num js-line-number" data-line-number="77"></td>
        <td id="LC77" class="blob-code blob-code-inner js-file-line">        UINT mipSlice = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L78" class="blob-num js-line-number" data-line-number="78"></td>
        <td id="LC78" class="blob-code blob-code-inner js-file-line">        FLOAT topLeftX = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>,</td>
      </tr>
      <tr>
        <td id="L79" class="blob-num js-line-number" data-line-number="79"></td>
        <td id="LC79" class="blob-code blob-code-inner js-file-line">        FLOAT topLeftY = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>,</td>
      </tr>
      <tr>
        <td id="L80" class="blob-num js-line-number" data-line-number="80"></td>
        <td id="LC80" class="blob-code blob-code-inner js-file-line">        FLOAT minDepth = D3D12_MIN_DEPTH,</td>
      </tr>
      <tr>
        <td id="L81" class="blob-num js-line-number" data-line-number="81"></td>
        <td id="LC81" class="blob-code blob-code-inner js-file-line">        FLOAT maxDepth = D3D12_MAX_DEPTH )</td>
      </tr>
      <tr>
        <td id="L82" class="blob-num js-line-number" data-line-number="82"></td>
        <td id="LC82" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L83" class="blob-num js-line-number" data-line-number="83"></td>
        <td id="LC83" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">auto</span> Desc = pResource-&gt;<span class="pl-c1">GetDesc</span>();</td>
      </tr>
      <tr>
        <td id="L84" class="blob-num js-line-number" data-line-number="84"></td>
        <td id="LC84" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">const</span> UINT64 SubresourceWidth = Desc.<span class="pl-smi">Width</span> &gt;&gt; mipSlice;</td>
      </tr>
      <tr>
        <td id="L85" class="blob-num js-line-number" data-line-number="85"></td>
        <td id="LC85" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">const</span> UINT64 SubresourceHeight = Desc.<span class="pl-smi">Height</span> &gt;&gt; mipSlice;</td>
      </tr>
      <tr>
        <td id="L86" class="blob-num js-line-number" data-line-number="86"></td>
        <td id="LC86" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">switch</span> (Desc.<span class="pl-smi">Dimension</span>)</td>
      </tr>
      <tr>
        <td id="L87" class="blob-num js-line-number" data-line-number="87"></td>
        <td id="LC87" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L88" class="blob-num js-line-number" data-line-number="88"></td>
        <td id="LC88" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_RESOURCE_DIMENSION_BUFFER:</td>
      </tr>
      <tr>
        <td id="L89" class="blob-num js-line-number" data-line-number="89"></td>
        <td id="LC89" class="blob-code blob-code-inner js-file-line">            TopLeftX = topLeftX;</td>
      </tr>
      <tr>
        <td id="L90" class="blob-num js-line-number" data-line-number="90"></td>
        <td id="LC90" class="blob-code blob-code-inner js-file-line">            TopLeftY = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>;</td>
      </tr>
      <tr>
        <td id="L91" class="blob-num js-line-number" data-line-number="91"></td>
        <td id="LC91" class="blob-code blob-code-inner js-file-line">            Width = Desc.<span class="pl-smi">Width</span> - topLeftX;</td>
      </tr>
      <tr>
        <td id="L92" class="blob-num js-line-number" data-line-number="92"></td>
        <td id="LC92" class="blob-code blob-code-inner js-file-line">            Height = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>;</td>
      </tr>
      <tr>
        <td id="L93" class="blob-num js-line-number" data-line-number="93"></td>
        <td id="LC93" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L94" class="blob-num js-line-number" data-line-number="94"></td>
        <td id="LC94" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_RESOURCE_DIMENSION_TEXTURE1D:</td>
      </tr>
      <tr>
        <td id="L95" class="blob-num js-line-number" data-line-number="95"></td>
        <td id="LC95" class="blob-code blob-code-inner js-file-line">            TopLeftX = topLeftX;</td>
      </tr>
      <tr>
        <td id="L96" class="blob-num js-line-number" data-line-number="96"></td>
        <td id="LC96" class="blob-code blob-code-inner js-file-line">            TopLeftY = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>;</td>
      </tr>
      <tr>
        <td id="L97" class="blob-num js-line-number" data-line-number="97"></td>
        <td id="LC97" class="blob-code blob-code-inner js-file-line">            Width = (SubresourceWidth ? SubresourceWidth : <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>) - topLeftX;</td>
      </tr>
      <tr>
        <td id="L98" class="blob-num js-line-number" data-line-number="98"></td>
        <td id="LC98" class="blob-code blob-code-inner js-file-line">            Height = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>;</td>
      </tr>
      <tr>
        <td id="L99" class="blob-num js-line-number" data-line-number="99"></td>
        <td id="LC99" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L100" class="blob-num js-line-number" data-line-number="100"></td>
        <td id="LC100" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_RESOURCE_DIMENSION_TEXTURE2D:</td>
      </tr>
      <tr>
        <td id="L101" class="blob-num js-line-number" data-line-number="101"></td>
        <td id="LC101" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_RESOURCE_DIMENSION_TEXTURE3D:</td>
      </tr>
      <tr>
        <td id="L102" class="blob-num js-line-number" data-line-number="102"></td>
        <td id="LC102" class="blob-code blob-code-inner js-file-line">            TopLeftX = topLeftX;</td>
      </tr>
      <tr>
        <td id="L103" class="blob-num js-line-number" data-line-number="103"></td>
        <td id="LC103" class="blob-code blob-code-inner js-file-line">            TopLeftY = topLeftY;</td>
      </tr>
      <tr>
        <td id="L104" class="blob-num js-line-number" data-line-number="104"></td>
        <td id="LC104" class="blob-code blob-code-inner js-file-line">            Width = (SubresourceWidth ? SubresourceWidth : <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>) - topLeftX;</td>
      </tr>
      <tr>
        <td id="L105" class="blob-num js-line-number" data-line-number="105"></td>
        <td id="LC105" class="blob-code blob-code-inner js-file-line">            Height = (SubresourceHeight ? SubresourceHeight: <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>) - topLeftY;</td>
      </tr>
      <tr>
        <td id="L106" class="blob-num js-line-number" data-line-number="106"></td>
        <td id="LC106" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L107" class="blob-num js-line-number" data-line-number="107"></td>
        <td id="LC107" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">default</span>: <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L108" class="blob-num js-line-number" data-line-number="108"></td>
        <td id="LC108" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L109" class="blob-num js-line-number" data-line-number="109"></td>
        <td id="LC109" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L110" class="blob-num js-line-number" data-line-number="110"></td>
        <td id="LC110" class="blob-code blob-code-inner js-file-line">        MinDepth = minDepth;</td>
      </tr>
      <tr>
        <td id="L111" class="blob-num js-line-number" data-line-number="111"></td>
        <td id="LC111" class="blob-code blob-code-inner js-file-line">        MaxDepth = maxDepth;</td>
      </tr>
      <tr>
        <td id="L112" class="blob-num js-line-number" data-line-number="112"></td>
        <td id="LC112" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L113" class="blob-num js-line-number" data-line-number="113"></td>
        <td id="LC113" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L114" class="blob-num js-line-number" data-line-number="114"></td>
        <td id="LC114" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L115" class="blob-num js-line-number" data-line-number="115"></td>
        <td id="LC115" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L116" class="blob-num js-line-number" data-line-number="116"></td>
        <td id="LC116" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_BOX : public D3D12_BOX</td>
      </tr>
      <tr>
        <td id="L117" class="blob-num js-line-number" data-line-number="117"></td>
        <td id="LC117" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L118" class="blob-num js-line-number" data-line-number="118"></td>
        <td id="LC118" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_BOX</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L119" class="blob-num js-line-number" data-line-number="119"></td>
        <td id="LC119" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_BOX</span>( <span class="pl-k">const</span> D3D12_BOX&amp; o ) :</td>
      </tr>
      <tr>
        <td id="L120" class="blob-num js-line-number" data-line-number="120"></td>
        <td id="LC120" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_BOX</span>( o )</td>
      </tr>
      <tr>
        <td id="L121" class="blob-num js-line-number" data-line-number="121"></td>
        <td id="LC121" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L122" class="blob-num js-line-number" data-line-number="122"></td>
        <td id="LC122" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_BOX</span>(</td>
      </tr>
      <tr>
        <td id="L123" class="blob-num js-line-number" data-line-number="123"></td>
        <td id="LC123" class="blob-code blob-code-inner js-file-line">        LONG Left,</td>
      </tr>
      <tr>
        <td id="L124" class="blob-num js-line-number" data-line-number="124"></td>
        <td id="LC124" class="blob-code blob-code-inner js-file-line">        LONG Right )</td>
      </tr>
      <tr>
        <td id="L125" class="blob-num js-line-number" data-line-number="125"></td>
        <td id="LC125" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L126" class="blob-num js-line-number" data-line-number="126"></td>
        <td id="LC126" class="blob-code blob-code-inner js-file-line">        left = static_cast&lt;UINT&gt;(Left);</td>
      </tr>
      <tr>
        <td id="L127" class="blob-num js-line-number" data-line-number="127"></td>
        <td id="LC127" class="blob-code blob-code-inner js-file-line">        top = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L128" class="blob-num js-line-number" data-line-number="128"></td>
        <td id="LC128" class="blob-code blob-code-inner js-file-line">        front = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L129" class="blob-num js-line-number" data-line-number="129"></td>
        <td id="LC129" class="blob-code blob-code-inner js-file-line">        right = static_cast&lt;UINT&gt;(Right);</td>
      </tr>
      <tr>
        <td id="L130" class="blob-num js-line-number" data-line-number="130"></td>
        <td id="LC130" class="blob-code blob-code-inner js-file-line">        bottom = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L131" class="blob-num js-line-number" data-line-number="131"></td>
        <td id="LC131" class="blob-code blob-code-inner js-file-line">        back = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L132" class="blob-num js-line-number" data-line-number="132"></td>
        <td id="LC132" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L133" class="blob-num js-line-number" data-line-number="133"></td>
        <td id="LC133" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_BOX</span>(</td>
      </tr>
      <tr>
        <td id="L134" class="blob-num js-line-number" data-line-number="134"></td>
        <td id="LC134" class="blob-code blob-code-inner js-file-line">        LONG Left,</td>
      </tr>
      <tr>
        <td id="L135" class="blob-num js-line-number" data-line-number="135"></td>
        <td id="LC135" class="blob-code blob-code-inner js-file-line">        LONG Top,</td>
      </tr>
      <tr>
        <td id="L136" class="blob-num js-line-number" data-line-number="136"></td>
        <td id="LC136" class="blob-code blob-code-inner js-file-line">        LONG Right,</td>
      </tr>
      <tr>
        <td id="L137" class="blob-num js-line-number" data-line-number="137"></td>
        <td id="LC137" class="blob-code blob-code-inner js-file-line">        LONG Bottom )</td>
      </tr>
      <tr>
        <td id="L138" class="blob-num js-line-number" data-line-number="138"></td>
        <td id="LC138" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L139" class="blob-num js-line-number" data-line-number="139"></td>
        <td id="LC139" class="blob-code blob-code-inner js-file-line">        left = static_cast&lt;UINT&gt;(Left);</td>
      </tr>
      <tr>
        <td id="L140" class="blob-num js-line-number" data-line-number="140"></td>
        <td id="LC140" class="blob-code blob-code-inner js-file-line">        top = static_cast&lt;UINT&gt;(Top);</td>
      </tr>
      <tr>
        <td id="L141" class="blob-num js-line-number" data-line-number="141"></td>
        <td id="LC141" class="blob-code blob-code-inner js-file-line">        front = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L142" class="blob-num js-line-number" data-line-number="142"></td>
        <td id="LC142" class="blob-code blob-code-inner js-file-line">        right = static_cast&lt;UINT&gt;(Right);</td>
      </tr>
      <tr>
        <td id="L143" class="blob-num js-line-number" data-line-number="143"></td>
        <td id="LC143" class="blob-code blob-code-inner js-file-line">        bottom = static_cast&lt;UINT&gt;(Bottom);</td>
      </tr>
      <tr>
        <td id="L144" class="blob-num js-line-number" data-line-number="144"></td>
        <td id="LC144" class="blob-code blob-code-inner js-file-line">        back = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L145" class="blob-num js-line-number" data-line-number="145"></td>
        <td id="LC145" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L146" class="blob-num js-line-number" data-line-number="146"></td>
        <td id="LC146" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_BOX</span>(</td>
      </tr>
      <tr>
        <td id="L147" class="blob-num js-line-number" data-line-number="147"></td>
        <td id="LC147" class="blob-code blob-code-inner js-file-line">        LONG Left,</td>
      </tr>
      <tr>
        <td id="L148" class="blob-num js-line-number" data-line-number="148"></td>
        <td id="LC148" class="blob-code blob-code-inner js-file-line">        LONG Top,</td>
      </tr>
      <tr>
        <td id="L149" class="blob-num js-line-number" data-line-number="149"></td>
        <td id="LC149" class="blob-code blob-code-inner js-file-line">        LONG Front,</td>
      </tr>
      <tr>
        <td id="L150" class="blob-num js-line-number" data-line-number="150"></td>
        <td id="LC150" class="blob-code blob-code-inner js-file-line">        LONG Right,</td>
      </tr>
      <tr>
        <td id="L151" class="blob-num js-line-number" data-line-number="151"></td>
        <td id="LC151" class="blob-code blob-code-inner js-file-line">        LONG Bottom,</td>
      </tr>
      <tr>
        <td id="L152" class="blob-num js-line-number" data-line-number="152"></td>
        <td id="LC152" class="blob-code blob-code-inner js-file-line">        LONG Back )</td>
      </tr>
      <tr>
        <td id="L153" class="blob-num js-line-number" data-line-number="153"></td>
        <td id="LC153" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L154" class="blob-num js-line-number" data-line-number="154"></td>
        <td id="LC154" class="blob-code blob-code-inner js-file-line">        left = static_cast&lt;UINT&gt;(Left);</td>
      </tr>
      <tr>
        <td id="L155" class="blob-num js-line-number" data-line-number="155"></td>
        <td id="LC155" class="blob-code blob-code-inner js-file-line">        top = static_cast&lt;UINT&gt;(Top);</td>
      </tr>
      <tr>
        <td id="L156" class="blob-num js-line-number" data-line-number="156"></td>
        <td id="LC156" class="blob-code blob-code-inner js-file-line">        front = static_cast&lt;UINT&gt;(Front);</td>
      </tr>
      <tr>
        <td id="L157" class="blob-num js-line-number" data-line-number="157"></td>
        <td id="LC157" class="blob-code blob-code-inner js-file-line">        right = static_cast&lt;UINT&gt;(Right);</td>
      </tr>
      <tr>
        <td id="L158" class="blob-num js-line-number" data-line-number="158"></td>
        <td id="LC158" class="blob-code blob-code-inner js-file-line">        bottom = static_cast&lt;UINT&gt;(Bottom);</td>
      </tr>
      <tr>
        <td id="L159" class="blob-num js-line-number" data-line-number="159"></td>
        <td id="LC159" class="blob-code blob-code-inner js-file-line">        back = static_cast&lt;UINT&gt;(Back);</td>
      </tr>
      <tr>
        <td id="L160" class="blob-num js-line-number" data-line-number="160"></td>
        <td id="LC160" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L161" class="blob-num js-line-number" data-line-number="161"></td>
        <td id="LC161" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L162" class="blob-num js-line-number" data-line-number="162"></td>
        <td id="LC162" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">bool</span> operator==( <span class="pl-k">const</span> D3D12_BOX&amp; l, <span class="pl-k">const</span> D3D12_BOX&amp; r )</td>
      </tr>
      <tr>
        <td id="L163" class="blob-num js-line-number" data-line-number="163"></td>
        <td id="LC163" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L164" class="blob-num js-line-number" data-line-number="164"></td>
        <td id="LC164" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> l.<span class="pl-smi">left</span> == r.<span class="pl-smi">left</span> &amp;&amp; l.<span class="pl-smi">top</span> == r.<span class="pl-smi">top</span> &amp;&amp; l.<span class="pl-smi">front</span> == r.<span class="pl-smi">front</span> &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L165" class="blob-num js-line-number" data-line-number="165"></td>
        <td id="LC165" class="blob-code blob-code-inner js-file-line">        l.<span class="pl-smi">right</span> == r.<span class="pl-smi">right</span> &amp;&amp; l.<span class="pl-smi">bottom</span> == r.<span class="pl-smi">bottom</span> &amp;&amp; l.<span class="pl-smi">back</span> == r.<span class="pl-smi">back</span>;</td>
      </tr>
      <tr>
        <td id="L166" class="blob-num js-line-number" data-line-number="166"></td>
        <td id="LC166" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L167" class="blob-num js-line-number" data-line-number="167"></td>
        <td id="LC167" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">bool</span> operator!=( <span class="pl-k">const</span> D3D12_BOX&amp; l, <span class="pl-k">const</span> D3D12_BOX&amp; r )</td>
      </tr>
      <tr>
        <td id="L168" class="blob-num js-line-number" data-line-number="168"></td>
        <td id="LC168" class="blob-code blob-code-inner js-file-line">{ <span class="pl-k">return</span> !( l == r ); }</td>
      </tr>
      <tr>
        <td id="L169" class="blob-num js-line-number" data-line-number="169"></td>
        <td id="LC169" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L170" class="blob-num js-line-number" data-line-number="170"></td>
        <td id="LC170" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L171" class="blob-num js-line-number" data-line-number="171"></td>
        <td id="LC171" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_DEPTH_STENCIL_DESC : public D3D12_DEPTH_STENCIL_DESC</td>
      </tr>
      <tr>
        <td id="L172" class="blob-num js-line-number" data-line-number="172"></td>
        <td id="LC172" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L173" class="blob-num js-line-number" data-line-number="173"></td>
        <td id="LC173" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_DEPTH_STENCIL_DESC</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L174" class="blob-num js-line-number" data-line-number="174"></td>
        <td id="LC174" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_DEPTH_STENCIL_DESC</span>( <span class="pl-k">const</span> D3D12_DEPTH_STENCIL_DESC&amp; o ) :</td>
      </tr>
      <tr>
        <td id="L175" class="blob-num js-line-number" data-line-number="175"></td>
        <td id="LC175" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_DEPTH_STENCIL_DESC</span>( o )</td>
      </tr>
      <tr>
        <td id="L176" class="blob-num js-line-number" data-line-number="176"></td>
        <td id="LC176" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L177" class="blob-num js-line-number" data-line-number="177"></td>
        <td id="LC177" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_DEPTH_STENCIL_DESC</span>( CD3DX12_DEFAULT )</td>
      </tr>
      <tr>
        <td id="L178" class="blob-num js-line-number" data-line-number="178"></td>
        <td id="LC178" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L179" class="blob-num js-line-number" data-line-number="179"></td>
        <td id="LC179" class="blob-code blob-code-inner js-file-line">        DepthEnable = <span class="pl-c1">TRUE</span>;</td>
      </tr>
      <tr>
        <td id="L180" class="blob-num js-line-number" data-line-number="180"></td>
        <td id="LC180" class="blob-code blob-code-inner js-file-line">        DepthWriteMask = D3D12_DEPTH_WRITE_MASK_ALL;</td>
      </tr>
      <tr>
        <td id="L181" class="blob-num js-line-number" data-line-number="181"></td>
        <td id="LC181" class="blob-code blob-code-inner js-file-line">        DepthFunc = D3D12_COMPARISON_FUNC_LESS;</td>
      </tr>
      <tr>
        <td id="L182" class="blob-num js-line-number" data-line-number="182"></td>
        <td id="LC182" class="blob-code blob-code-inner js-file-line">        StencilEnable = <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="L183" class="blob-num js-line-number" data-line-number="183"></td>
        <td id="LC183" class="blob-code blob-code-inner js-file-line">        StencilReadMask = D3D12_DEFAULT_STENCIL_READ_MASK;</td>
      </tr>
      <tr>
        <td id="L184" class="blob-num js-line-number" data-line-number="184"></td>
        <td id="LC184" class="blob-code blob-code-inner js-file-line">        StencilWriteMask = D3D12_DEFAULT_STENCIL_WRITE_MASK;</td>
      </tr>
      <tr>
        <td id="L185" class="blob-num js-line-number" data-line-number="185"></td>
        <td id="LC185" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">const</span> D3D12_DEPTH_STENCILOP_DESC defaultStencilOp =</td>
      </tr>
      <tr>
        <td id="L186" class="blob-num js-line-number" data-line-number="186"></td>
        <td id="LC186" class="blob-code blob-code-inner js-file-line">        { D3D12_STENCIL_OP_KEEP, D3D12_STENCIL_OP_KEEP, D3D12_STENCIL_OP_KEEP, D3D12_COMPARISON_FUNC_ALWAYS };</td>
      </tr>
      <tr>
        <td id="L187" class="blob-num js-line-number" data-line-number="187"></td>
        <td id="LC187" class="blob-code blob-code-inner js-file-line">        FrontFace = defaultStencilOp;</td>
      </tr>
      <tr>
        <td id="L188" class="blob-num js-line-number" data-line-number="188"></td>
        <td id="LC188" class="blob-code blob-code-inner js-file-line">        BackFace = defaultStencilOp;</td>
      </tr>
      <tr>
        <td id="L189" class="blob-num js-line-number" data-line-number="189"></td>
        <td id="LC189" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L190" class="blob-num js-line-number" data-line-number="190"></td>
        <td id="LC190" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_DEPTH_STENCIL_DESC</span>(</td>
      </tr>
      <tr>
        <td id="L191" class="blob-num js-line-number" data-line-number="191"></td>
        <td id="LC191" class="blob-code blob-code-inner js-file-line">        BOOL depthEnable,</td>
      </tr>
      <tr>
        <td id="L192" class="blob-num js-line-number" data-line-number="192"></td>
        <td id="LC192" class="blob-code blob-code-inner js-file-line">        D3D12_DEPTH_WRITE_MASK depthWriteMask,</td>
      </tr>
      <tr>
        <td id="L193" class="blob-num js-line-number" data-line-number="193"></td>
        <td id="LC193" class="blob-code blob-code-inner js-file-line">        D3D12_COMPARISON_FUNC depthFunc,</td>
      </tr>
      <tr>
        <td id="L194" class="blob-num js-line-number" data-line-number="194"></td>
        <td id="LC194" class="blob-code blob-code-inner js-file-line">        BOOL stencilEnable,</td>
      </tr>
      <tr>
        <td id="L195" class="blob-num js-line-number" data-line-number="195"></td>
        <td id="LC195" class="blob-code blob-code-inner js-file-line">        UINT8 stencilReadMask,</td>
      </tr>
      <tr>
        <td id="L196" class="blob-num js-line-number" data-line-number="196"></td>
        <td id="LC196" class="blob-code blob-code-inner js-file-line">        UINT8 stencilWriteMask,</td>
      </tr>
      <tr>
        <td id="L197" class="blob-num js-line-number" data-line-number="197"></td>
        <td id="LC197" class="blob-code blob-code-inner js-file-line">        D3D12_STENCIL_OP frontStencilFailOp,</td>
      </tr>
      <tr>
        <td id="L198" class="blob-num js-line-number" data-line-number="198"></td>
        <td id="LC198" class="blob-code blob-code-inner js-file-line">        D3D12_STENCIL_OP frontStencilDepthFailOp,</td>
      </tr>
      <tr>
        <td id="L199" class="blob-num js-line-number" data-line-number="199"></td>
        <td id="LC199" class="blob-code blob-code-inner js-file-line">        D3D12_STENCIL_OP frontStencilPassOp,</td>
      </tr>
      <tr>
        <td id="L200" class="blob-num js-line-number" data-line-number="200"></td>
        <td id="LC200" class="blob-code blob-code-inner js-file-line">        D3D12_COMPARISON_FUNC frontStencilFunc,</td>
      </tr>
      <tr>
        <td id="L201" class="blob-num js-line-number" data-line-number="201"></td>
        <td id="LC201" class="blob-code blob-code-inner js-file-line">        D3D12_STENCIL_OP backStencilFailOp,</td>
      </tr>
      <tr>
        <td id="L202" class="blob-num js-line-number" data-line-number="202"></td>
        <td id="LC202" class="blob-code blob-code-inner js-file-line">        D3D12_STENCIL_OP backStencilDepthFailOp,</td>
      </tr>
      <tr>
        <td id="L203" class="blob-num js-line-number" data-line-number="203"></td>
        <td id="LC203" class="blob-code blob-code-inner js-file-line">        D3D12_STENCIL_OP backStencilPassOp,</td>
      </tr>
      <tr>
        <td id="L204" class="blob-num js-line-number" data-line-number="204"></td>
        <td id="LC204" class="blob-code blob-code-inner js-file-line">        D3D12_COMPARISON_FUNC backStencilFunc )</td>
      </tr>
      <tr>
        <td id="L205" class="blob-num js-line-number" data-line-number="205"></td>
        <td id="LC205" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L206" class="blob-num js-line-number" data-line-number="206"></td>
        <td id="LC206" class="blob-code blob-code-inner js-file-line">        DepthEnable = depthEnable;</td>
      </tr>
      <tr>
        <td id="L207" class="blob-num js-line-number" data-line-number="207"></td>
        <td id="LC207" class="blob-code blob-code-inner js-file-line">        DepthWriteMask = depthWriteMask;</td>
      </tr>
      <tr>
        <td id="L208" class="blob-num js-line-number" data-line-number="208"></td>
        <td id="LC208" class="blob-code blob-code-inner js-file-line">        DepthFunc = depthFunc;</td>
      </tr>
      <tr>
        <td id="L209" class="blob-num js-line-number" data-line-number="209"></td>
        <td id="LC209" class="blob-code blob-code-inner js-file-line">        StencilEnable = stencilEnable;</td>
      </tr>
      <tr>
        <td id="L210" class="blob-num js-line-number" data-line-number="210"></td>
        <td id="LC210" class="blob-code blob-code-inner js-file-line">        StencilReadMask = stencilReadMask;</td>
      </tr>
      <tr>
        <td id="L211" class="blob-num js-line-number" data-line-number="211"></td>
        <td id="LC211" class="blob-code blob-code-inner js-file-line">        StencilWriteMask = stencilWriteMask;</td>
      </tr>
      <tr>
        <td id="L212" class="blob-num js-line-number" data-line-number="212"></td>
        <td id="LC212" class="blob-code blob-code-inner js-file-line">        FrontFace.<span class="pl-smi">StencilFailOp</span> = frontStencilFailOp;</td>
      </tr>
      <tr>
        <td id="L213" class="blob-num js-line-number" data-line-number="213"></td>
        <td id="LC213" class="blob-code blob-code-inner js-file-line">        FrontFace.<span class="pl-smi">StencilDepthFailOp</span> = frontStencilDepthFailOp;</td>
      </tr>
      <tr>
        <td id="L214" class="blob-num js-line-number" data-line-number="214"></td>
        <td id="LC214" class="blob-code blob-code-inner js-file-line">        FrontFace.<span class="pl-smi">StencilPassOp</span> = frontStencilPassOp;</td>
      </tr>
      <tr>
        <td id="L215" class="blob-num js-line-number" data-line-number="215"></td>
        <td id="LC215" class="blob-code blob-code-inner js-file-line">        FrontFace.<span class="pl-smi">StencilFunc</span> = frontStencilFunc;</td>
      </tr>
      <tr>
        <td id="L216" class="blob-num js-line-number" data-line-number="216"></td>
        <td id="LC216" class="blob-code blob-code-inner js-file-line">        BackFace.<span class="pl-smi">StencilFailOp</span> = backStencilFailOp;</td>
      </tr>
      <tr>
        <td id="L217" class="blob-num js-line-number" data-line-number="217"></td>
        <td id="LC217" class="blob-code blob-code-inner js-file-line">        BackFace.<span class="pl-smi">StencilDepthFailOp</span> = backStencilDepthFailOp;</td>
      </tr>
      <tr>
        <td id="L218" class="blob-num js-line-number" data-line-number="218"></td>
        <td id="LC218" class="blob-code blob-code-inner js-file-line">        BackFace.<span class="pl-smi">StencilPassOp</span> = backStencilPassOp;</td>
      </tr>
      <tr>
        <td id="L219" class="blob-num js-line-number" data-line-number="219"></td>
        <td id="LC219" class="blob-code blob-code-inner js-file-line">        BackFace.<span class="pl-smi">StencilFunc</span> = backStencilFunc;</td>
      </tr>
      <tr>
        <td id="L220" class="blob-num js-line-number" data-line-number="220"></td>
        <td id="LC220" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L221" class="blob-num js-line-number" data-line-number="221"></td>
        <td id="LC221" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L222" class="blob-num js-line-number" data-line-number="222"></td>
        <td id="LC222" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L223" class="blob-num js-line-number" data-line-number="223"></td>
        <td id="LC223" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L224" class="blob-num js-line-number" data-line-number="224"></td>
        <td id="LC224" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_DEPTH_STENCIL_DESC1 : public D3D12_DEPTH_STENCIL_DESC1</td>
      </tr>
      <tr>
        <td id="L225" class="blob-num js-line-number" data-line-number="225"></td>
        <td id="LC225" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L226" class="blob-num js-line-number" data-line-number="226"></td>
        <td id="LC226" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_DEPTH_STENCIL_DESC1</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L227" class="blob-num js-line-number" data-line-number="227"></td>
        <td id="LC227" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_DEPTH_STENCIL_DESC1</span>( <span class="pl-k">const</span> D3D12_DEPTH_STENCIL_DESC1&amp; o ) :</td>
      </tr>
      <tr>
        <td id="L228" class="blob-num js-line-number" data-line-number="228"></td>
        <td id="LC228" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_DEPTH_STENCIL_DESC1</span>( o )</td>
      </tr>
      <tr>
        <td id="L229" class="blob-num js-line-number" data-line-number="229"></td>
        <td id="LC229" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L230" class="blob-num js-line-number" data-line-number="230"></td>
        <td id="LC230" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_DEPTH_STENCIL_DESC1</span>( <span class="pl-k">const</span> D3D12_DEPTH_STENCIL_DESC&amp; o )</td>
      </tr>
      <tr>
        <td id="L231" class="blob-num js-line-number" data-line-number="231"></td>
        <td id="LC231" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L232" class="blob-num js-line-number" data-line-number="232"></td>
        <td id="LC232" class="blob-code blob-code-inner js-file-line">        DepthEnable                  = o.<span class="pl-smi">DepthEnable</span>;</td>
      </tr>
      <tr>
        <td id="L233" class="blob-num js-line-number" data-line-number="233"></td>
        <td id="LC233" class="blob-code blob-code-inner js-file-line">        DepthWriteMask               = o.<span class="pl-smi">DepthWriteMask</span>;</td>
      </tr>
      <tr>
        <td id="L234" class="blob-num js-line-number" data-line-number="234"></td>
        <td id="LC234" class="blob-code blob-code-inner js-file-line">        DepthFunc                    = o.<span class="pl-smi">DepthFunc</span>;</td>
      </tr>
      <tr>
        <td id="L235" class="blob-num js-line-number" data-line-number="235"></td>
        <td id="LC235" class="blob-code blob-code-inner js-file-line">        StencilEnable                = o.<span class="pl-smi">StencilEnable</span>;</td>
      </tr>
      <tr>
        <td id="L236" class="blob-num js-line-number" data-line-number="236"></td>
        <td id="LC236" class="blob-code blob-code-inner js-file-line">        StencilReadMask              = o.<span class="pl-smi">StencilReadMask</span>;</td>
      </tr>
      <tr>
        <td id="L237" class="blob-num js-line-number" data-line-number="237"></td>
        <td id="LC237" class="blob-code blob-code-inner js-file-line">        StencilWriteMask             = o.<span class="pl-smi">StencilWriteMask</span>;</td>
      </tr>
      <tr>
        <td id="L238" class="blob-num js-line-number" data-line-number="238"></td>
        <td id="LC238" class="blob-code blob-code-inner js-file-line">        FrontFace.<span class="pl-smi">StencilFailOp</span>      = o.<span class="pl-smi">FrontFace</span>.<span class="pl-smi">StencilFailOp</span>;</td>
      </tr>
      <tr>
        <td id="L239" class="blob-num js-line-number" data-line-number="239"></td>
        <td id="LC239" class="blob-code blob-code-inner js-file-line">        FrontFace.<span class="pl-smi">StencilDepthFailOp</span> = o.<span class="pl-smi">FrontFace</span>.<span class="pl-smi">StencilDepthFailOp</span>;</td>
      </tr>
      <tr>
        <td id="L240" class="blob-num js-line-number" data-line-number="240"></td>
        <td id="LC240" class="blob-code blob-code-inner js-file-line">        FrontFace.<span class="pl-smi">StencilPassOp</span>      = o.<span class="pl-smi">FrontFace</span>.<span class="pl-smi">StencilPassOp</span>;</td>
      </tr>
      <tr>
        <td id="L241" class="blob-num js-line-number" data-line-number="241"></td>
        <td id="LC241" class="blob-code blob-code-inner js-file-line">        FrontFace.<span class="pl-smi">StencilFunc</span>        = o.<span class="pl-smi">FrontFace</span>.<span class="pl-smi">StencilFunc</span>;</td>
      </tr>
      <tr>
        <td id="L242" class="blob-num js-line-number" data-line-number="242"></td>
        <td id="LC242" class="blob-code blob-code-inner js-file-line">        BackFace.<span class="pl-smi">StencilFailOp</span>       = o.<span class="pl-smi">BackFace</span>.<span class="pl-smi">StencilFailOp</span>;</td>
      </tr>
      <tr>
        <td id="L243" class="blob-num js-line-number" data-line-number="243"></td>
        <td id="LC243" class="blob-code blob-code-inner js-file-line">        BackFace.<span class="pl-smi">StencilDepthFailOp</span>  = o.<span class="pl-smi">BackFace</span>.<span class="pl-smi">StencilDepthFailOp</span>;</td>
      </tr>
      <tr>
        <td id="L244" class="blob-num js-line-number" data-line-number="244"></td>
        <td id="LC244" class="blob-code blob-code-inner js-file-line">        BackFace.<span class="pl-smi">StencilPassOp</span>       = o.<span class="pl-smi">BackFace</span>.<span class="pl-smi">StencilPassOp</span>;</td>
      </tr>
      <tr>
        <td id="L245" class="blob-num js-line-number" data-line-number="245"></td>
        <td id="LC245" class="blob-code blob-code-inner js-file-line">        BackFace.<span class="pl-smi">StencilFunc</span>         = o.<span class="pl-smi">BackFace</span>.<span class="pl-smi">StencilFunc</span>;</td>
      </tr>
      <tr>
        <td id="L246" class="blob-num js-line-number" data-line-number="246"></td>
        <td id="LC246" class="blob-code blob-code-inner js-file-line">        DepthBoundsTestEnable        = <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="L247" class="blob-num js-line-number" data-line-number="247"></td>
        <td id="LC247" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L248" class="blob-num js-line-number" data-line-number="248"></td>
        <td id="LC248" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_DEPTH_STENCIL_DESC1</span>( CD3DX12_DEFAULT )</td>
      </tr>
      <tr>
        <td id="L249" class="blob-num js-line-number" data-line-number="249"></td>
        <td id="LC249" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L250" class="blob-num js-line-number" data-line-number="250"></td>
        <td id="LC250" class="blob-code blob-code-inner js-file-line">        DepthEnable = <span class="pl-c1">TRUE</span>;</td>
      </tr>
      <tr>
        <td id="L251" class="blob-num js-line-number" data-line-number="251"></td>
        <td id="LC251" class="blob-code blob-code-inner js-file-line">        DepthWriteMask = D3D12_DEPTH_WRITE_MASK_ALL;</td>
      </tr>
      <tr>
        <td id="L252" class="blob-num js-line-number" data-line-number="252"></td>
        <td id="LC252" class="blob-code blob-code-inner js-file-line">        DepthFunc = D3D12_COMPARISON_FUNC_LESS;</td>
      </tr>
      <tr>
        <td id="L253" class="blob-num js-line-number" data-line-number="253"></td>
        <td id="LC253" class="blob-code blob-code-inner js-file-line">        StencilEnable = <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="L254" class="blob-num js-line-number" data-line-number="254"></td>
        <td id="LC254" class="blob-code blob-code-inner js-file-line">        StencilReadMask = D3D12_DEFAULT_STENCIL_READ_MASK;</td>
      </tr>
      <tr>
        <td id="L255" class="blob-num js-line-number" data-line-number="255"></td>
        <td id="LC255" class="blob-code blob-code-inner js-file-line">        StencilWriteMask = D3D12_DEFAULT_STENCIL_WRITE_MASK;</td>
      </tr>
      <tr>
        <td id="L256" class="blob-num js-line-number" data-line-number="256"></td>
        <td id="LC256" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">const</span> D3D12_DEPTH_STENCILOP_DESC defaultStencilOp =</td>
      </tr>
      <tr>
        <td id="L257" class="blob-num js-line-number" data-line-number="257"></td>
        <td id="LC257" class="blob-code blob-code-inner js-file-line">        { D3D12_STENCIL_OP_KEEP, D3D12_STENCIL_OP_KEEP, D3D12_STENCIL_OP_KEEP, D3D12_COMPARISON_FUNC_ALWAYS };</td>
      </tr>
      <tr>
        <td id="L258" class="blob-num js-line-number" data-line-number="258"></td>
        <td id="LC258" class="blob-code blob-code-inner js-file-line">        FrontFace = defaultStencilOp;</td>
      </tr>
      <tr>
        <td id="L259" class="blob-num js-line-number" data-line-number="259"></td>
        <td id="LC259" class="blob-code blob-code-inner js-file-line">        BackFace = defaultStencilOp;</td>
      </tr>
      <tr>
        <td id="L260" class="blob-num js-line-number" data-line-number="260"></td>
        <td id="LC260" class="blob-code blob-code-inner js-file-line">        DepthBoundsTestEnable = <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="L261" class="blob-num js-line-number" data-line-number="261"></td>
        <td id="LC261" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L262" class="blob-num js-line-number" data-line-number="262"></td>
        <td id="LC262" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_DEPTH_STENCIL_DESC1</span>(</td>
      </tr>
      <tr>
        <td id="L263" class="blob-num js-line-number" data-line-number="263"></td>
        <td id="LC263" class="blob-code blob-code-inner js-file-line">        BOOL depthEnable,</td>
      </tr>
      <tr>
        <td id="L264" class="blob-num js-line-number" data-line-number="264"></td>
        <td id="LC264" class="blob-code blob-code-inner js-file-line">        D3D12_DEPTH_WRITE_MASK depthWriteMask,</td>
      </tr>
      <tr>
        <td id="L265" class="blob-num js-line-number" data-line-number="265"></td>
        <td id="LC265" class="blob-code blob-code-inner js-file-line">        D3D12_COMPARISON_FUNC depthFunc,</td>
      </tr>
      <tr>
        <td id="L266" class="blob-num js-line-number" data-line-number="266"></td>
        <td id="LC266" class="blob-code blob-code-inner js-file-line">        BOOL stencilEnable,</td>
      </tr>
      <tr>
        <td id="L267" class="blob-num js-line-number" data-line-number="267"></td>
        <td id="LC267" class="blob-code blob-code-inner js-file-line">        UINT8 stencilReadMask,</td>
      </tr>
      <tr>
        <td id="L268" class="blob-num js-line-number" data-line-number="268"></td>
        <td id="LC268" class="blob-code blob-code-inner js-file-line">        UINT8 stencilWriteMask,</td>
      </tr>
      <tr>
        <td id="L269" class="blob-num js-line-number" data-line-number="269"></td>
        <td id="LC269" class="blob-code blob-code-inner js-file-line">        D3D12_STENCIL_OP frontStencilFailOp,</td>
      </tr>
      <tr>
        <td id="L270" class="blob-num js-line-number" data-line-number="270"></td>
        <td id="LC270" class="blob-code blob-code-inner js-file-line">        D3D12_STENCIL_OP frontStencilDepthFailOp,</td>
      </tr>
      <tr>
        <td id="L271" class="blob-num js-line-number" data-line-number="271"></td>
        <td id="LC271" class="blob-code blob-code-inner js-file-line">        D3D12_STENCIL_OP frontStencilPassOp,</td>
      </tr>
      <tr>
        <td id="L272" class="blob-num js-line-number" data-line-number="272"></td>
        <td id="LC272" class="blob-code blob-code-inner js-file-line">        D3D12_COMPARISON_FUNC frontStencilFunc,</td>
      </tr>
      <tr>
        <td id="L273" class="blob-num js-line-number" data-line-number="273"></td>
        <td id="LC273" class="blob-code blob-code-inner js-file-line">        D3D12_STENCIL_OP backStencilFailOp,</td>
      </tr>
      <tr>
        <td id="L274" class="blob-num js-line-number" data-line-number="274"></td>
        <td id="LC274" class="blob-code blob-code-inner js-file-line">        D3D12_STENCIL_OP backStencilDepthFailOp,</td>
      </tr>
      <tr>
        <td id="L275" class="blob-num js-line-number" data-line-number="275"></td>
        <td id="LC275" class="blob-code blob-code-inner js-file-line">        D3D12_STENCIL_OP backStencilPassOp,</td>
      </tr>
      <tr>
        <td id="L276" class="blob-num js-line-number" data-line-number="276"></td>
        <td id="LC276" class="blob-code blob-code-inner js-file-line">        D3D12_COMPARISON_FUNC backStencilFunc,</td>
      </tr>
      <tr>
        <td id="L277" class="blob-num js-line-number" data-line-number="277"></td>
        <td id="LC277" class="blob-code blob-code-inner js-file-line">        BOOL depthBoundsTestEnable )</td>
      </tr>
      <tr>
        <td id="L278" class="blob-num js-line-number" data-line-number="278"></td>
        <td id="LC278" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L279" class="blob-num js-line-number" data-line-number="279"></td>
        <td id="LC279" class="blob-code blob-code-inner js-file-line">        DepthEnable = depthEnable;</td>
      </tr>
      <tr>
        <td id="L280" class="blob-num js-line-number" data-line-number="280"></td>
        <td id="LC280" class="blob-code blob-code-inner js-file-line">        DepthWriteMask = depthWriteMask;</td>
      </tr>
      <tr>
        <td id="L281" class="blob-num js-line-number" data-line-number="281"></td>
        <td id="LC281" class="blob-code blob-code-inner js-file-line">        DepthFunc = depthFunc;</td>
      </tr>
      <tr>
        <td id="L282" class="blob-num js-line-number" data-line-number="282"></td>
        <td id="LC282" class="blob-code blob-code-inner js-file-line">        StencilEnable = stencilEnable;</td>
      </tr>
      <tr>
        <td id="L283" class="blob-num js-line-number" data-line-number="283"></td>
        <td id="LC283" class="blob-code blob-code-inner js-file-line">        StencilReadMask = stencilReadMask;</td>
      </tr>
      <tr>
        <td id="L284" class="blob-num js-line-number" data-line-number="284"></td>
        <td id="LC284" class="blob-code blob-code-inner js-file-line">        StencilWriteMask = stencilWriteMask;</td>
      </tr>
      <tr>
        <td id="L285" class="blob-num js-line-number" data-line-number="285"></td>
        <td id="LC285" class="blob-code blob-code-inner js-file-line">        FrontFace.<span class="pl-smi">StencilFailOp</span> = frontStencilFailOp;</td>
      </tr>
      <tr>
        <td id="L286" class="blob-num js-line-number" data-line-number="286"></td>
        <td id="LC286" class="blob-code blob-code-inner js-file-line">        FrontFace.<span class="pl-smi">StencilDepthFailOp</span> = frontStencilDepthFailOp;</td>
      </tr>
      <tr>
        <td id="L287" class="blob-num js-line-number" data-line-number="287"></td>
        <td id="LC287" class="blob-code blob-code-inner js-file-line">        FrontFace.<span class="pl-smi">StencilPassOp</span> = frontStencilPassOp;</td>
      </tr>
      <tr>
        <td id="L288" class="blob-num js-line-number" data-line-number="288"></td>
        <td id="LC288" class="blob-code blob-code-inner js-file-line">        FrontFace.<span class="pl-smi">StencilFunc</span> = frontStencilFunc;</td>
      </tr>
      <tr>
        <td id="L289" class="blob-num js-line-number" data-line-number="289"></td>
        <td id="LC289" class="blob-code blob-code-inner js-file-line">        BackFace.<span class="pl-smi">StencilFailOp</span> = backStencilFailOp;</td>
      </tr>
      <tr>
        <td id="L290" class="blob-num js-line-number" data-line-number="290"></td>
        <td id="LC290" class="blob-code blob-code-inner js-file-line">        BackFace.<span class="pl-smi">StencilDepthFailOp</span> = backStencilDepthFailOp;</td>
      </tr>
      <tr>
        <td id="L291" class="blob-num js-line-number" data-line-number="291"></td>
        <td id="LC291" class="blob-code blob-code-inner js-file-line">        BackFace.<span class="pl-smi">StencilPassOp</span> = backStencilPassOp;</td>
      </tr>
      <tr>
        <td id="L292" class="blob-num js-line-number" data-line-number="292"></td>
        <td id="LC292" class="blob-code blob-code-inner js-file-line">        BackFace.<span class="pl-smi">StencilFunc</span> = backStencilFunc;</td>
      </tr>
      <tr>
        <td id="L293" class="blob-num js-line-number" data-line-number="293"></td>
        <td id="LC293" class="blob-code blob-code-inner js-file-line">        DepthBoundsTestEnable = depthBoundsTestEnable;</td>
      </tr>
      <tr>
        <td id="L294" class="blob-num js-line-number" data-line-number="294"></td>
        <td id="LC294" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L295" class="blob-num js-line-number" data-line-number="295"></td>
        <td id="LC295" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-smi">D3D12_DEPTH_STENCIL_DESC</span>() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L296" class="blob-num js-line-number" data-line-number="296"></td>
        <td id="LC296" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L297" class="blob-num js-line-number" data-line-number="297"></td>
        <td id="LC297" class="blob-code blob-code-inner js-file-line">        D3D12_DEPTH_STENCIL_DESC D;</td>
      </tr>
      <tr>
        <td id="L298" class="blob-num js-line-number" data-line-number="298"></td>
        <td id="LC298" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">DepthEnable</span>                  = DepthEnable;</td>
      </tr>
      <tr>
        <td id="L299" class="blob-num js-line-number" data-line-number="299"></td>
        <td id="LC299" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">DepthWriteMask</span>               = DepthWriteMask;</td>
      </tr>
      <tr>
        <td id="L300" class="blob-num js-line-number" data-line-number="300"></td>
        <td id="LC300" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">DepthFunc</span>                    = DepthFunc;</td>
      </tr>
      <tr>
        <td id="L301" class="blob-num js-line-number" data-line-number="301"></td>
        <td id="LC301" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">StencilEnable</span>                = StencilEnable;</td>
      </tr>
      <tr>
        <td id="L302" class="blob-num js-line-number" data-line-number="302"></td>
        <td id="LC302" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">StencilReadMask</span>              = StencilReadMask;</td>
      </tr>
      <tr>
        <td id="L303" class="blob-num js-line-number" data-line-number="303"></td>
        <td id="LC303" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">StencilWriteMask</span>             = StencilWriteMask;</td>
      </tr>
      <tr>
        <td id="L304" class="blob-num js-line-number" data-line-number="304"></td>
        <td id="LC304" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">FrontFace</span>.<span class="pl-smi">StencilFailOp</span>      = FrontFace.<span class="pl-smi">StencilFailOp</span>;</td>
      </tr>
      <tr>
        <td id="L305" class="blob-num js-line-number" data-line-number="305"></td>
        <td id="LC305" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">FrontFace</span>.<span class="pl-smi">StencilDepthFailOp</span> = FrontFace.<span class="pl-smi">StencilDepthFailOp</span>;</td>
      </tr>
      <tr>
        <td id="L306" class="blob-num js-line-number" data-line-number="306"></td>
        <td id="LC306" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">FrontFace</span>.<span class="pl-smi">StencilPassOp</span>      = FrontFace.<span class="pl-smi">StencilPassOp</span>;</td>
      </tr>
      <tr>
        <td id="L307" class="blob-num js-line-number" data-line-number="307"></td>
        <td id="LC307" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">FrontFace</span>.<span class="pl-smi">StencilFunc</span>        = FrontFace.<span class="pl-smi">StencilFunc</span>;</td>
      </tr>
      <tr>
        <td id="L308" class="blob-num js-line-number" data-line-number="308"></td>
        <td id="LC308" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">BackFace</span>.<span class="pl-smi">StencilFailOp</span>       = BackFace.<span class="pl-smi">StencilFailOp</span>;</td>
      </tr>
      <tr>
        <td id="L309" class="blob-num js-line-number" data-line-number="309"></td>
        <td id="LC309" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">BackFace</span>.<span class="pl-smi">StencilDepthFailOp</span>  = BackFace.<span class="pl-smi">StencilDepthFailOp</span>;</td>
      </tr>
      <tr>
        <td id="L310" class="blob-num js-line-number" data-line-number="310"></td>
        <td id="LC310" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">BackFace</span>.<span class="pl-smi">StencilPassOp</span>       = BackFace.<span class="pl-smi">StencilPassOp</span>;</td>
      </tr>
      <tr>
        <td id="L311" class="blob-num js-line-number" data-line-number="311"></td>
        <td id="LC311" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">BackFace</span>.<span class="pl-smi">StencilFunc</span>         = BackFace.<span class="pl-smi">StencilFunc</span>;</td>
      </tr>
      <tr>
        <td id="L312" class="blob-num js-line-number" data-line-number="312"></td>
        <td id="LC312" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> D;</td>
      </tr>
      <tr>
        <td id="L313" class="blob-num js-line-number" data-line-number="313"></td>
        <td id="LC313" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L314" class="blob-num js-line-number" data-line-number="314"></td>
        <td id="LC314" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L315" class="blob-num js-line-number" data-line-number="315"></td>
        <td id="LC315" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L316" class="blob-num js-line-number" data-line-number="316"></td>
        <td id="LC316" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L317" class="blob-num js-line-number" data-line-number="317"></td>
        <td id="LC317" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_BLEND_DESC : public D3D12_BLEND_DESC</td>
      </tr>
      <tr>
        <td id="L318" class="blob-num js-line-number" data-line-number="318"></td>
        <td id="LC318" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L319" class="blob-num js-line-number" data-line-number="319"></td>
        <td id="LC319" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_BLEND_DESC</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L320" class="blob-num js-line-number" data-line-number="320"></td>
        <td id="LC320" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_BLEND_DESC</span>( <span class="pl-k">const</span> D3D12_BLEND_DESC&amp; o ) :</td>
      </tr>
      <tr>
        <td id="L321" class="blob-num js-line-number" data-line-number="321"></td>
        <td id="LC321" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_BLEND_DESC</span>( o )</td>
      </tr>
      <tr>
        <td id="L322" class="blob-num js-line-number" data-line-number="322"></td>
        <td id="LC322" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L323" class="blob-num js-line-number" data-line-number="323"></td>
        <td id="LC323" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_BLEND_DESC</span>( CD3DX12_DEFAULT )</td>
      </tr>
      <tr>
        <td id="L324" class="blob-num js-line-number" data-line-number="324"></td>
        <td id="LC324" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L325" class="blob-num js-line-number" data-line-number="325"></td>
        <td id="LC325" class="blob-code blob-code-inner js-file-line">        AlphaToCoverageEnable = <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="L326" class="blob-num js-line-number" data-line-number="326"></td>
        <td id="LC326" class="blob-code blob-code-inner js-file-line">        IndependentBlendEnable = <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="L327" class="blob-num js-line-number" data-line-number="327"></td>
        <td id="LC327" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">const</span> D3D12_RENDER_TARGET_BLEND_DESC defaultRenderTargetBlendDesc =</td>
      </tr>
      <tr>
        <td id="L328" class="blob-num js-line-number" data-line-number="328"></td>
        <td id="LC328" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L329" class="blob-num js-line-number" data-line-number="329"></td>
        <td id="LC329" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">FALSE</span>,<span class="pl-c1">FALSE</span>,</td>
      </tr>
      <tr>
        <td id="L330" class="blob-num js-line-number" data-line-number="330"></td>
        <td id="LC330" class="blob-code blob-code-inner js-file-line">            D3D12_BLEND_ONE, D3D12_BLEND_ZERO, D3D12_BLEND_OP_ADD,</td>
      </tr>
      <tr>
        <td id="L331" class="blob-num js-line-number" data-line-number="331"></td>
        <td id="LC331" class="blob-code blob-code-inner js-file-line">            D3D12_BLEND_ONE, D3D12_BLEND_ZERO, D3D12_BLEND_OP_ADD,</td>
      </tr>
      <tr>
        <td id="L332" class="blob-num js-line-number" data-line-number="332"></td>
        <td id="LC332" class="blob-code blob-code-inner js-file-line">            D3D12_LOGIC_OP_NOOP,</td>
      </tr>
      <tr>
        <td id="L333" class="blob-num js-line-number" data-line-number="333"></td>
        <td id="LC333" class="blob-code blob-code-inner js-file-line">            D3D12_COLOR_WRITE_ENABLE_ALL,</td>
      </tr>
      <tr>
        <td id="L334" class="blob-num js-line-number" data-line-number="334"></td>
        <td id="LC334" class="blob-code blob-code-inner js-file-line">        };</td>
      </tr>
      <tr>
        <td id="L335" class="blob-num js-line-number" data-line-number="335"></td>
        <td id="LC335" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (UINT i = <span class="pl-c1">0</span>; i &lt; D3D12_SIMULTANEOUS_RENDER_TARGET_COUNT; ++i)</td>
      </tr>
      <tr>
        <td id="L336" class="blob-num js-line-number" data-line-number="336"></td>
        <td id="LC336" class="blob-code blob-code-inner js-file-line">            RenderTarget[ i ] = defaultRenderTargetBlendDesc;</td>
      </tr>
      <tr>
        <td id="L337" class="blob-num js-line-number" data-line-number="337"></td>
        <td id="LC337" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L338" class="blob-num js-line-number" data-line-number="338"></td>
        <td id="LC338" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L339" class="blob-num js-line-number" data-line-number="339"></td>
        <td id="LC339" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L340" class="blob-num js-line-number" data-line-number="340"></td>
        <td id="LC340" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L341" class="blob-num js-line-number" data-line-number="341"></td>
        <td id="LC341" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_RASTERIZER_DESC : public D3D12_RASTERIZER_DESC</td>
      </tr>
      <tr>
        <td id="L342" class="blob-num js-line-number" data-line-number="342"></td>
        <td id="LC342" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L343" class="blob-num js-line-number" data-line-number="343"></td>
        <td id="LC343" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_RASTERIZER_DESC</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L344" class="blob-num js-line-number" data-line-number="344"></td>
        <td id="LC344" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_RASTERIZER_DESC</span>( <span class="pl-k">const</span> D3D12_RASTERIZER_DESC&amp; o ) :</td>
      </tr>
      <tr>
        <td id="L345" class="blob-num js-line-number" data-line-number="345"></td>
        <td id="LC345" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_RASTERIZER_DESC</span>( o )</td>
      </tr>
      <tr>
        <td id="L346" class="blob-num js-line-number" data-line-number="346"></td>
        <td id="LC346" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L347" class="blob-num js-line-number" data-line-number="347"></td>
        <td id="LC347" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_RASTERIZER_DESC</span>( CD3DX12_DEFAULT )</td>
      </tr>
      <tr>
        <td id="L348" class="blob-num js-line-number" data-line-number="348"></td>
        <td id="LC348" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L349" class="blob-num js-line-number" data-line-number="349"></td>
        <td id="LC349" class="blob-code blob-code-inner js-file-line">        FillMode = D3D12_FILL_MODE_SOLID;</td>
      </tr>
      <tr>
        <td id="L350" class="blob-num js-line-number" data-line-number="350"></td>
        <td id="LC350" class="blob-code blob-code-inner js-file-line">        CullMode = D3D12_CULL_MODE_BACK;</td>
      </tr>
      <tr>
        <td id="L351" class="blob-num js-line-number" data-line-number="351"></td>
        <td id="LC351" class="blob-code blob-code-inner js-file-line">        FrontCounterClockwise = <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="L352" class="blob-num js-line-number" data-line-number="352"></td>
        <td id="LC352" class="blob-code blob-code-inner js-file-line">        DepthBias = D3D12_DEFAULT_DEPTH_BIAS;</td>
      </tr>
      <tr>
        <td id="L353" class="blob-num js-line-number" data-line-number="353"></td>
        <td id="LC353" class="blob-code blob-code-inner js-file-line">        DepthBiasClamp = D3D12_DEFAULT_DEPTH_BIAS_CLAMP;</td>
      </tr>
      <tr>
        <td id="L354" class="blob-num js-line-number" data-line-number="354"></td>
        <td id="LC354" class="blob-code blob-code-inner js-file-line">        SlopeScaledDepthBias = D3D12_DEFAULT_SLOPE_SCALED_DEPTH_BIAS;</td>
      </tr>
      <tr>
        <td id="L355" class="blob-num js-line-number" data-line-number="355"></td>
        <td id="LC355" class="blob-code blob-code-inner js-file-line">        DepthClipEnable = <span class="pl-c1">TRUE</span>;</td>
      </tr>
      <tr>
        <td id="L356" class="blob-num js-line-number" data-line-number="356"></td>
        <td id="LC356" class="blob-code blob-code-inner js-file-line">        MultisampleEnable = <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="L357" class="blob-num js-line-number" data-line-number="357"></td>
        <td id="LC357" class="blob-code blob-code-inner js-file-line">        AntialiasedLineEnable = <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="L358" class="blob-num js-line-number" data-line-number="358"></td>
        <td id="LC358" class="blob-code blob-code-inner js-file-line">        ForcedSampleCount = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L359" class="blob-num js-line-number" data-line-number="359"></td>
        <td id="LC359" class="blob-code blob-code-inner js-file-line">        ConservativeRaster = D3D12_CONSERVATIVE_RASTERIZATION_MODE_OFF;</td>
      </tr>
      <tr>
        <td id="L360" class="blob-num js-line-number" data-line-number="360"></td>
        <td id="LC360" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L361" class="blob-num js-line-number" data-line-number="361"></td>
        <td id="LC361" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_RASTERIZER_DESC</span>(</td>
      </tr>
      <tr>
        <td id="L362" class="blob-num js-line-number" data-line-number="362"></td>
        <td id="LC362" class="blob-code blob-code-inner js-file-line">        D3D12_FILL_MODE fillMode,</td>
      </tr>
      <tr>
        <td id="L363" class="blob-num js-line-number" data-line-number="363"></td>
        <td id="LC363" class="blob-code blob-code-inner js-file-line">        D3D12_CULL_MODE cullMode,</td>
      </tr>
      <tr>
        <td id="L364" class="blob-num js-line-number" data-line-number="364"></td>
        <td id="LC364" class="blob-code blob-code-inner js-file-line">        BOOL frontCounterClockwise,</td>
      </tr>
      <tr>
        <td id="L365" class="blob-num js-line-number" data-line-number="365"></td>
        <td id="LC365" class="blob-code blob-code-inner js-file-line">        INT depthBias,</td>
      </tr>
      <tr>
        <td id="L366" class="blob-num js-line-number" data-line-number="366"></td>
        <td id="LC366" class="blob-code blob-code-inner js-file-line">        FLOAT depthBiasClamp,</td>
      </tr>
      <tr>
        <td id="L367" class="blob-num js-line-number" data-line-number="367"></td>
        <td id="LC367" class="blob-code blob-code-inner js-file-line">        FLOAT slopeScaledDepthBias,</td>
      </tr>
      <tr>
        <td id="L368" class="blob-num js-line-number" data-line-number="368"></td>
        <td id="LC368" class="blob-code blob-code-inner js-file-line">        BOOL depthClipEnable,</td>
      </tr>
      <tr>
        <td id="L369" class="blob-num js-line-number" data-line-number="369"></td>
        <td id="LC369" class="blob-code blob-code-inner js-file-line">        BOOL multisampleEnable,</td>
      </tr>
      <tr>
        <td id="L370" class="blob-num js-line-number" data-line-number="370"></td>
        <td id="LC370" class="blob-code blob-code-inner js-file-line">        BOOL antialiasedLineEnable, </td>
      </tr>
      <tr>
        <td id="L371" class="blob-num js-line-number" data-line-number="371"></td>
        <td id="LC371" class="blob-code blob-code-inner js-file-line">        UINT forcedSampleCount, </td>
      </tr>
      <tr>
        <td id="L372" class="blob-num js-line-number" data-line-number="372"></td>
        <td id="LC372" class="blob-code blob-code-inner js-file-line">        D3D12_CONSERVATIVE_RASTERIZATION_MODE conservativeRaster)</td>
      </tr>
      <tr>
        <td id="L373" class="blob-num js-line-number" data-line-number="373"></td>
        <td id="LC373" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L374" class="blob-num js-line-number" data-line-number="374"></td>
        <td id="LC374" class="blob-code blob-code-inner js-file-line">        FillMode = fillMode;</td>
      </tr>
      <tr>
        <td id="L375" class="blob-num js-line-number" data-line-number="375"></td>
        <td id="LC375" class="blob-code blob-code-inner js-file-line">        CullMode = cullMode;</td>
      </tr>
      <tr>
        <td id="L376" class="blob-num js-line-number" data-line-number="376"></td>
        <td id="LC376" class="blob-code blob-code-inner js-file-line">        FrontCounterClockwise = frontCounterClockwise;</td>
      </tr>
      <tr>
        <td id="L377" class="blob-num js-line-number" data-line-number="377"></td>
        <td id="LC377" class="blob-code blob-code-inner js-file-line">        DepthBias = depthBias;</td>
      </tr>
      <tr>
        <td id="L378" class="blob-num js-line-number" data-line-number="378"></td>
        <td id="LC378" class="blob-code blob-code-inner js-file-line">        DepthBiasClamp = depthBiasClamp;</td>
      </tr>
      <tr>
        <td id="L379" class="blob-num js-line-number" data-line-number="379"></td>
        <td id="LC379" class="blob-code blob-code-inner js-file-line">        SlopeScaledDepthBias = slopeScaledDepthBias;</td>
      </tr>
      <tr>
        <td id="L380" class="blob-num js-line-number" data-line-number="380"></td>
        <td id="LC380" class="blob-code blob-code-inner js-file-line">        DepthClipEnable = depthClipEnable;</td>
      </tr>
      <tr>
        <td id="L381" class="blob-num js-line-number" data-line-number="381"></td>
        <td id="LC381" class="blob-code blob-code-inner js-file-line">        MultisampleEnable = multisampleEnable;</td>
      </tr>
      <tr>
        <td id="L382" class="blob-num js-line-number" data-line-number="382"></td>
        <td id="LC382" class="blob-code blob-code-inner js-file-line">        AntialiasedLineEnable = antialiasedLineEnable;</td>
      </tr>
      <tr>
        <td id="L383" class="blob-num js-line-number" data-line-number="383"></td>
        <td id="LC383" class="blob-code blob-code-inner js-file-line">        ForcedSampleCount = forcedSampleCount;</td>
      </tr>
      <tr>
        <td id="L384" class="blob-num js-line-number" data-line-number="384"></td>
        <td id="LC384" class="blob-code blob-code-inner js-file-line">        ConservativeRaster = conservativeRaster;</td>
      </tr>
      <tr>
        <td id="L385" class="blob-num js-line-number" data-line-number="385"></td>
        <td id="LC385" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L386" class="blob-num js-line-number" data-line-number="386"></td>
        <td id="LC386" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L387" class="blob-num js-line-number" data-line-number="387"></td>
        <td id="LC387" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L388" class="blob-num js-line-number" data-line-number="388"></td>
        <td id="LC388" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L389" class="blob-num js-line-number" data-line-number="389"></td>
        <td id="LC389" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_RESOURCE_ALLOCATION_INFO : public D3D12_RESOURCE_ALLOCATION_INFO</td>
      </tr>
      <tr>
        <td id="L390" class="blob-num js-line-number" data-line-number="390"></td>
        <td id="LC390" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L391" class="blob-num js-line-number" data-line-number="391"></td>
        <td id="LC391" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_RESOURCE_ALLOCATION_INFO</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L392" class="blob-num js-line-number" data-line-number="392"></td>
        <td id="LC392" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_RESOURCE_ALLOCATION_INFO</span>( <span class="pl-k">const</span> D3D12_RESOURCE_ALLOCATION_INFO&amp; o ) :</td>
      </tr>
      <tr>
        <td id="L393" class="blob-num js-line-number" data-line-number="393"></td>
        <td id="LC393" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_RESOURCE_ALLOCATION_INFO</span>( o )</td>
      </tr>
      <tr>
        <td id="L394" class="blob-num js-line-number" data-line-number="394"></td>
        <td id="LC394" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L395" class="blob-num js-line-number" data-line-number="395"></td>
        <td id="LC395" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_RESOURCE_ALLOCATION_INFO</span>(</td>
      </tr>
      <tr>
        <td id="L396" class="blob-num js-line-number" data-line-number="396"></td>
        <td id="LC396" class="blob-code blob-code-inner js-file-line">        UINT64 size,</td>
      </tr>
      <tr>
        <td id="L397" class="blob-num js-line-number" data-line-number="397"></td>
        <td id="LC397" class="blob-code blob-code-inner js-file-line">        UINT64 alignment )</td>
      </tr>
      <tr>
        <td id="L398" class="blob-num js-line-number" data-line-number="398"></td>
        <td id="LC398" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L399" class="blob-num js-line-number" data-line-number="399"></td>
        <td id="LC399" class="blob-code blob-code-inner js-file-line">        SizeInBytes = size;</td>
      </tr>
      <tr>
        <td id="L400" class="blob-num js-line-number" data-line-number="400"></td>
        <td id="LC400" class="blob-code blob-code-inner js-file-line">        Alignment = alignment;</td>
      </tr>
      <tr>
        <td id="L401" class="blob-num js-line-number" data-line-number="401"></td>
        <td id="LC401" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L402" class="blob-num js-line-number" data-line-number="402"></td>
        <td id="LC402" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L403" class="blob-num js-line-number" data-line-number="403"></td>
        <td id="LC403" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L404" class="blob-num js-line-number" data-line-number="404"></td>
        <td id="LC404" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L405" class="blob-num js-line-number" data-line-number="405"></td>
        <td id="LC405" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_HEAP_PROPERTIES : public D3D12_HEAP_PROPERTIES</td>
      </tr>
      <tr>
        <td id="L406" class="blob-num js-line-number" data-line-number="406"></td>
        <td id="LC406" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L407" class="blob-num js-line-number" data-line-number="407"></td>
        <td id="LC407" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_HEAP_PROPERTIES</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L408" class="blob-num js-line-number" data-line-number="408"></td>
        <td id="LC408" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_HEAP_PROPERTIES</span>(<span class="pl-k">const</span> D3D12_HEAP_PROPERTIES &amp;o) :</td>
      </tr>
      <tr>
        <td id="L409" class="blob-num js-line-number" data-line-number="409"></td>
        <td id="LC409" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_HEAP_PROPERTIES</span>(o)</td>
      </tr>
      <tr>
        <td id="L410" class="blob-num js-line-number" data-line-number="410"></td>
        <td id="LC410" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L411" class="blob-num js-line-number" data-line-number="411"></td>
        <td id="LC411" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_HEAP_PROPERTIES</span>( </td>
      </tr>
      <tr>
        <td id="L412" class="blob-num js-line-number" data-line-number="412"></td>
        <td id="LC412" class="blob-code blob-code-inner js-file-line">        D3D12_CPU_PAGE_PROPERTY cpuPageProperty, </td>
      </tr>
      <tr>
        <td id="L413" class="blob-num js-line-number" data-line-number="413"></td>
        <td id="LC413" class="blob-code blob-code-inner js-file-line">        D3D12_MEMORY_POOL memoryPoolPreference,</td>
      </tr>
      <tr>
        <td id="L414" class="blob-num js-line-number" data-line-number="414"></td>
        <td id="LC414" class="blob-code blob-code-inner js-file-line">        UINT creationNodeMask = <span class="pl-c1">1</span>, </td>
      </tr>
      <tr>
        <td id="L415" class="blob-num js-line-number" data-line-number="415"></td>
        <td id="LC415" class="blob-code blob-code-inner js-file-line">        UINT nodeMask = <span class="pl-c1">1</span> )</td>
      </tr>
      <tr>
        <td id="L416" class="blob-num js-line-number" data-line-number="416"></td>
        <td id="LC416" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L417" class="blob-num js-line-number" data-line-number="417"></td>
        <td id="LC417" class="blob-code blob-code-inner js-file-line">        Type = D3D12_HEAP_TYPE_CUSTOM;</td>
      </tr>
      <tr>
        <td id="L418" class="blob-num js-line-number" data-line-number="418"></td>
        <td id="LC418" class="blob-code blob-code-inner js-file-line">        CPUPageProperty = cpuPageProperty;</td>
      </tr>
      <tr>
        <td id="L419" class="blob-num js-line-number" data-line-number="419"></td>
        <td id="LC419" class="blob-code blob-code-inner js-file-line">        MemoryPoolPreference = memoryPoolPreference;</td>
      </tr>
      <tr>
        <td id="L420" class="blob-num js-line-number" data-line-number="420"></td>
        <td id="LC420" class="blob-code blob-code-inner js-file-line">        CreationNodeMask = creationNodeMask;</td>
      </tr>
      <tr>
        <td id="L421" class="blob-num js-line-number" data-line-number="421"></td>
        <td id="LC421" class="blob-code blob-code-inner js-file-line">        VisibleNodeMask = nodeMask;</td>
      </tr>
      <tr>
        <td id="L422" class="blob-num js-line-number" data-line-number="422"></td>
        <td id="LC422" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L423" class="blob-num js-line-number" data-line-number="423"></td>
        <td id="LC423" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_HEAP_PROPERTIES</span>( </td>
      </tr>
      <tr>
        <td id="L424" class="blob-num js-line-number" data-line-number="424"></td>
        <td id="LC424" class="blob-code blob-code-inner js-file-line">        D3D12_HEAP_TYPE type, </td>
      </tr>
      <tr>
        <td id="L425" class="blob-num js-line-number" data-line-number="425"></td>
        <td id="LC425" class="blob-code blob-code-inner js-file-line">        UINT creationNodeMask = <span class="pl-c1">1</span>, </td>
      </tr>
      <tr>
        <td id="L426" class="blob-num js-line-number" data-line-number="426"></td>
        <td id="LC426" class="blob-code blob-code-inner js-file-line">        UINT nodeMask = <span class="pl-c1">1</span> )</td>
      </tr>
      <tr>
        <td id="L427" class="blob-num js-line-number" data-line-number="427"></td>
        <td id="LC427" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L428" class="blob-num js-line-number" data-line-number="428"></td>
        <td id="LC428" class="blob-code blob-code-inner js-file-line">        Type = type;</td>
      </tr>
      <tr>
        <td id="L429" class="blob-num js-line-number" data-line-number="429"></td>
        <td id="LC429" class="blob-code blob-code-inner js-file-line">        CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;</td>
      </tr>
      <tr>
        <td id="L430" class="blob-num js-line-number" data-line-number="430"></td>
        <td id="LC430" class="blob-code blob-code-inner js-file-line">        MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;</td>
      </tr>
      <tr>
        <td id="L431" class="blob-num js-line-number" data-line-number="431"></td>
        <td id="LC431" class="blob-code blob-code-inner js-file-line">        CreationNodeMask = creationNodeMask;</td>
      </tr>
      <tr>
        <td id="L432" class="blob-num js-line-number" data-line-number="432"></td>
        <td id="LC432" class="blob-code blob-code-inner js-file-line">        VisibleNodeMask = nodeMask;</td>
      </tr>
      <tr>
        <td id="L433" class="blob-num js-line-number" data-line-number="433"></td>
        <td id="LC433" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L434" class="blob-num js-line-number" data-line-number="434"></td>
        <td id="LC434" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span> <span class="pl-smi">IsCPUAccessible</span>() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L435" class="blob-num js-line-number" data-line-number="435"></td>
        <td id="LC435" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L436" class="blob-num js-line-number" data-line-number="436"></td>
        <td id="LC436" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> Type == D3D12_HEAP_TYPE_UPLOAD || Type == D3D12_HEAP_TYPE_READBACK || (Type == D3D12_HEAP_TYPE_CUSTOM &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L437" class="blob-num js-line-number" data-line-number="437"></td>
        <td id="LC437" class="blob-code blob-code-inner js-file-line">            (CPUPageProperty == D3D12_CPU_PAGE_PROPERTY_WRITE_COMBINE || CPUPageProperty == D3D12_CPU_PAGE_PROPERTY_WRITE_BACK));</td>
      </tr>
      <tr>
        <td id="L438" class="blob-num js-line-number" data-line-number="438"></td>
        <td id="LC438" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L439" class="blob-num js-line-number" data-line-number="439"></td>
        <td id="LC439" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L440" class="blob-num js-line-number" data-line-number="440"></td>
        <td id="LC440" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">bool</span> operator==( <span class="pl-k">const</span> D3D12_HEAP_PROPERTIES&amp; l, <span class="pl-k">const</span> D3D12_HEAP_PROPERTIES&amp; r )</td>
      </tr>
      <tr>
        <td id="L441" class="blob-num js-line-number" data-line-number="441"></td>
        <td id="LC441" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L442" class="blob-num js-line-number" data-line-number="442"></td>
        <td id="LC442" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> l.<span class="pl-smi">Type</span> == r.<span class="pl-smi">Type</span> &amp;&amp; l.<span class="pl-smi">CPUPageProperty</span> == r.<span class="pl-smi">CPUPageProperty</span> &amp;&amp; </td>
      </tr>
      <tr>
        <td id="L443" class="blob-num js-line-number" data-line-number="443"></td>
        <td id="LC443" class="blob-code blob-code-inner js-file-line">        l.<span class="pl-smi">MemoryPoolPreference</span> == r.<span class="pl-smi">MemoryPoolPreference</span> &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L444" class="blob-num js-line-number" data-line-number="444"></td>
        <td id="LC444" class="blob-code blob-code-inner js-file-line">        l.<span class="pl-smi">CreationNodeMask</span> == r.<span class="pl-smi">CreationNodeMask</span> &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L445" class="blob-num js-line-number" data-line-number="445"></td>
        <td id="LC445" class="blob-code blob-code-inner js-file-line">        l.<span class="pl-smi">VisibleNodeMask</span> == r.<span class="pl-smi">VisibleNodeMask</span>;</td>
      </tr>
      <tr>
        <td id="L446" class="blob-num js-line-number" data-line-number="446"></td>
        <td id="LC446" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L447" class="blob-num js-line-number" data-line-number="447"></td>
        <td id="LC447" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">bool</span> operator!=( <span class="pl-k">const</span> D3D12_HEAP_PROPERTIES&amp; l, <span class="pl-k">const</span> D3D12_HEAP_PROPERTIES&amp; r )</td>
      </tr>
      <tr>
        <td id="L448" class="blob-num js-line-number" data-line-number="448"></td>
        <td id="LC448" class="blob-code blob-code-inner js-file-line">{ <span class="pl-k">return</span> !( l == r ); }</td>
      </tr>
      <tr>
        <td id="L449" class="blob-num js-line-number" data-line-number="449"></td>
        <td id="LC449" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L450" class="blob-num js-line-number" data-line-number="450"></td>
        <td id="LC450" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L451" class="blob-num js-line-number" data-line-number="451"></td>
        <td id="LC451" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_HEAP_DESC : public D3D12_HEAP_DESC</td>
      </tr>
      <tr>
        <td id="L452" class="blob-num js-line-number" data-line-number="452"></td>
        <td id="LC452" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L453" class="blob-num js-line-number" data-line-number="453"></td>
        <td id="LC453" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_HEAP_DESC</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L454" class="blob-num js-line-number" data-line-number="454"></td>
        <td id="LC454" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_HEAP_DESC</span>(<span class="pl-k">const</span> D3D12_HEAP_DESC &amp;o) :</td>
      </tr>
      <tr>
        <td id="L455" class="blob-num js-line-number" data-line-number="455"></td>
        <td id="LC455" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_HEAP_DESC</span>(o)</td>
      </tr>
      <tr>
        <td id="L456" class="blob-num js-line-number" data-line-number="456"></td>
        <td id="LC456" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L457" class="blob-num js-line-number" data-line-number="457"></td>
        <td id="LC457" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_HEAP_DESC</span>( </td>
      </tr>
      <tr>
        <td id="L458" class="blob-num js-line-number" data-line-number="458"></td>
        <td id="LC458" class="blob-code blob-code-inner js-file-line">        UINT64 size, </td>
      </tr>
      <tr>
        <td id="L459" class="blob-num js-line-number" data-line-number="459"></td>
        <td id="LC459" class="blob-code blob-code-inner js-file-line">        D3D12_HEAP_PROPERTIES properties, </td>
      </tr>
      <tr>
        <td id="L460" class="blob-num js-line-number" data-line-number="460"></td>
        <td id="LC460" class="blob-code blob-code-inner js-file-line">        UINT64 alignment = <span class="pl-c1">0</span>, </td>
      </tr>
      <tr>
        <td id="L461" class="blob-num js-line-number" data-line-number="461"></td>
        <td id="LC461" class="blob-code blob-code-inner js-file-line">        D3D12_HEAP_FLAGS flags = D3D12_HEAP_FLAG_NONE )</td>
      </tr>
      <tr>
        <td id="L462" class="blob-num js-line-number" data-line-number="462"></td>
        <td id="LC462" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L463" class="blob-num js-line-number" data-line-number="463"></td>
        <td id="LC463" class="blob-code blob-code-inner js-file-line">        SizeInBytes = size;</td>
      </tr>
      <tr>
        <td id="L464" class="blob-num js-line-number" data-line-number="464"></td>
        <td id="LC464" class="blob-code blob-code-inner js-file-line">        Properties = properties;</td>
      </tr>
      <tr>
        <td id="L465" class="blob-num js-line-number" data-line-number="465"></td>
        <td id="LC465" class="blob-code blob-code-inner js-file-line">        Alignment = alignment;</td>
      </tr>
      <tr>
        <td id="L466" class="blob-num js-line-number" data-line-number="466"></td>
        <td id="LC466" class="blob-code blob-code-inner js-file-line">        Flags = flags;</td>
      </tr>
      <tr>
        <td id="L467" class="blob-num js-line-number" data-line-number="467"></td>
        <td id="LC467" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L468" class="blob-num js-line-number" data-line-number="468"></td>
        <td id="LC468" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_HEAP_DESC</span>( </td>
      </tr>
      <tr>
        <td id="L469" class="blob-num js-line-number" data-line-number="469"></td>
        <td id="LC469" class="blob-code blob-code-inner js-file-line">        UINT64 size, </td>
      </tr>
      <tr>
        <td id="L470" class="blob-num js-line-number" data-line-number="470"></td>
        <td id="LC470" class="blob-code blob-code-inner js-file-line">        D3D12_HEAP_TYPE type, </td>
      </tr>
      <tr>
        <td id="L471" class="blob-num js-line-number" data-line-number="471"></td>
        <td id="LC471" class="blob-code blob-code-inner js-file-line">        UINT64 alignment = <span class="pl-c1">0</span>, </td>
      </tr>
      <tr>
        <td id="L472" class="blob-num js-line-number" data-line-number="472"></td>
        <td id="LC472" class="blob-code blob-code-inner js-file-line">        D3D12_HEAP_FLAGS flags = D3D12_HEAP_FLAG_NONE )</td>
      </tr>
      <tr>
        <td id="L473" class="blob-num js-line-number" data-line-number="473"></td>
        <td id="LC473" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L474" class="blob-num js-line-number" data-line-number="474"></td>
        <td id="LC474" class="blob-code blob-code-inner js-file-line">        SizeInBytes = size;</td>
      </tr>
      <tr>
        <td id="L475" class="blob-num js-line-number" data-line-number="475"></td>
        <td id="LC475" class="blob-code blob-code-inner js-file-line">        Properties = <span class="pl-c1">CD3DX12_HEAP_PROPERTIES</span>( type );</td>
      </tr>
      <tr>
        <td id="L476" class="blob-num js-line-number" data-line-number="476"></td>
        <td id="LC476" class="blob-code blob-code-inner js-file-line">        Alignment = alignment;</td>
      </tr>
      <tr>
        <td id="L477" class="blob-num js-line-number" data-line-number="477"></td>
        <td id="LC477" class="blob-code blob-code-inner js-file-line">        Flags = flags;</td>
      </tr>
      <tr>
        <td id="L478" class="blob-num js-line-number" data-line-number="478"></td>
        <td id="LC478" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L479" class="blob-num js-line-number" data-line-number="479"></td>
        <td id="LC479" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_HEAP_DESC</span>( </td>
      </tr>
      <tr>
        <td id="L480" class="blob-num js-line-number" data-line-number="480"></td>
        <td id="LC480" class="blob-code blob-code-inner js-file-line">        UINT64 size, </td>
      </tr>
      <tr>
        <td id="L481" class="blob-num js-line-number" data-line-number="481"></td>
        <td id="LC481" class="blob-code blob-code-inner js-file-line">        D3D12_CPU_PAGE_PROPERTY cpuPageProperty, </td>
      </tr>
      <tr>
        <td id="L482" class="blob-num js-line-number" data-line-number="482"></td>
        <td id="LC482" class="blob-code blob-code-inner js-file-line">        D3D12_MEMORY_POOL memoryPoolPreference, </td>
      </tr>
      <tr>
        <td id="L483" class="blob-num js-line-number" data-line-number="483"></td>
        <td id="LC483" class="blob-code blob-code-inner js-file-line">        UINT64 alignment = <span class="pl-c1">0</span>, </td>
      </tr>
      <tr>
        <td id="L484" class="blob-num js-line-number" data-line-number="484"></td>
        <td id="LC484" class="blob-code blob-code-inner js-file-line">        D3D12_HEAP_FLAGS flags = D3D12_HEAP_FLAG_NONE )</td>
      </tr>
      <tr>
        <td id="L485" class="blob-num js-line-number" data-line-number="485"></td>
        <td id="LC485" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L486" class="blob-num js-line-number" data-line-number="486"></td>
        <td id="LC486" class="blob-code blob-code-inner js-file-line">        SizeInBytes = size;</td>
      </tr>
      <tr>
        <td id="L487" class="blob-num js-line-number" data-line-number="487"></td>
        <td id="LC487" class="blob-code blob-code-inner js-file-line">        Properties = <span class="pl-c1">CD3DX12_HEAP_PROPERTIES</span>( cpuPageProperty, memoryPoolPreference );</td>
      </tr>
      <tr>
        <td id="L488" class="blob-num js-line-number" data-line-number="488"></td>
        <td id="LC488" class="blob-code blob-code-inner js-file-line">        Alignment = alignment;</td>
      </tr>
      <tr>
        <td id="L489" class="blob-num js-line-number" data-line-number="489"></td>
        <td id="LC489" class="blob-code blob-code-inner js-file-line">        Flags = flags;</td>
      </tr>
      <tr>
        <td id="L490" class="blob-num js-line-number" data-line-number="490"></td>
        <td id="LC490" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L491" class="blob-num js-line-number" data-line-number="491"></td>
        <td id="LC491" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_HEAP_DESC</span>( </td>
      </tr>
      <tr>
        <td id="L492" class="blob-num js-line-number" data-line-number="492"></td>
        <td id="LC492" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">const</span> D3D12_RESOURCE_ALLOCATION_INFO&amp; resAllocInfo,</td>
      </tr>
      <tr>
        <td id="L493" class="blob-num js-line-number" data-line-number="493"></td>
        <td id="LC493" class="blob-code blob-code-inner js-file-line">        D3D12_HEAP_PROPERTIES properties, </td>
      </tr>
      <tr>
        <td id="L494" class="blob-num js-line-number" data-line-number="494"></td>
        <td id="LC494" class="blob-code blob-code-inner js-file-line">        D3D12_HEAP_FLAGS flags = D3D12_HEAP_FLAG_NONE )</td>
      </tr>
      <tr>
        <td id="L495" class="blob-num js-line-number" data-line-number="495"></td>
        <td id="LC495" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L496" class="blob-num js-line-number" data-line-number="496"></td>
        <td id="LC496" class="blob-code blob-code-inner js-file-line">        SizeInBytes = resAllocInfo.<span class="pl-smi">SizeInBytes</span>;</td>
      </tr>
      <tr>
        <td id="L497" class="blob-num js-line-number" data-line-number="497"></td>
        <td id="LC497" class="blob-code blob-code-inner js-file-line">        Properties = properties;</td>
      </tr>
      <tr>
        <td id="L498" class="blob-num js-line-number" data-line-number="498"></td>
        <td id="LC498" class="blob-code blob-code-inner js-file-line">        Alignment = resAllocInfo.<span class="pl-smi">Alignment</span>;</td>
      </tr>
      <tr>
        <td id="L499" class="blob-num js-line-number" data-line-number="499"></td>
        <td id="LC499" class="blob-code blob-code-inner js-file-line">        Flags = flags;</td>
      </tr>
      <tr>
        <td id="L500" class="blob-num js-line-number" data-line-number="500"></td>
        <td id="LC500" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L501" class="blob-num js-line-number" data-line-number="501"></td>
        <td id="LC501" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_HEAP_DESC</span>( </td>
      </tr>
      <tr>
        <td id="L502" class="blob-num js-line-number" data-line-number="502"></td>
        <td id="LC502" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">const</span> D3D12_RESOURCE_ALLOCATION_INFO&amp; resAllocInfo,</td>
      </tr>
      <tr>
        <td id="L503" class="blob-num js-line-number" data-line-number="503"></td>
        <td id="LC503" class="blob-code blob-code-inner js-file-line">        D3D12_HEAP_TYPE type, </td>
      </tr>
      <tr>
        <td id="L504" class="blob-num js-line-number" data-line-number="504"></td>
        <td id="LC504" class="blob-code blob-code-inner js-file-line">        D3D12_HEAP_FLAGS flags = D3D12_HEAP_FLAG_NONE )</td>
      </tr>
      <tr>
        <td id="L505" class="blob-num js-line-number" data-line-number="505"></td>
        <td id="LC505" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L506" class="blob-num js-line-number" data-line-number="506"></td>
        <td id="LC506" class="blob-code blob-code-inner js-file-line">        SizeInBytes = resAllocInfo.<span class="pl-smi">SizeInBytes</span>;</td>
      </tr>
      <tr>
        <td id="L507" class="blob-num js-line-number" data-line-number="507"></td>
        <td id="LC507" class="blob-code blob-code-inner js-file-line">        Properties = <span class="pl-c1">CD3DX12_HEAP_PROPERTIES</span>( type );</td>
      </tr>
      <tr>
        <td id="L508" class="blob-num js-line-number" data-line-number="508"></td>
        <td id="LC508" class="blob-code blob-code-inner js-file-line">        Alignment = resAllocInfo.<span class="pl-smi">Alignment</span>;</td>
      </tr>
      <tr>
        <td id="L509" class="blob-num js-line-number" data-line-number="509"></td>
        <td id="LC509" class="blob-code blob-code-inner js-file-line">        Flags = flags;</td>
      </tr>
      <tr>
        <td id="L510" class="blob-num js-line-number" data-line-number="510"></td>
        <td id="LC510" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L511" class="blob-num js-line-number" data-line-number="511"></td>
        <td id="LC511" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_HEAP_DESC</span>( </td>
      </tr>
      <tr>
        <td id="L512" class="blob-num js-line-number" data-line-number="512"></td>
        <td id="LC512" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">const</span> D3D12_RESOURCE_ALLOCATION_INFO&amp; resAllocInfo,</td>
      </tr>
      <tr>
        <td id="L513" class="blob-num js-line-number" data-line-number="513"></td>
        <td id="LC513" class="blob-code blob-code-inner js-file-line">        D3D12_CPU_PAGE_PROPERTY cpuPageProperty, </td>
      </tr>
      <tr>
        <td id="L514" class="blob-num js-line-number" data-line-number="514"></td>
        <td id="LC514" class="blob-code blob-code-inner js-file-line">        D3D12_MEMORY_POOL memoryPoolPreference, </td>
      </tr>
      <tr>
        <td id="L515" class="blob-num js-line-number" data-line-number="515"></td>
        <td id="LC515" class="blob-code blob-code-inner js-file-line">        D3D12_HEAP_FLAGS flags = D3D12_HEAP_FLAG_NONE )</td>
      </tr>
      <tr>
        <td id="L516" class="blob-num js-line-number" data-line-number="516"></td>
        <td id="LC516" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L517" class="blob-num js-line-number" data-line-number="517"></td>
        <td id="LC517" class="blob-code blob-code-inner js-file-line">        SizeInBytes = resAllocInfo.<span class="pl-smi">SizeInBytes</span>;</td>
      </tr>
      <tr>
        <td id="L518" class="blob-num js-line-number" data-line-number="518"></td>
        <td id="LC518" class="blob-code blob-code-inner js-file-line">        Properties = <span class="pl-c1">CD3DX12_HEAP_PROPERTIES</span>( cpuPageProperty, memoryPoolPreference );</td>
      </tr>
      <tr>
        <td id="L519" class="blob-num js-line-number" data-line-number="519"></td>
        <td id="LC519" class="blob-code blob-code-inner js-file-line">        Alignment = resAllocInfo.<span class="pl-smi">Alignment</span>;</td>
      </tr>
      <tr>
        <td id="L520" class="blob-num js-line-number" data-line-number="520"></td>
        <td id="LC520" class="blob-code blob-code-inner js-file-line">        Flags = flags;</td>
      </tr>
      <tr>
        <td id="L521" class="blob-num js-line-number" data-line-number="521"></td>
        <td id="LC521" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L522" class="blob-num js-line-number" data-line-number="522"></td>
        <td id="LC522" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span> <span class="pl-smi">IsCPUAccessible</span>() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L523" class="blob-num js-line-number" data-line-number="523"></td>
        <td id="LC523" class="blob-code blob-code-inner js-file-line">    { <span class="pl-k">return</span> static_cast&lt; <span class="pl-k">const</span> CD3DX12_HEAP_PROPERTIES* &gt;( &amp;Properties )-&gt;<span class="pl-c1">IsCPUAccessible</span>(); }</td>
      </tr>
      <tr>
        <td id="L524" class="blob-num js-line-number" data-line-number="524"></td>
        <td id="LC524" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L525" class="blob-num js-line-number" data-line-number="525"></td>
        <td id="LC525" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">bool</span> operator==( <span class="pl-k">const</span> D3D12_HEAP_DESC&amp; l, <span class="pl-k">const</span> D3D12_HEAP_DESC&amp; r )</td>
      </tr>
      <tr>
        <td id="L526" class="blob-num js-line-number" data-line-number="526"></td>
        <td id="LC526" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L527" class="blob-num js-line-number" data-line-number="527"></td>
        <td id="LC527" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> l.<span class="pl-smi">SizeInBytes</span> == r.<span class="pl-smi">SizeInBytes</span> &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L528" class="blob-num js-line-number" data-line-number="528"></td>
        <td id="LC528" class="blob-code blob-code-inner js-file-line">        l.<span class="pl-smi">Properties</span> == r.<span class="pl-smi">Properties</span> &amp;&amp; </td>
      </tr>
      <tr>
        <td id="L529" class="blob-num js-line-number" data-line-number="529"></td>
        <td id="LC529" class="blob-code blob-code-inner js-file-line">        l.<span class="pl-smi">Alignment</span> == r.<span class="pl-smi">Alignment</span> &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L530" class="blob-num js-line-number" data-line-number="530"></td>
        <td id="LC530" class="blob-code blob-code-inner js-file-line">        l.<span class="pl-smi">Flags</span> == r.<span class="pl-smi">Flags</span>;</td>
      </tr>
      <tr>
        <td id="L531" class="blob-num js-line-number" data-line-number="531"></td>
        <td id="LC531" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L532" class="blob-num js-line-number" data-line-number="532"></td>
        <td id="LC532" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">bool</span> operator!=( <span class="pl-k">const</span> D3D12_HEAP_DESC&amp; l, <span class="pl-k">const</span> D3D12_HEAP_DESC&amp; r )</td>
      </tr>
      <tr>
        <td id="L533" class="blob-num js-line-number" data-line-number="533"></td>
        <td id="LC533" class="blob-code blob-code-inner js-file-line">{ <span class="pl-k">return</span> !( l == r ); }</td>
      </tr>
      <tr>
        <td id="L534" class="blob-num js-line-number" data-line-number="534"></td>
        <td id="LC534" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L535" class="blob-num js-line-number" data-line-number="535"></td>
        <td id="LC535" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L536" class="blob-num js-line-number" data-line-number="536"></td>
        <td id="LC536" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_CLEAR_VALUE : public D3D12_CLEAR_VALUE</td>
      </tr>
      <tr>
        <td id="L537" class="blob-num js-line-number" data-line-number="537"></td>
        <td id="LC537" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L538" class="blob-num js-line-number" data-line-number="538"></td>
        <td id="LC538" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_CLEAR_VALUE</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L539" class="blob-num js-line-number" data-line-number="539"></td>
        <td id="LC539" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_CLEAR_VALUE</span>(<span class="pl-k">const</span> D3D12_CLEAR_VALUE &amp;o) :</td>
      </tr>
      <tr>
        <td id="L540" class="blob-num js-line-number" data-line-number="540"></td>
        <td id="LC540" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_CLEAR_VALUE</span>(o)</td>
      </tr>
      <tr>
        <td id="L541" class="blob-num js-line-number" data-line-number="541"></td>
        <td id="LC541" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L542" class="blob-num js-line-number" data-line-number="542"></td>
        <td id="LC542" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_CLEAR_VALUE</span>( </td>
      </tr>
      <tr>
        <td id="L543" class="blob-num js-line-number" data-line-number="543"></td>
        <td id="LC543" class="blob-code blob-code-inner js-file-line">        DXGI_FORMAT format, </td>
      </tr>
      <tr>
        <td id="L544" class="blob-num js-line-number" data-line-number="544"></td>
        <td id="LC544" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">const</span> FLOAT color[<span class="pl-c1">4</span>] )</td>
      </tr>
      <tr>
        <td id="L545" class="blob-num js-line-number" data-line-number="545"></td>
        <td id="LC545" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L546" class="blob-num js-line-number" data-line-number="546"></td>
        <td id="LC546" class="blob-code blob-code-inner js-file-line">        Format = format;</td>
      </tr>
      <tr>
        <td id="L547" class="blob-num js-line-number" data-line-number="547"></td>
        <td id="LC547" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">memcpy</span>( Color, color, <span class="pl-k">sizeof</span>( Color ) );</td>
      </tr>
      <tr>
        <td id="L548" class="blob-num js-line-number" data-line-number="548"></td>
        <td id="LC548" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L549" class="blob-num js-line-number" data-line-number="549"></td>
        <td id="LC549" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_CLEAR_VALUE</span>( </td>
      </tr>
      <tr>
        <td id="L550" class="blob-num js-line-number" data-line-number="550"></td>
        <td id="LC550" class="blob-code blob-code-inner js-file-line">        DXGI_FORMAT format, </td>
      </tr>
      <tr>
        <td id="L551" class="blob-num js-line-number" data-line-number="551"></td>
        <td id="LC551" class="blob-code blob-code-inner js-file-line">        FLOAT depth,</td>
      </tr>
      <tr>
        <td id="L552" class="blob-num js-line-number" data-line-number="552"></td>
        <td id="LC552" class="blob-code blob-code-inner js-file-line">        UINT8 stencil )</td>
      </tr>
      <tr>
        <td id="L553" class="blob-num js-line-number" data-line-number="553"></td>
        <td id="LC553" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L554" class="blob-num js-line-number" data-line-number="554"></td>
        <td id="LC554" class="blob-code blob-code-inner js-file-line">        Format = format;</td>
      </tr>
      <tr>
        <td id="L555" class="blob-num js-line-number" data-line-number="555"></td>
        <td id="LC555" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">memset</span>( &amp;Color, <span class="pl-c1">0</span>, <span class="pl-k">sizeof</span>( Color ) );</td>
      </tr>
      <tr>
        <td id="L556" class="blob-num js-line-number" data-line-number="556"></td>
        <td id="LC556" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span> Use memcpy to preserve NAN values <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L557" class="blob-num js-line-number" data-line-number="557"></td>
        <td id="LC557" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">memcpy</span>( &amp;DepthStencil.<span class="pl-smi">Depth</span>, &amp;depth, <span class="pl-k">sizeof</span>( depth ) );</td>
      </tr>
      <tr>
        <td id="L558" class="blob-num js-line-number" data-line-number="558"></td>
        <td id="LC558" class="blob-code blob-code-inner js-file-line">        DepthStencil.<span class="pl-smi">Stencil</span> = stencil;</td>
      </tr>
      <tr>
        <td id="L559" class="blob-num js-line-number" data-line-number="559"></td>
        <td id="LC559" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L560" class="blob-num js-line-number" data-line-number="560"></td>
        <td id="LC560" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L561" class="blob-num js-line-number" data-line-number="561"></td>
        <td id="LC561" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L562" class="blob-num js-line-number" data-line-number="562"></td>
        <td id="LC562" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L563" class="blob-num js-line-number" data-line-number="563"></td>
        <td id="LC563" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_RANGE : public D3D12_RANGE</td>
      </tr>
      <tr>
        <td id="L564" class="blob-num js-line-number" data-line-number="564"></td>
        <td id="LC564" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L565" class="blob-num js-line-number" data-line-number="565"></td>
        <td id="LC565" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_RANGE</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L566" class="blob-num js-line-number" data-line-number="566"></td>
        <td id="LC566" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_RANGE</span>(<span class="pl-k">const</span> D3D12_RANGE &amp;o) :</td>
      </tr>
      <tr>
        <td id="L567" class="blob-num js-line-number" data-line-number="567"></td>
        <td id="LC567" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_RANGE</span>(o)</td>
      </tr>
      <tr>
        <td id="L568" class="blob-num js-line-number" data-line-number="568"></td>
        <td id="LC568" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L569" class="blob-num js-line-number" data-line-number="569"></td>
        <td id="LC569" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_RANGE</span>( </td>
      </tr>
      <tr>
        <td id="L570" class="blob-num js-line-number" data-line-number="570"></td>
        <td id="LC570" class="blob-code blob-code-inner js-file-line">        SIZE_T begin, </td>
      </tr>
      <tr>
        <td id="L571" class="blob-num js-line-number" data-line-number="571"></td>
        <td id="LC571" class="blob-code blob-code-inner js-file-line">        SIZE_T end )</td>
      </tr>
      <tr>
        <td id="L572" class="blob-num js-line-number" data-line-number="572"></td>
        <td id="LC572" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L573" class="blob-num js-line-number" data-line-number="573"></td>
        <td id="LC573" class="blob-code blob-code-inner js-file-line">        Begin = begin;</td>
      </tr>
      <tr>
        <td id="L574" class="blob-num js-line-number" data-line-number="574"></td>
        <td id="LC574" class="blob-code blob-code-inner js-file-line">        End = end;</td>
      </tr>
      <tr>
        <td id="L575" class="blob-num js-line-number" data-line-number="575"></td>
        <td id="LC575" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L576" class="blob-num js-line-number" data-line-number="576"></td>
        <td id="LC576" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L577" class="blob-num js-line-number" data-line-number="577"></td>
        <td id="LC577" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L578" class="blob-num js-line-number" data-line-number="578"></td>
        <td id="LC578" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L579" class="blob-num js-line-number" data-line-number="579"></td>
        <td id="LC579" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_RANGE_UINT64 : public D3D12_RANGE_UINT64</td>
      </tr>
      <tr>
        <td id="L580" class="blob-num js-line-number" data-line-number="580"></td>
        <td id="LC580" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L581" class="blob-num js-line-number" data-line-number="581"></td>
        <td id="LC581" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_RANGE_UINT64</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L582" class="blob-num js-line-number" data-line-number="582"></td>
        <td id="LC582" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_RANGE_UINT64</span>(<span class="pl-k">const</span> D3D12_RANGE_UINT64 &amp;o) :</td>
      </tr>
      <tr>
        <td id="L583" class="blob-num js-line-number" data-line-number="583"></td>
        <td id="LC583" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_RANGE_UINT64</span>(o)</td>
      </tr>
      <tr>
        <td id="L584" class="blob-num js-line-number" data-line-number="584"></td>
        <td id="LC584" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L585" class="blob-num js-line-number" data-line-number="585"></td>
        <td id="LC585" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_RANGE_UINT64</span>( </td>
      </tr>
      <tr>
        <td id="L586" class="blob-num js-line-number" data-line-number="586"></td>
        <td id="LC586" class="blob-code blob-code-inner js-file-line">        UINT64 begin, </td>
      </tr>
      <tr>
        <td id="L587" class="blob-num js-line-number" data-line-number="587"></td>
        <td id="LC587" class="blob-code blob-code-inner js-file-line">        UINT64 end )</td>
      </tr>
      <tr>
        <td id="L588" class="blob-num js-line-number" data-line-number="588"></td>
        <td id="LC588" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L589" class="blob-num js-line-number" data-line-number="589"></td>
        <td id="LC589" class="blob-code blob-code-inner js-file-line">        Begin = begin;</td>
      </tr>
      <tr>
        <td id="L590" class="blob-num js-line-number" data-line-number="590"></td>
        <td id="LC590" class="blob-code blob-code-inner js-file-line">        End = end;</td>
      </tr>
      <tr>
        <td id="L591" class="blob-num js-line-number" data-line-number="591"></td>
        <td id="LC591" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L592" class="blob-num js-line-number" data-line-number="592"></td>
        <td id="LC592" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L593" class="blob-num js-line-number" data-line-number="593"></td>
        <td id="LC593" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L594" class="blob-num js-line-number" data-line-number="594"></td>
        <td id="LC594" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L595" class="blob-num js-line-number" data-line-number="595"></td>
        <td id="LC595" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_SUBRESOURCE_RANGE_UINT64 : public D3D12_SUBRESOURCE_RANGE_UINT64</td>
      </tr>
      <tr>
        <td id="L596" class="blob-num js-line-number" data-line-number="596"></td>
        <td id="LC596" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L597" class="blob-num js-line-number" data-line-number="597"></td>
        <td id="LC597" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_SUBRESOURCE_RANGE_UINT64</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L598" class="blob-num js-line-number" data-line-number="598"></td>
        <td id="LC598" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_SUBRESOURCE_RANGE_UINT64</span>(<span class="pl-k">const</span> D3D12_SUBRESOURCE_RANGE_UINT64 &amp;o) :</td>
      </tr>
      <tr>
        <td id="L599" class="blob-num js-line-number" data-line-number="599"></td>
        <td id="LC599" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_SUBRESOURCE_RANGE_UINT64</span>(o)</td>
      </tr>
      <tr>
        <td id="L600" class="blob-num js-line-number" data-line-number="600"></td>
        <td id="LC600" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L601" class="blob-num js-line-number" data-line-number="601"></td>
        <td id="LC601" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_SUBRESOURCE_RANGE_UINT64</span>( </td>
      </tr>
      <tr>
        <td id="L602" class="blob-num js-line-number" data-line-number="602"></td>
        <td id="LC602" class="blob-code blob-code-inner js-file-line">        UINT subresource,</td>
      </tr>
      <tr>
        <td id="L603" class="blob-num js-line-number" data-line-number="603"></td>
        <td id="LC603" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">const</span> D3D12_RANGE_UINT64&amp; range )</td>
      </tr>
      <tr>
        <td id="L604" class="blob-num js-line-number" data-line-number="604"></td>
        <td id="LC604" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L605" class="blob-num js-line-number" data-line-number="605"></td>
        <td id="LC605" class="blob-code blob-code-inner js-file-line">        Subresource = subresource;</td>
      </tr>
      <tr>
        <td id="L606" class="blob-num js-line-number" data-line-number="606"></td>
        <td id="LC606" class="blob-code blob-code-inner js-file-line">        Range = range;</td>
      </tr>
      <tr>
        <td id="L607" class="blob-num js-line-number" data-line-number="607"></td>
        <td id="LC607" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L608" class="blob-num js-line-number" data-line-number="608"></td>
        <td id="LC608" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_SUBRESOURCE_RANGE_UINT64</span>( </td>
      </tr>
      <tr>
        <td id="L609" class="blob-num js-line-number" data-line-number="609"></td>
        <td id="LC609" class="blob-code blob-code-inner js-file-line">        UINT subresource,</td>
      </tr>
      <tr>
        <td id="L610" class="blob-num js-line-number" data-line-number="610"></td>
        <td id="LC610" class="blob-code blob-code-inner js-file-line">        UINT64 begin, </td>
      </tr>
      <tr>
        <td id="L611" class="blob-num js-line-number" data-line-number="611"></td>
        <td id="LC611" class="blob-code blob-code-inner js-file-line">        UINT64 end )</td>
      </tr>
      <tr>
        <td id="L612" class="blob-num js-line-number" data-line-number="612"></td>
        <td id="LC612" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L613" class="blob-num js-line-number" data-line-number="613"></td>
        <td id="LC613" class="blob-code blob-code-inner js-file-line">        Subresource = subresource;</td>
      </tr>
      <tr>
        <td id="L614" class="blob-num js-line-number" data-line-number="614"></td>
        <td id="LC614" class="blob-code blob-code-inner js-file-line">        Range.<span class="pl-smi">Begin</span> = begin;</td>
      </tr>
      <tr>
        <td id="L615" class="blob-num js-line-number" data-line-number="615"></td>
        <td id="LC615" class="blob-code blob-code-inner js-file-line">        Range.<span class="pl-smi">End</span> = end;</td>
      </tr>
      <tr>
        <td id="L616" class="blob-num js-line-number" data-line-number="616"></td>
        <td id="LC616" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L617" class="blob-num js-line-number" data-line-number="617"></td>
        <td id="LC617" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L618" class="blob-num js-line-number" data-line-number="618"></td>
        <td id="LC618" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L619" class="blob-num js-line-number" data-line-number="619"></td>
        <td id="LC619" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L620" class="blob-num js-line-number" data-line-number="620"></td>
        <td id="LC620" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_SHADER_BYTECODE : public D3D12_SHADER_BYTECODE</td>
      </tr>
      <tr>
        <td id="L621" class="blob-num js-line-number" data-line-number="621"></td>
        <td id="LC621" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L622" class="blob-num js-line-number" data-line-number="622"></td>
        <td id="LC622" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_SHADER_BYTECODE</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L623" class="blob-num js-line-number" data-line-number="623"></td>
        <td id="LC623" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_SHADER_BYTECODE</span>(<span class="pl-k">const</span> D3D12_SHADER_BYTECODE &amp;o) :</td>
      </tr>
      <tr>
        <td id="L624" class="blob-num js-line-number" data-line-number="624"></td>
        <td id="LC624" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_SHADER_BYTECODE</span>(o)</td>
      </tr>
      <tr>
        <td id="L625" class="blob-num js-line-number" data-line-number="625"></td>
        <td id="LC625" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L626" class="blob-num js-line-number" data-line-number="626"></td>
        <td id="LC626" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_SHADER_BYTECODE</span>(</td>
      </tr>
      <tr>
        <td id="L627" class="blob-num js-line-number" data-line-number="627"></td>
        <td id="LC627" class="blob-code blob-code-inner js-file-line">        _In_ ID3DBlob* pShaderBlob )</td>
      </tr>
      <tr>
        <td id="L628" class="blob-num js-line-number" data-line-number="628"></td>
        <td id="LC628" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L629" class="blob-num js-line-number" data-line-number="629"></td>
        <td id="LC629" class="blob-code blob-code-inner js-file-line">        pShaderBytecode = pShaderBlob-&gt;<span class="pl-c1">GetBufferPointer</span>();</td>
      </tr>
      <tr>
        <td id="L630" class="blob-num js-line-number" data-line-number="630"></td>
        <td id="LC630" class="blob-code blob-code-inner js-file-line">        BytecodeLength = pShaderBlob-&gt;<span class="pl-c1">GetBufferSize</span>();</td>
      </tr>
      <tr>
        <td id="L631" class="blob-num js-line-number" data-line-number="631"></td>
        <td id="LC631" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L632" class="blob-num js-line-number" data-line-number="632"></td>
        <td id="LC632" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_SHADER_BYTECODE</span>(</td>
      </tr>
      <tr>
        <td id="L633" class="blob-num js-line-number" data-line-number="633"></td>
        <td id="LC633" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">const</span> <span class="pl-k">void</span>* _pShaderBytecode,</td>
      </tr>
      <tr>
        <td id="L634" class="blob-num js-line-number" data-line-number="634"></td>
        <td id="LC634" class="blob-code blob-code-inner js-file-line">        SIZE_T bytecodeLength )</td>
      </tr>
      <tr>
        <td id="L635" class="blob-num js-line-number" data-line-number="635"></td>
        <td id="LC635" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L636" class="blob-num js-line-number" data-line-number="636"></td>
        <td id="LC636" class="blob-code blob-code-inner js-file-line">        pShaderBytecode = _pShaderBytecode;</td>
      </tr>
      <tr>
        <td id="L637" class="blob-num js-line-number" data-line-number="637"></td>
        <td id="LC637" class="blob-code blob-code-inner js-file-line">        BytecodeLength = bytecodeLength;</td>
      </tr>
      <tr>
        <td id="L638" class="blob-num js-line-number" data-line-number="638"></td>
        <td id="LC638" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L639" class="blob-num js-line-number" data-line-number="639"></td>
        <td id="LC639" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L640" class="blob-num js-line-number" data-line-number="640"></td>
        <td id="LC640" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L641" class="blob-num js-line-number" data-line-number="641"></td>
        <td id="LC641" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L642" class="blob-num js-line-number" data-line-number="642"></td>
        <td id="LC642" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_TILED_RESOURCE_COORDINATE : public D3D12_TILED_RESOURCE_COORDINATE</td>
      </tr>
      <tr>
        <td id="L643" class="blob-num js-line-number" data-line-number="643"></td>
        <td id="LC643" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L644" class="blob-num js-line-number" data-line-number="644"></td>
        <td id="LC644" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_TILED_RESOURCE_COORDINATE</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L645" class="blob-num js-line-number" data-line-number="645"></td>
        <td id="LC645" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_TILED_RESOURCE_COORDINATE</span>(<span class="pl-k">const</span> D3D12_TILED_RESOURCE_COORDINATE &amp;o) :</td>
      </tr>
      <tr>
        <td id="L646" class="blob-num js-line-number" data-line-number="646"></td>
        <td id="LC646" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_TILED_RESOURCE_COORDINATE</span>(o)</td>
      </tr>
      <tr>
        <td id="L647" class="blob-num js-line-number" data-line-number="647"></td>
        <td id="LC647" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L648" class="blob-num js-line-number" data-line-number="648"></td>
        <td id="LC648" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_TILED_RESOURCE_COORDINATE</span>( </td>
      </tr>
      <tr>
        <td id="L649" class="blob-num js-line-number" data-line-number="649"></td>
        <td id="LC649" class="blob-code blob-code-inner js-file-line">        UINT x, </td>
      </tr>
      <tr>
        <td id="L650" class="blob-num js-line-number" data-line-number="650"></td>
        <td id="LC650" class="blob-code blob-code-inner js-file-line">        UINT y, </td>
      </tr>
      <tr>
        <td id="L651" class="blob-num js-line-number" data-line-number="651"></td>
        <td id="LC651" class="blob-code blob-code-inner js-file-line">        UINT z, </td>
      </tr>
      <tr>
        <td id="L652" class="blob-num js-line-number" data-line-number="652"></td>
        <td id="LC652" class="blob-code blob-code-inner js-file-line">        UINT subresource ) </td>
      </tr>
      <tr>
        <td id="L653" class="blob-num js-line-number" data-line-number="653"></td>
        <td id="LC653" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L654" class="blob-num js-line-number" data-line-number="654"></td>
        <td id="LC654" class="blob-code blob-code-inner js-file-line">        X = x;</td>
      </tr>
      <tr>
        <td id="L655" class="blob-num js-line-number" data-line-number="655"></td>
        <td id="LC655" class="blob-code blob-code-inner js-file-line">        Y = y;</td>
      </tr>
      <tr>
        <td id="L656" class="blob-num js-line-number" data-line-number="656"></td>
        <td id="LC656" class="blob-code blob-code-inner js-file-line">        Z = z;</td>
      </tr>
      <tr>
        <td id="L657" class="blob-num js-line-number" data-line-number="657"></td>
        <td id="LC657" class="blob-code blob-code-inner js-file-line">        Subresource = subresource;</td>
      </tr>
      <tr>
        <td id="L658" class="blob-num js-line-number" data-line-number="658"></td>
        <td id="LC658" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L659" class="blob-num js-line-number" data-line-number="659"></td>
        <td id="LC659" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L660" class="blob-num js-line-number" data-line-number="660"></td>
        <td id="LC660" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L661" class="blob-num js-line-number" data-line-number="661"></td>
        <td id="LC661" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L662" class="blob-num js-line-number" data-line-number="662"></td>
        <td id="LC662" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_TILE_REGION_SIZE : public D3D12_TILE_REGION_SIZE</td>
      </tr>
      <tr>
        <td id="L663" class="blob-num js-line-number" data-line-number="663"></td>
        <td id="LC663" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L664" class="blob-num js-line-number" data-line-number="664"></td>
        <td id="LC664" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_TILE_REGION_SIZE</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L665" class="blob-num js-line-number" data-line-number="665"></td>
        <td id="LC665" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_TILE_REGION_SIZE</span>(<span class="pl-k">const</span> D3D12_TILE_REGION_SIZE &amp;o) :</td>
      </tr>
      <tr>
        <td id="L666" class="blob-num js-line-number" data-line-number="666"></td>
        <td id="LC666" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_TILE_REGION_SIZE</span>(o)</td>
      </tr>
      <tr>
        <td id="L667" class="blob-num js-line-number" data-line-number="667"></td>
        <td id="LC667" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L668" class="blob-num js-line-number" data-line-number="668"></td>
        <td id="LC668" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_TILE_REGION_SIZE</span>( </td>
      </tr>
      <tr>
        <td id="L669" class="blob-num js-line-number" data-line-number="669"></td>
        <td id="LC669" class="blob-code blob-code-inner js-file-line">        UINT numTiles, </td>
      </tr>
      <tr>
        <td id="L670" class="blob-num js-line-number" data-line-number="670"></td>
        <td id="LC670" class="blob-code blob-code-inner js-file-line">        BOOL useBox, </td>
      </tr>
      <tr>
        <td id="L671" class="blob-num js-line-number" data-line-number="671"></td>
        <td id="LC671" class="blob-code blob-code-inner js-file-line">        UINT width, </td>
      </tr>
      <tr>
        <td id="L672" class="blob-num js-line-number" data-line-number="672"></td>
        <td id="LC672" class="blob-code blob-code-inner js-file-line">        UINT16 height, </td>
      </tr>
      <tr>
        <td id="L673" class="blob-num js-line-number" data-line-number="673"></td>
        <td id="LC673" class="blob-code blob-code-inner js-file-line">        UINT16 depth ) </td>
      </tr>
      <tr>
        <td id="L674" class="blob-num js-line-number" data-line-number="674"></td>
        <td id="LC674" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L675" class="blob-num js-line-number" data-line-number="675"></td>
        <td id="LC675" class="blob-code blob-code-inner js-file-line">        NumTiles = numTiles;</td>
      </tr>
      <tr>
        <td id="L676" class="blob-num js-line-number" data-line-number="676"></td>
        <td id="LC676" class="blob-code blob-code-inner js-file-line">        UseBox = useBox;</td>
      </tr>
      <tr>
        <td id="L677" class="blob-num js-line-number" data-line-number="677"></td>
        <td id="LC677" class="blob-code blob-code-inner js-file-line">        Width = width;</td>
      </tr>
      <tr>
        <td id="L678" class="blob-num js-line-number" data-line-number="678"></td>
        <td id="LC678" class="blob-code blob-code-inner js-file-line">        Height = height;</td>
      </tr>
      <tr>
        <td id="L679" class="blob-num js-line-number" data-line-number="679"></td>
        <td id="LC679" class="blob-code blob-code-inner js-file-line">        Depth = depth;</td>
      </tr>
      <tr>
        <td id="L680" class="blob-num js-line-number" data-line-number="680"></td>
        <td id="LC680" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L681" class="blob-num js-line-number" data-line-number="681"></td>
        <td id="LC681" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L682" class="blob-num js-line-number" data-line-number="682"></td>
        <td id="LC682" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L683" class="blob-num js-line-number" data-line-number="683"></td>
        <td id="LC683" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L684" class="blob-num js-line-number" data-line-number="684"></td>
        <td id="LC684" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_SUBRESOURCE_TILING : public D3D12_SUBRESOURCE_TILING</td>
      </tr>
      <tr>
        <td id="L685" class="blob-num js-line-number" data-line-number="685"></td>
        <td id="LC685" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L686" class="blob-num js-line-number" data-line-number="686"></td>
        <td id="LC686" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_SUBRESOURCE_TILING</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L687" class="blob-num js-line-number" data-line-number="687"></td>
        <td id="LC687" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_SUBRESOURCE_TILING</span>(<span class="pl-k">const</span> D3D12_SUBRESOURCE_TILING &amp;o) :</td>
      </tr>
      <tr>
        <td id="L688" class="blob-num js-line-number" data-line-number="688"></td>
        <td id="LC688" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_SUBRESOURCE_TILING</span>(o)</td>
      </tr>
      <tr>
        <td id="L689" class="blob-num js-line-number" data-line-number="689"></td>
        <td id="LC689" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L690" class="blob-num js-line-number" data-line-number="690"></td>
        <td id="LC690" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_SUBRESOURCE_TILING</span>( </td>
      </tr>
      <tr>
        <td id="L691" class="blob-num js-line-number" data-line-number="691"></td>
        <td id="LC691" class="blob-code blob-code-inner js-file-line">        UINT widthInTiles, </td>
      </tr>
      <tr>
        <td id="L692" class="blob-num js-line-number" data-line-number="692"></td>
        <td id="LC692" class="blob-code blob-code-inner js-file-line">        UINT16 heightInTiles, </td>
      </tr>
      <tr>
        <td id="L693" class="blob-num js-line-number" data-line-number="693"></td>
        <td id="LC693" class="blob-code blob-code-inner js-file-line">        UINT16 depthInTiles, </td>
      </tr>
      <tr>
        <td id="L694" class="blob-num js-line-number" data-line-number="694"></td>
        <td id="LC694" class="blob-code blob-code-inner js-file-line">        UINT startTileIndexInOverallResource ) </td>
      </tr>
      <tr>
        <td id="L695" class="blob-num js-line-number" data-line-number="695"></td>
        <td id="LC695" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L696" class="blob-num js-line-number" data-line-number="696"></td>
        <td id="LC696" class="blob-code blob-code-inner js-file-line">        WidthInTiles = widthInTiles;</td>
      </tr>
      <tr>
        <td id="L697" class="blob-num js-line-number" data-line-number="697"></td>
        <td id="LC697" class="blob-code blob-code-inner js-file-line">        HeightInTiles = heightInTiles;</td>
      </tr>
      <tr>
        <td id="L698" class="blob-num js-line-number" data-line-number="698"></td>
        <td id="LC698" class="blob-code blob-code-inner js-file-line">        DepthInTiles = depthInTiles;</td>
      </tr>
      <tr>
        <td id="L699" class="blob-num js-line-number" data-line-number="699"></td>
        <td id="LC699" class="blob-code blob-code-inner js-file-line">        StartTileIndexInOverallResource = startTileIndexInOverallResource;</td>
      </tr>
      <tr>
        <td id="L700" class="blob-num js-line-number" data-line-number="700"></td>
        <td id="LC700" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L701" class="blob-num js-line-number" data-line-number="701"></td>
        <td id="LC701" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L702" class="blob-num js-line-number" data-line-number="702"></td>
        <td id="LC702" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L703" class="blob-num js-line-number" data-line-number="703"></td>
        <td id="LC703" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L704" class="blob-num js-line-number" data-line-number="704"></td>
        <td id="LC704" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_TILE_SHAPE : public D3D12_TILE_SHAPE</td>
      </tr>
      <tr>
        <td id="L705" class="blob-num js-line-number" data-line-number="705"></td>
        <td id="LC705" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L706" class="blob-num js-line-number" data-line-number="706"></td>
        <td id="LC706" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_TILE_SHAPE</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L707" class="blob-num js-line-number" data-line-number="707"></td>
        <td id="LC707" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_TILE_SHAPE</span>(<span class="pl-k">const</span> D3D12_TILE_SHAPE &amp;o) :</td>
      </tr>
      <tr>
        <td id="L708" class="blob-num js-line-number" data-line-number="708"></td>
        <td id="LC708" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_TILE_SHAPE</span>(o)</td>
      </tr>
      <tr>
        <td id="L709" class="blob-num js-line-number" data-line-number="709"></td>
        <td id="LC709" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L710" class="blob-num js-line-number" data-line-number="710"></td>
        <td id="LC710" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_TILE_SHAPE</span>( </td>
      </tr>
      <tr>
        <td id="L711" class="blob-num js-line-number" data-line-number="711"></td>
        <td id="LC711" class="blob-code blob-code-inner js-file-line">        UINT widthInTexels, </td>
      </tr>
      <tr>
        <td id="L712" class="blob-num js-line-number" data-line-number="712"></td>
        <td id="LC712" class="blob-code blob-code-inner js-file-line">        UINT heightInTexels, </td>
      </tr>
      <tr>
        <td id="L713" class="blob-num js-line-number" data-line-number="713"></td>
        <td id="LC713" class="blob-code blob-code-inner js-file-line">        UINT depthInTexels ) </td>
      </tr>
      <tr>
        <td id="L714" class="blob-num js-line-number" data-line-number="714"></td>
        <td id="LC714" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L715" class="blob-num js-line-number" data-line-number="715"></td>
        <td id="LC715" class="blob-code blob-code-inner js-file-line">        WidthInTexels = widthInTexels;</td>
      </tr>
      <tr>
        <td id="L716" class="blob-num js-line-number" data-line-number="716"></td>
        <td id="LC716" class="blob-code blob-code-inner js-file-line">        HeightInTexels = heightInTexels;</td>
      </tr>
      <tr>
        <td id="L717" class="blob-num js-line-number" data-line-number="717"></td>
        <td id="LC717" class="blob-code blob-code-inner js-file-line">        DepthInTexels = depthInTexels;</td>
      </tr>
      <tr>
        <td id="L718" class="blob-num js-line-number" data-line-number="718"></td>
        <td id="LC718" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L719" class="blob-num js-line-number" data-line-number="719"></td>
        <td id="LC719" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L720" class="blob-num js-line-number" data-line-number="720"></td>
        <td id="LC720" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L721" class="blob-num js-line-number" data-line-number="721"></td>
        <td id="LC721" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L722" class="blob-num js-line-number" data-line-number="722"></td>
        <td id="LC722" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_RESOURCE_BARRIER : public D3D12_RESOURCE_BARRIER</td>
      </tr>
      <tr>
        <td id="L723" class="blob-num js-line-number" data-line-number="723"></td>
        <td id="LC723" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L724" class="blob-num js-line-number" data-line-number="724"></td>
        <td id="LC724" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_RESOURCE_BARRIER</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L725" class="blob-num js-line-number" data-line-number="725"></td>
        <td id="LC725" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_RESOURCE_BARRIER</span>(<span class="pl-k">const</span> D3D12_RESOURCE_BARRIER &amp;o) :</td>
      </tr>
      <tr>
        <td id="L726" class="blob-num js-line-number" data-line-number="726"></td>
        <td id="LC726" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_RESOURCE_BARRIER</span>(o)</td>
      </tr>
      <tr>
        <td id="L727" class="blob-num js-line-number" data-line-number="727"></td>
        <td id="LC727" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L728" class="blob-num js-line-number" data-line-number="728"></td>
        <td id="LC728" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> CD3DX12_RESOURCE_BARRIER <span class="pl-smi">Transition</span>(</td>
      </tr>
      <tr>
        <td id="L729" class="blob-num js-line-number" data-line-number="729"></td>
        <td id="LC729" class="blob-code blob-code-inner js-file-line">        _In_ ID3D12Resource* pResource,</td>
      </tr>
      <tr>
        <td id="L730" class="blob-num js-line-number" data-line-number="730"></td>
        <td id="LC730" class="blob-code blob-code-inner js-file-line">        D3D12_RESOURCE_STATES stateBefore,</td>
      </tr>
      <tr>
        <td id="L731" class="blob-num js-line-number" data-line-number="731"></td>
        <td id="LC731" class="blob-code blob-code-inner js-file-line">        D3D12_RESOURCE_STATES stateAfter,</td>
      </tr>
      <tr>
        <td id="L732" class="blob-num js-line-number" data-line-number="732"></td>
        <td id="LC732" class="blob-code blob-code-inner js-file-line">        UINT subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES,</td>
      </tr>
      <tr>
        <td id="L733" class="blob-num js-line-number" data-line-number="733"></td>
        <td id="LC733" class="blob-code blob-code-inner js-file-line">        D3D12_RESOURCE_BARRIER_FLAGS flags = D3D12_RESOURCE_BARRIER_FLAG_NONE)</td>
      </tr>
      <tr>
        <td id="L734" class="blob-num js-line-number" data-line-number="734"></td>
        <td id="LC734" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L735" class="blob-num js-line-number" data-line-number="735"></td>
        <td id="LC735" class="blob-code blob-code-inner js-file-line">        CD3DX12_RESOURCE_BARRIER result = {};</td>
      </tr>
      <tr>
        <td id="L736" class="blob-num js-line-number" data-line-number="736"></td>
        <td id="LC736" class="blob-code blob-code-inner js-file-line">        D3D12_RESOURCE_BARRIER &amp;barrier = result;</td>
      </tr>
      <tr>
        <td id="L737" class="blob-num js-line-number" data-line-number="737"></td>
        <td id="LC737" class="blob-code blob-code-inner js-file-line">        result.<span class="pl-smi">Type</span> = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;</td>
      </tr>
      <tr>
        <td id="L738" class="blob-num js-line-number" data-line-number="738"></td>
        <td id="LC738" class="blob-code blob-code-inner js-file-line">        result.<span class="pl-smi">Flags</span> = flags;</td>
      </tr>
      <tr>
        <td id="L739" class="blob-num js-line-number" data-line-number="739"></td>
        <td id="LC739" class="blob-code blob-code-inner js-file-line">        barrier.<span class="pl-smi">Transition</span>.<span class="pl-smi">pResource</span> = pResource;</td>
      </tr>
      <tr>
        <td id="L740" class="blob-num js-line-number" data-line-number="740"></td>
        <td id="LC740" class="blob-code blob-code-inner js-file-line">        barrier.<span class="pl-smi">Transition</span>.<span class="pl-smi">StateBefore</span> = stateBefore;</td>
      </tr>
      <tr>
        <td id="L741" class="blob-num js-line-number" data-line-number="741"></td>
        <td id="LC741" class="blob-code blob-code-inner js-file-line">        barrier.<span class="pl-smi">Transition</span>.<span class="pl-smi">StateAfter</span> = stateAfter;</td>
      </tr>
      <tr>
        <td id="L742" class="blob-num js-line-number" data-line-number="742"></td>
        <td id="LC742" class="blob-code blob-code-inner js-file-line">        barrier.<span class="pl-smi">Transition</span>.<span class="pl-smi">Subresource</span> = subresource;</td>
      </tr>
      <tr>
        <td id="L743" class="blob-num js-line-number" data-line-number="743"></td>
        <td id="LC743" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> result;</td>
      </tr>
      <tr>
        <td id="L744" class="blob-num js-line-number" data-line-number="744"></td>
        <td id="LC744" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L745" class="blob-num js-line-number" data-line-number="745"></td>
        <td id="LC745" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> CD3DX12_RESOURCE_BARRIER <span class="pl-smi">Aliasing</span>(</td>
      </tr>
      <tr>
        <td id="L746" class="blob-num js-line-number" data-line-number="746"></td>
        <td id="LC746" class="blob-code blob-code-inner js-file-line">        _In_ ID3D12Resource* pResourceBefore,</td>
      </tr>
      <tr>
        <td id="L747" class="blob-num js-line-number" data-line-number="747"></td>
        <td id="LC747" class="blob-code blob-code-inner js-file-line">        _In_ ID3D12Resource* pResourceAfter)</td>
      </tr>
      <tr>
        <td id="L748" class="blob-num js-line-number" data-line-number="748"></td>
        <td id="LC748" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L749" class="blob-num js-line-number" data-line-number="749"></td>
        <td id="LC749" class="blob-code blob-code-inner js-file-line">        CD3DX12_RESOURCE_BARRIER result = {};</td>
      </tr>
      <tr>
        <td id="L750" class="blob-num js-line-number" data-line-number="750"></td>
        <td id="LC750" class="blob-code blob-code-inner js-file-line">        D3D12_RESOURCE_BARRIER &amp;barrier = result;</td>
      </tr>
      <tr>
        <td id="L751" class="blob-num js-line-number" data-line-number="751"></td>
        <td id="LC751" class="blob-code blob-code-inner js-file-line">        result.<span class="pl-smi">Type</span> = D3D12_RESOURCE_BARRIER_TYPE_ALIASING;</td>
      </tr>
      <tr>
        <td id="L752" class="blob-num js-line-number" data-line-number="752"></td>
        <td id="LC752" class="blob-code blob-code-inner js-file-line">        barrier.<span class="pl-smi">Aliasing</span>.<span class="pl-smi">pResourceBefore</span> = pResourceBefore;</td>
      </tr>
      <tr>
        <td id="L753" class="blob-num js-line-number" data-line-number="753"></td>
        <td id="LC753" class="blob-code blob-code-inner js-file-line">        barrier.<span class="pl-smi">Aliasing</span>.<span class="pl-smi">pResourceAfter</span> = pResourceAfter;</td>
      </tr>
      <tr>
        <td id="L754" class="blob-num js-line-number" data-line-number="754"></td>
        <td id="LC754" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> result;</td>
      </tr>
      <tr>
        <td id="L755" class="blob-num js-line-number" data-line-number="755"></td>
        <td id="LC755" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L756" class="blob-num js-line-number" data-line-number="756"></td>
        <td id="LC756" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> CD3DX12_RESOURCE_BARRIER <span class="pl-smi">UAV</span>(</td>
      </tr>
      <tr>
        <td id="L757" class="blob-num js-line-number" data-line-number="757"></td>
        <td id="LC757" class="blob-code blob-code-inner js-file-line">        _In_ ID3D12Resource* pResource)</td>
      </tr>
      <tr>
        <td id="L758" class="blob-num js-line-number" data-line-number="758"></td>
        <td id="LC758" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L759" class="blob-num js-line-number" data-line-number="759"></td>
        <td id="LC759" class="blob-code blob-code-inner js-file-line">        CD3DX12_RESOURCE_BARRIER result = {};</td>
      </tr>
      <tr>
        <td id="L760" class="blob-num js-line-number" data-line-number="760"></td>
        <td id="LC760" class="blob-code blob-code-inner js-file-line">        D3D12_RESOURCE_BARRIER &amp;barrier = result;</td>
      </tr>
      <tr>
        <td id="L761" class="blob-num js-line-number" data-line-number="761"></td>
        <td id="LC761" class="blob-code blob-code-inner js-file-line">        result.<span class="pl-smi">Type</span> = D3D12_RESOURCE_BARRIER_TYPE_UAV;</td>
      </tr>
      <tr>
        <td id="L762" class="blob-num js-line-number" data-line-number="762"></td>
        <td id="LC762" class="blob-code blob-code-inner js-file-line">        barrier.<span class="pl-smi">UAV</span>.<span class="pl-smi">pResource</span> = pResource;</td>
      </tr>
      <tr>
        <td id="L763" class="blob-num js-line-number" data-line-number="763"></td>
        <td id="LC763" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> result;</td>
      </tr>
      <tr>
        <td id="L764" class="blob-num js-line-number" data-line-number="764"></td>
        <td id="LC764" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L765" class="blob-num js-line-number" data-line-number="765"></td>
        <td id="LC765" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L766" class="blob-num js-line-number" data-line-number="766"></td>
        <td id="LC766" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L767" class="blob-num js-line-number" data-line-number="767"></td>
        <td id="LC767" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L768" class="blob-num js-line-number" data-line-number="768"></td>
        <td id="LC768" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_PACKED_MIP_INFO : public D3D12_PACKED_MIP_INFO</td>
      </tr>
      <tr>
        <td id="L769" class="blob-num js-line-number" data-line-number="769"></td>
        <td id="LC769" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L770" class="blob-num js-line-number" data-line-number="770"></td>
        <td id="LC770" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_PACKED_MIP_INFO</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L771" class="blob-num js-line-number" data-line-number="771"></td>
        <td id="LC771" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_PACKED_MIP_INFO</span>(<span class="pl-k">const</span> D3D12_PACKED_MIP_INFO &amp;o) :</td>
      </tr>
      <tr>
        <td id="L772" class="blob-num js-line-number" data-line-number="772"></td>
        <td id="LC772" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_PACKED_MIP_INFO</span>(o)</td>
      </tr>
      <tr>
        <td id="L773" class="blob-num js-line-number" data-line-number="773"></td>
        <td id="LC773" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L774" class="blob-num js-line-number" data-line-number="774"></td>
        <td id="LC774" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_PACKED_MIP_INFO</span>( </td>
      </tr>
      <tr>
        <td id="L775" class="blob-num js-line-number" data-line-number="775"></td>
        <td id="LC775" class="blob-code blob-code-inner js-file-line">        UINT8 numStandardMips, </td>
      </tr>
      <tr>
        <td id="L776" class="blob-num js-line-number" data-line-number="776"></td>
        <td id="LC776" class="blob-code blob-code-inner js-file-line">        UINT8 numPackedMips, </td>
      </tr>
      <tr>
        <td id="L777" class="blob-num js-line-number" data-line-number="777"></td>
        <td id="LC777" class="blob-code blob-code-inner js-file-line">        UINT numTilesForPackedMips, </td>
      </tr>
      <tr>
        <td id="L778" class="blob-num js-line-number" data-line-number="778"></td>
        <td id="LC778" class="blob-code blob-code-inner js-file-line">        UINT startTileIndexInOverallResource ) </td>
      </tr>
      <tr>
        <td id="L779" class="blob-num js-line-number" data-line-number="779"></td>
        <td id="LC779" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L780" class="blob-num js-line-number" data-line-number="780"></td>
        <td id="LC780" class="blob-code blob-code-inner js-file-line">        NumStandardMips = numStandardMips;</td>
      </tr>
      <tr>
        <td id="L781" class="blob-num js-line-number" data-line-number="781"></td>
        <td id="LC781" class="blob-code blob-code-inner js-file-line">        NumPackedMips = numPackedMips;</td>
      </tr>
      <tr>
        <td id="L782" class="blob-num js-line-number" data-line-number="782"></td>
        <td id="LC782" class="blob-code blob-code-inner js-file-line">        NumTilesForPackedMips = numTilesForPackedMips;</td>
      </tr>
      <tr>
        <td id="L783" class="blob-num js-line-number" data-line-number="783"></td>
        <td id="LC783" class="blob-code blob-code-inner js-file-line">        StartTileIndexInOverallResource = startTileIndexInOverallResource;</td>
      </tr>
      <tr>
        <td id="L784" class="blob-num js-line-number" data-line-number="784"></td>
        <td id="LC784" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L785" class="blob-num js-line-number" data-line-number="785"></td>
        <td id="LC785" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L786" class="blob-num js-line-number" data-line-number="786"></td>
        <td id="LC786" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L787" class="blob-num js-line-number" data-line-number="787"></td>
        <td id="LC787" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L788" class="blob-num js-line-number" data-line-number="788"></td>
        <td id="LC788" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_SUBRESOURCE_FOOTPRINT : public D3D12_SUBRESOURCE_FOOTPRINT</td>
      </tr>
      <tr>
        <td id="L789" class="blob-num js-line-number" data-line-number="789"></td>
        <td id="LC789" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L790" class="blob-num js-line-number" data-line-number="790"></td>
        <td id="LC790" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_SUBRESOURCE_FOOTPRINT</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L791" class="blob-num js-line-number" data-line-number="791"></td>
        <td id="LC791" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_SUBRESOURCE_FOOTPRINT</span>(<span class="pl-k">const</span> D3D12_SUBRESOURCE_FOOTPRINT &amp;o) :</td>
      </tr>
      <tr>
        <td id="L792" class="blob-num js-line-number" data-line-number="792"></td>
        <td id="LC792" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_SUBRESOURCE_FOOTPRINT</span>(o)</td>
      </tr>
      <tr>
        <td id="L793" class="blob-num js-line-number" data-line-number="793"></td>
        <td id="LC793" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L794" class="blob-num js-line-number" data-line-number="794"></td>
        <td id="LC794" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_SUBRESOURCE_FOOTPRINT</span>( </td>
      </tr>
      <tr>
        <td id="L795" class="blob-num js-line-number" data-line-number="795"></td>
        <td id="LC795" class="blob-code blob-code-inner js-file-line">        DXGI_FORMAT format, </td>
      </tr>
      <tr>
        <td id="L796" class="blob-num js-line-number" data-line-number="796"></td>
        <td id="LC796" class="blob-code blob-code-inner js-file-line">        UINT width, </td>
      </tr>
      <tr>
        <td id="L797" class="blob-num js-line-number" data-line-number="797"></td>
        <td id="LC797" class="blob-code blob-code-inner js-file-line">        UINT height, </td>
      </tr>
      <tr>
        <td id="L798" class="blob-num js-line-number" data-line-number="798"></td>
        <td id="LC798" class="blob-code blob-code-inner js-file-line">        UINT depth, </td>
      </tr>
      <tr>
        <td id="L799" class="blob-num js-line-number" data-line-number="799"></td>
        <td id="LC799" class="blob-code blob-code-inner js-file-line">        UINT rowPitch ) </td>
      </tr>
      <tr>
        <td id="L800" class="blob-num js-line-number" data-line-number="800"></td>
        <td id="LC800" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L801" class="blob-num js-line-number" data-line-number="801"></td>
        <td id="LC801" class="blob-code blob-code-inner js-file-line">        Format = format;</td>
      </tr>
      <tr>
        <td id="L802" class="blob-num js-line-number" data-line-number="802"></td>
        <td id="LC802" class="blob-code blob-code-inner js-file-line">        Width = width;</td>
      </tr>
      <tr>
        <td id="L803" class="blob-num js-line-number" data-line-number="803"></td>
        <td id="LC803" class="blob-code blob-code-inner js-file-line">        Height = height;</td>
      </tr>
      <tr>
        <td id="L804" class="blob-num js-line-number" data-line-number="804"></td>
        <td id="LC804" class="blob-code blob-code-inner js-file-line">        Depth = depth;</td>
      </tr>
      <tr>
        <td id="L805" class="blob-num js-line-number" data-line-number="805"></td>
        <td id="LC805" class="blob-code blob-code-inner js-file-line">        RowPitch = rowPitch;</td>
      </tr>
      <tr>
        <td id="L806" class="blob-num js-line-number" data-line-number="806"></td>
        <td id="LC806" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L807" class="blob-num js-line-number" data-line-number="807"></td>
        <td id="LC807" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_SUBRESOURCE_FOOTPRINT</span>( </td>
      </tr>
      <tr>
        <td id="L808" class="blob-num js-line-number" data-line-number="808"></td>
        <td id="LC808" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">const</span> D3D12_RESOURCE_DESC&amp; resDesc, </td>
      </tr>
      <tr>
        <td id="L809" class="blob-num js-line-number" data-line-number="809"></td>
        <td id="LC809" class="blob-code blob-code-inner js-file-line">        UINT rowPitch ) </td>
      </tr>
      <tr>
        <td id="L810" class="blob-num js-line-number" data-line-number="810"></td>
        <td id="LC810" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L811" class="blob-num js-line-number" data-line-number="811"></td>
        <td id="LC811" class="blob-code blob-code-inner js-file-line">        Format = resDesc.<span class="pl-smi">Format</span>;</td>
      </tr>
      <tr>
        <td id="L812" class="blob-num js-line-number" data-line-number="812"></td>
        <td id="LC812" class="blob-code blob-code-inner js-file-line">        Width = <span class="pl-c1">UINT</span>( resDesc.<span class="pl-smi">Width</span> );</td>
      </tr>
      <tr>
        <td id="L813" class="blob-num js-line-number" data-line-number="813"></td>
        <td id="LC813" class="blob-code blob-code-inner js-file-line">        Height = resDesc.<span class="pl-smi">Height</span>;</td>
      </tr>
      <tr>
        <td id="L814" class="blob-num js-line-number" data-line-number="814"></td>
        <td id="LC814" class="blob-code blob-code-inner js-file-line">        Depth = (resDesc.<span class="pl-smi">Dimension</span> == D3D12_RESOURCE_DIMENSION_TEXTURE3D ? resDesc.<span class="pl-smi">DepthOrArraySize</span> : <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L815" class="blob-num js-line-number" data-line-number="815"></td>
        <td id="LC815" class="blob-code blob-code-inner js-file-line">        RowPitch = rowPitch;</td>
      </tr>
      <tr>
        <td id="L816" class="blob-num js-line-number" data-line-number="816"></td>
        <td id="LC816" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L817" class="blob-num js-line-number" data-line-number="817"></td>
        <td id="LC817" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L818" class="blob-num js-line-number" data-line-number="818"></td>
        <td id="LC818" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L819" class="blob-num js-line-number" data-line-number="819"></td>
        <td id="LC819" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L820" class="blob-num js-line-number" data-line-number="820"></td>
        <td id="LC820" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_TEXTURE_COPY_LOCATION : public D3D12_TEXTURE_COPY_LOCATION</td>
      </tr>
      <tr>
        <td id="L821" class="blob-num js-line-number" data-line-number="821"></td>
        <td id="LC821" class="blob-code blob-code-inner js-file-line">{ </td>
      </tr>
      <tr>
        <td id="L822" class="blob-num js-line-number" data-line-number="822"></td>
        <td id="LC822" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_TEXTURE_COPY_LOCATION</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L823" class="blob-num js-line-number" data-line-number="823"></td>
        <td id="LC823" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_TEXTURE_COPY_LOCATION</span>(<span class="pl-k">const</span> D3D12_TEXTURE_COPY_LOCATION &amp;o) :</td>
      </tr>
      <tr>
        <td id="L824" class="blob-num js-line-number" data-line-number="824"></td>
        <td id="LC824" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_TEXTURE_COPY_LOCATION</span>(o)</td>
      </tr>
      <tr>
        <td id="L825" class="blob-num js-line-number" data-line-number="825"></td>
        <td id="LC825" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L826" class="blob-num js-line-number" data-line-number="826"></td>
        <td id="LC826" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_TEXTURE_COPY_LOCATION</span>(_In_ ID3D12Resource* pRes)</td>
      </tr>
      <tr>
        <td id="L827" class="blob-num js-line-number" data-line-number="827"></td>
        <td id="LC827" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L828" class="blob-num js-line-number" data-line-number="828"></td>
        <td id="LC828" class="blob-code blob-code-inner js-file-line">        pResource = pRes;</td>
      </tr>
      <tr>
        <td id="L829" class="blob-num js-line-number" data-line-number="829"></td>
        <td id="LC829" class="blob-code blob-code-inner js-file-line">        Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;</td>
      </tr>
      <tr>
        <td id="L830" class="blob-num js-line-number" data-line-number="830"></td>
        <td id="LC830" class="blob-code blob-code-inner js-file-line">        PlacedFootprint = {};</td>
      </tr>
      <tr>
        <td id="L831" class="blob-num js-line-number" data-line-number="831"></td>
        <td id="LC831" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L832" class="blob-num js-line-number" data-line-number="832"></td>
        <td id="LC832" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_TEXTURE_COPY_LOCATION</span>(_In_ ID3D12Resource* pRes, D3D12_PLACED_SUBRESOURCE_FOOTPRINT <span class="pl-k">const</span>&amp; Footprint)</td>
      </tr>
      <tr>
        <td id="L833" class="blob-num js-line-number" data-line-number="833"></td>
        <td id="LC833" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L834" class="blob-num js-line-number" data-line-number="834"></td>
        <td id="LC834" class="blob-code blob-code-inner js-file-line">        pResource = pRes;</td>
      </tr>
      <tr>
        <td id="L835" class="blob-num js-line-number" data-line-number="835"></td>
        <td id="LC835" class="blob-code blob-code-inner js-file-line">        Type = D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT;</td>
      </tr>
      <tr>
        <td id="L836" class="blob-num js-line-number" data-line-number="836"></td>
        <td id="LC836" class="blob-code blob-code-inner js-file-line">        PlacedFootprint = Footprint;</td>
      </tr>
      <tr>
        <td id="L837" class="blob-num js-line-number" data-line-number="837"></td>
        <td id="LC837" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L838" class="blob-num js-line-number" data-line-number="838"></td>
        <td id="LC838" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_TEXTURE_COPY_LOCATION</span>(_In_ ID3D12Resource* pRes, UINT Sub)</td>
      </tr>
      <tr>
        <td id="L839" class="blob-num js-line-number" data-line-number="839"></td>
        <td id="LC839" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L840" class="blob-num js-line-number" data-line-number="840"></td>
        <td id="LC840" class="blob-code blob-code-inner js-file-line">        pResource = pRes;</td>
      </tr>
      <tr>
        <td id="L841" class="blob-num js-line-number" data-line-number="841"></td>
        <td id="LC841" class="blob-code blob-code-inner js-file-line">        Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;</td>
      </tr>
      <tr>
        <td id="L842" class="blob-num js-line-number" data-line-number="842"></td>
        <td id="LC842" class="blob-code blob-code-inner js-file-line">        PlacedFootprint = {};</td>
      </tr>
      <tr>
        <td id="L843" class="blob-num js-line-number" data-line-number="843"></td>
        <td id="LC843" class="blob-code blob-code-inner js-file-line">        SubresourceIndex = Sub;</td>
      </tr>
      <tr>
        <td id="L844" class="blob-num js-line-number" data-line-number="844"></td>
        <td id="LC844" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L845" class="blob-num js-line-number" data-line-number="845"></td>
        <td id="LC845" class="blob-code blob-code-inner js-file-line">}; </td>
      </tr>
      <tr>
        <td id="L846" class="blob-num js-line-number" data-line-number="846"></td>
        <td id="LC846" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L847" class="blob-num js-line-number" data-line-number="847"></td>
        <td id="LC847" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L848" class="blob-num js-line-number" data-line-number="848"></td>
        <td id="LC848" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_DESCRIPTOR_RANGE : public D3D12_DESCRIPTOR_RANGE</td>
      </tr>
      <tr>
        <td id="L849" class="blob-num js-line-number" data-line-number="849"></td>
        <td id="LC849" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L850" class="blob-num js-line-number" data-line-number="850"></td>
        <td id="LC850" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_DESCRIPTOR_RANGE</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L851" class="blob-num js-line-number" data-line-number="851"></td>
        <td id="LC851" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_DESCRIPTOR_RANGE</span>(<span class="pl-k">const</span> D3D12_DESCRIPTOR_RANGE &amp;o) :</td>
      </tr>
      <tr>
        <td id="L852" class="blob-num js-line-number" data-line-number="852"></td>
        <td id="LC852" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_DESCRIPTOR_RANGE</span>(o)</td>
      </tr>
      <tr>
        <td id="L853" class="blob-num js-line-number" data-line-number="853"></td>
        <td id="LC853" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L854" class="blob-num js-line-number" data-line-number="854"></td>
        <td id="LC854" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_DESCRIPTOR_RANGE</span>(</td>
      </tr>
      <tr>
        <td id="L855" class="blob-num js-line-number" data-line-number="855"></td>
        <td id="LC855" class="blob-code blob-code-inner js-file-line">        D3D12_DESCRIPTOR_RANGE_TYPE rangeType,</td>
      </tr>
      <tr>
        <td id="L856" class="blob-num js-line-number" data-line-number="856"></td>
        <td id="LC856" class="blob-code blob-code-inner js-file-line">        UINT numDescriptors,</td>
      </tr>
      <tr>
        <td id="L857" class="blob-num js-line-number" data-line-number="857"></td>
        <td id="LC857" class="blob-code blob-code-inner js-file-line">        UINT baseShaderRegister,</td>
      </tr>
      <tr>
        <td id="L858" class="blob-num js-line-number" data-line-number="858"></td>
        <td id="LC858" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L859" class="blob-num js-line-number" data-line-number="859"></td>
        <td id="LC859" class="blob-code blob-code-inner js-file-line">        UINT offsetInDescriptorsFromTableStart =</td>
      </tr>
      <tr>
        <td id="L860" class="blob-num js-line-number" data-line-number="860"></td>
        <td id="LC860" class="blob-code blob-code-inner js-file-line">        D3D12_DESCRIPTOR_RANGE_OFFSET_APPEND)</td>
      </tr>
      <tr>
        <td id="L861" class="blob-num js-line-number" data-line-number="861"></td>
        <td id="LC861" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L862" class="blob-num js-line-number" data-line-number="862"></td>
        <td id="LC862" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>(rangeType, numDescriptors, baseShaderRegister, registerSpace, offsetInDescriptorsFromTableStart);</td>
      </tr>
      <tr>
        <td id="L863" class="blob-num js-line-number" data-line-number="863"></td>
        <td id="LC863" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L864" class="blob-num js-line-number" data-line-number="864"></td>
        <td id="LC864" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L865" class="blob-num js-line-number" data-line-number="865"></td>
        <td id="LC865" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">Init</span>(</td>
      </tr>
      <tr>
        <td id="L866" class="blob-num js-line-number" data-line-number="866"></td>
        <td id="LC866" class="blob-code blob-code-inner js-file-line">        D3D12_DESCRIPTOR_RANGE_TYPE rangeType,</td>
      </tr>
      <tr>
        <td id="L867" class="blob-num js-line-number" data-line-number="867"></td>
        <td id="LC867" class="blob-code blob-code-inner js-file-line">        UINT numDescriptors,</td>
      </tr>
      <tr>
        <td id="L868" class="blob-num js-line-number" data-line-number="868"></td>
        <td id="LC868" class="blob-code blob-code-inner js-file-line">        UINT baseShaderRegister,</td>
      </tr>
      <tr>
        <td id="L869" class="blob-num js-line-number" data-line-number="869"></td>
        <td id="LC869" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L870" class="blob-num js-line-number" data-line-number="870"></td>
        <td id="LC870" class="blob-code blob-code-inner js-file-line">        UINT offsetInDescriptorsFromTableStart =</td>
      </tr>
      <tr>
        <td id="L871" class="blob-num js-line-number" data-line-number="871"></td>
        <td id="LC871" class="blob-code blob-code-inner js-file-line">        D3D12_DESCRIPTOR_RANGE_OFFSET_APPEND)</td>
      </tr>
      <tr>
        <td id="L872" class="blob-num js-line-number" data-line-number="872"></td>
        <td id="LC872" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L873" class="blob-num js-line-number" data-line-number="873"></td>
        <td id="LC873" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>(*this, rangeType, numDescriptors, baseShaderRegister, registerSpace, offsetInDescriptorsFromTableStart);</td>
      </tr>
      <tr>
        <td id="L874" class="blob-num js-line-number" data-line-number="874"></td>
        <td id="LC874" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L875" class="blob-num js-line-number" data-line-number="875"></td>
        <td id="LC875" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L876" class="blob-num js-line-number" data-line-number="876"></td>
        <td id="LC876" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">Init</span>(</td>
      </tr>
      <tr>
        <td id="L877" class="blob-num js-line-number" data-line-number="877"></td>
        <td id="LC877" class="blob-code blob-code-inner js-file-line">        _Out_ D3D12_DESCRIPTOR_RANGE &amp;range,</td>
      </tr>
      <tr>
        <td id="L878" class="blob-num js-line-number" data-line-number="878"></td>
        <td id="LC878" class="blob-code blob-code-inner js-file-line">        D3D12_DESCRIPTOR_RANGE_TYPE rangeType,</td>
      </tr>
      <tr>
        <td id="L879" class="blob-num js-line-number" data-line-number="879"></td>
        <td id="LC879" class="blob-code blob-code-inner js-file-line">        UINT numDescriptors,</td>
      </tr>
      <tr>
        <td id="L880" class="blob-num js-line-number" data-line-number="880"></td>
        <td id="LC880" class="blob-code blob-code-inner js-file-line">        UINT baseShaderRegister,</td>
      </tr>
      <tr>
        <td id="L881" class="blob-num js-line-number" data-line-number="881"></td>
        <td id="LC881" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L882" class="blob-num js-line-number" data-line-number="882"></td>
        <td id="LC882" class="blob-code blob-code-inner js-file-line">        UINT offsetInDescriptorsFromTableStart =</td>
      </tr>
      <tr>
        <td id="L883" class="blob-num js-line-number" data-line-number="883"></td>
        <td id="LC883" class="blob-code blob-code-inner js-file-line">        D3D12_DESCRIPTOR_RANGE_OFFSET_APPEND)</td>
      </tr>
      <tr>
        <td id="L884" class="blob-num js-line-number" data-line-number="884"></td>
        <td id="LC884" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L885" class="blob-num js-line-number" data-line-number="885"></td>
        <td id="LC885" class="blob-code blob-code-inner js-file-line">        range.<span class="pl-smi">RangeType</span> = rangeType;</td>
      </tr>
      <tr>
        <td id="L886" class="blob-num js-line-number" data-line-number="886"></td>
        <td id="LC886" class="blob-code blob-code-inner js-file-line">        range.<span class="pl-smi">NumDescriptors</span> = numDescriptors;</td>
      </tr>
      <tr>
        <td id="L887" class="blob-num js-line-number" data-line-number="887"></td>
        <td id="LC887" class="blob-code blob-code-inner js-file-line">        range.<span class="pl-smi">BaseShaderRegister</span> = baseShaderRegister;</td>
      </tr>
      <tr>
        <td id="L888" class="blob-num js-line-number" data-line-number="888"></td>
        <td id="LC888" class="blob-code blob-code-inner js-file-line">        range.<span class="pl-smi">RegisterSpace</span> = registerSpace;</td>
      </tr>
      <tr>
        <td id="L889" class="blob-num js-line-number" data-line-number="889"></td>
        <td id="LC889" class="blob-code blob-code-inner js-file-line">        range.<span class="pl-smi">OffsetInDescriptorsFromTableStart</span> = offsetInDescriptorsFromTableStart;</td>
      </tr>
      <tr>
        <td id="L890" class="blob-num js-line-number" data-line-number="890"></td>
        <td id="LC890" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L891" class="blob-num js-line-number" data-line-number="891"></td>
        <td id="LC891" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L892" class="blob-num js-line-number" data-line-number="892"></td>
        <td id="LC892" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L893" class="blob-num js-line-number" data-line-number="893"></td>
        <td id="LC893" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L894" class="blob-num js-line-number" data-line-number="894"></td>
        <td id="LC894" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_ROOT_DESCRIPTOR_TABLE : public D3D12_ROOT_DESCRIPTOR_TABLE</td>
      </tr>
      <tr>
        <td id="L895" class="blob-num js-line-number" data-line-number="895"></td>
        <td id="LC895" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L896" class="blob-num js-line-number" data-line-number="896"></td>
        <td id="LC896" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_ROOT_DESCRIPTOR_TABLE</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L897" class="blob-num js-line-number" data-line-number="897"></td>
        <td id="LC897" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_ROOT_DESCRIPTOR_TABLE</span>(<span class="pl-k">const</span> D3D12_ROOT_DESCRIPTOR_TABLE &amp;o) :</td>
      </tr>
      <tr>
        <td id="L898" class="blob-num js-line-number" data-line-number="898"></td>
        <td id="LC898" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_ROOT_DESCRIPTOR_TABLE</span>(o)</td>
      </tr>
      <tr>
        <td id="L899" class="blob-num js-line-number" data-line-number="899"></td>
        <td id="LC899" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L900" class="blob-num js-line-number" data-line-number="900"></td>
        <td id="LC900" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_ROOT_DESCRIPTOR_TABLE</span>(</td>
      </tr>
      <tr>
        <td id="L901" class="blob-num js-line-number" data-line-number="901"></td>
        <td id="LC901" class="blob-code blob-code-inner js-file-line">        UINT numDescriptorRanges,</td>
      </tr>
      <tr>
        <td id="L902" class="blob-num js-line-number" data-line-number="902"></td>
        <td id="LC902" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numDescriptorRanges) <span class="pl-k">const</span> D3D12_DESCRIPTOR_RANGE* _pDescriptorRanges)</td>
      </tr>
      <tr>
        <td id="L903" class="blob-num js-line-number" data-line-number="903"></td>
        <td id="LC903" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L904" class="blob-num js-line-number" data-line-number="904"></td>
        <td id="LC904" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>(numDescriptorRanges, _pDescriptorRanges);</td>
      </tr>
      <tr>
        <td id="L905" class="blob-num js-line-number" data-line-number="905"></td>
        <td id="LC905" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L906" class="blob-num js-line-number" data-line-number="906"></td>
        <td id="LC906" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L907" class="blob-num js-line-number" data-line-number="907"></td>
        <td id="LC907" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">Init</span>(</td>
      </tr>
      <tr>
        <td id="L908" class="blob-num js-line-number" data-line-number="908"></td>
        <td id="LC908" class="blob-code blob-code-inner js-file-line">        UINT numDescriptorRanges,</td>
      </tr>
      <tr>
        <td id="L909" class="blob-num js-line-number" data-line-number="909"></td>
        <td id="LC909" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numDescriptorRanges) <span class="pl-k">const</span> D3D12_DESCRIPTOR_RANGE* _pDescriptorRanges)</td>
      </tr>
      <tr>
        <td id="L910" class="blob-num js-line-number" data-line-number="910"></td>
        <td id="LC910" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L911" class="blob-num js-line-number" data-line-number="911"></td>
        <td id="LC911" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>(*this, numDescriptorRanges, _pDescriptorRanges);</td>
      </tr>
      <tr>
        <td id="L912" class="blob-num js-line-number" data-line-number="912"></td>
        <td id="LC912" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L913" class="blob-num js-line-number" data-line-number="913"></td>
        <td id="LC913" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L914" class="blob-num js-line-number" data-line-number="914"></td>
        <td id="LC914" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">Init</span>(</td>
      </tr>
      <tr>
        <td id="L915" class="blob-num js-line-number" data-line-number="915"></td>
        <td id="LC915" class="blob-code blob-code-inner js-file-line">        _Out_ D3D12_ROOT_DESCRIPTOR_TABLE &amp;rootDescriptorTable,</td>
      </tr>
      <tr>
        <td id="L916" class="blob-num js-line-number" data-line-number="916"></td>
        <td id="LC916" class="blob-code blob-code-inner js-file-line">        UINT numDescriptorRanges,</td>
      </tr>
      <tr>
        <td id="L917" class="blob-num js-line-number" data-line-number="917"></td>
        <td id="LC917" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numDescriptorRanges) <span class="pl-k">const</span> D3D12_DESCRIPTOR_RANGE* _pDescriptorRanges)</td>
      </tr>
      <tr>
        <td id="L918" class="blob-num js-line-number" data-line-number="918"></td>
        <td id="LC918" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L919" class="blob-num js-line-number" data-line-number="919"></td>
        <td id="LC919" class="blob-code blob-code-inner js-file-line">        rootDescriptorTable.<span class="pl-smi">NumDescriptorRanges</span> = numDescriptorRanges;</td>
      </tr>
      <tr>
        <td id="L920" class="blob-num js-line-number" data-line-number="920"></td>
        <td id="LC920" class="blob-code blob-code-inner js-file-line">        rootDescriptorTable.<span class="pl-smi">pDescriptorRanges</span> = _pDescriptorRanges;</td>
      </tr>
      <tr>
        <td id="L921" class="blob-num js-line-number" data-line-number="921"></td>
        <td id="LC921" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L922" class="blob-num js-line-number" data-line-number="922"></td>
        <td id="LC922" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L923" class="blob-num js-line-number" data-line-number="923"></td>
        <td id="LC923" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L924" class="blob-num js-line-number" data-line-number="924"></td>
        <td id="LC924" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L925" class="blob-num js-line-number" data-line-number="925"></td>
        <td id="LC925" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_ROOT_CONSTANTS : public D3D12_ROOT_CONSTANTS</td>
      </tr>
      <tr>
        <td id="L926" class="blob-num js-line-number" data-line-number="926"></td>
        <td id="LC926" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L927" class="blob-num js-line-number" data-line-number="927"></td>
        <td id="LC927" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_ROOT_CONSTANTS</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L928" class="blob-num js-line-number" data-line-number="928"></td>
        <td id="LC928" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_ROOT_CONSTANTS</span>(<span class="pl-k">const</span> D3D12_ROOT_CONSTANTS &amp;o) :</td>
      </tr>
      <tr>
        <td id="L929" class="blob-num js-line-number" data-line-number="929"></td>
        <td id="LC929" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_ROOT_CONSTANTS</span>(o)</td>
      </tr>
      <tr>
        <td id="L930" class="blob-num js-line-number" data-line-number="930"></td>
        <td id="LC930" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L931" class="blob-num js-line-number" data-line-number="931"></td>
        <td id="LC931" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_ROOT_CONSTANTS</span>(</td>
      </tr>
      <tr>
        <td id="L932" class="blob-num js-line-number" data-line-number="932"></td>
        <td id="LC932" class="blob-code blob-code-inner js-file-line">        UINT num32BitValues,</td>
      </tr>
      <tr>
        <td id="L933" class="blob-num js-line-number" data-line-number="933"></td>
        <td id="LC933" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L934" class="blob-num js-line-number" data-line-number="934"></td>
        <td id="LC934" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L935" class="blob-num js-line-number" data-line-number="935"></td>
        <td id="LC935" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L936" class="blob-num js-line-number" data-line-number="936"></td>
        <td id="LC936" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>(num32BitValues, shaderRegister, registerSpace);</td>
      </tr>
      <tr>
        <td id="L937" class="blob-num js-line-number" data-line-number="937"></td>
        <td id="LC937" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L938" class="blob-num js-line-number" data-line-number="938"></td>
        <td id="LC938" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L939" class="blob-num js-line-number" data-line-number="939"></td>
        <td id="LC939" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">Init</span>(</td>
      </tr>
      <tr>
        <td id="L940" class="blob-num js-line-number" data-line-number="940"></td>
        <td id="LC940" class="blob-code blob-code-inner js-file-line">        UINT num32BitValues,</td>
      </tr>
      <tr>
        <td id="L941" class="blob-num js-line-number" data-line-number="941"></td>
        <td id="LC941" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L942" class="blob-num js-line-number" data-line-number="942"></td>
        <td id="LC942" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L943" class="blob-num js-line-number" data-line-number="943"></td>
        <td id="LC943" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L944" class="blob-num js-line-number" data-line-number="944"></td>
        <td id="LC944" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>(*this, num32BitValues, shaderRegister, registerSpace);</td>
      </tr>
      <tr>
        <td id="L945" class="blob-num js-line-number" data-line-number="945"></td>
        <td id="LC945" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L946" class="blob-num js-line-number" data-line-number="946"></td>
        <td id="LC946" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L947" class="blob-num js-line-number" data-line-number="947"></td>
        <td id="LC947" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">Init</span>(</td>
      </tr>
      <tr>
        <td id="L948" class="blob-num js-line-number" data-line-number="948"></td>
        <td id="LC948" class="blob-code blob-code-inner js-file-line">        _Out_ D3D12_ROOT_CONSTANTS &amp;rootConstants,</td>
      </tr>
      <tr>
        <td id="L949" class="blob-num js-line-number" data-line-number="949"></td>
        <td id="LC949" class="blob-code blob-code-inner js-file-line">        UINT num32BitValues,</td>
      </tr>
      <tr>
        <td id="L950" class="blob-num js-line-number" data-line-number="950"></td>
        <td id="LC950" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L951" class="blob-num js-line-number" data-line-number="951"></td>
        <td id="LC951" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L952" class="blob-num js-line-number" data-line-number="952"></td>
        <td id="LC952" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L953" class="blob-num js-line-number" data-line-number="953"></td>
        <td id="LC953" class="blob-code blob-code-inner js-file-line">        rootConstants.<span class="pl-smi">Num32BitValues</span> = num32BitValues;</td>
      </tr>
      <tr>
        <td id="L954" class="blob-num js-line-number" data-line-number="954"></td>
        <td id="LC954" class="blob-code blob-code-inner js-file-line">        rootConstants.<span class="pl-smi">ShaderRegister</span> = shaderRegister;</td>
      </tr>
      <tr>
        <td id="L955" class="blob-num js-line-number" data-line-number="955"></td>
        <td id="LC955" class="blob-code blob-code-inner js-file-line">        rootConstants.<span class="pl-smi">RegisterSpace</span> = registerSpace;</td>
      </tr>
      <tr>
        <td id="L956" class="blob-num js-line-number" data-line-number="956"></td>
        <td id="LC956" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L957" class="blob-num js-line-number" data-line-number="957"></td>
        <td id="LC957" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L958" class="blob-num js-line-number" data-line-number="958"></td>
        <td id="LC958" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L959" class="blob-num js-line-number" data-line-number="959"></td>
        <td id="LC959" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L960" class="blob-num js-line-number" data-line-number="960"></td>
        <td id="LC960" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_ROOT_DESCRIPTOR : public D3D12_ROOT_DESCRIPTOR</td>
      </tr>
      <tr>
        <td id="L961" class="blob-num js-line-number" data-line-number="961"></td>
        <td id="LC961" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L962" class="blob-num js-line-number" data-line-number="962"></td>
        <td id="LC962" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_ROOT_DESCRIPTOR</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L963" class="blob-num js-line-number" data-line-number="963"></td>
        <td id="LC963" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_ROOT_DESCRIPTOR</span>(<span class="pl-k">const</span> D3D12_ROOT_DESCRIPTOR &amp;o) :</td>
      </tr>
      <tr>
        <td id="L964" class="blob-num js-line-number" data-line-number="964"></td>
        <td id="LC964" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_ROOT_DESCRIPTOR</span>(o)</td>
      </tr>
      <tr>
        <td id="L965" class="blob-num js-line-number" data-line-number="965"></td>
        <td id="LC965" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L966" class="blob-num js-line-number" data-line-number="966"></td>
        <td id="LC966" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_ROOT_DESCRIPTOR</span>(</td>
      </tr>
      <tr>
        <td id="L967" class="blob-num js-line-number" data-line-number="967"></td>
        <td id="LC967" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L968" class="blob-num js-line-number" data-line-number="968"></td>
        <td id="LC968" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L969" class="blob-num js-line-number" data-line-number="969"></td>
        <td id="LC969" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L970" class="blob-num js-line-number" data-line-number="970"></td>
        <td id="LC970" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>(shaderRegister, registerSpace);</td>
      </tr>
      <tr>
        <td id="L971" class="blob-num js-line-number" data-line-number="971"></td>
        <td id="LC971" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L972" class="blob-num js-line-number" data-line-number="972"></td>
        <td id="LC972" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L973" class="blob-num js-line-number" data-line-number="973"></td>
        <td id="LC973" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">Init</span>(</td>
      </tr>
      <tr>
        <td id="L974" class="blob-num js-line-number" data-line-number="974"></td>
        <td id="LC974" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L975" class="blob-num js-line-number" data-line-number="975"></td>
        <td id="LC975" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L976" class="blob-num js-line-number" data-line-number="976"></td>
        <td id="LC976" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L977" class="blob-num js-line-number" data-line-number="977"></td>
        <td id="LC977" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>(*this, shaderRegister, registerSpace);</td>
      </tr>
      <tr>
        <td id="L978" class="blob-num js-line-number" data-line-number="978"></td>
        <td id="LC978" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L979" class="blob-num js-line-number" data-line-number="979"></td>
        <td id="LC979" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L980" class="blob-num js-line-number" data-line-number="980"></td>
        <td id="LC980" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">Init</span>(_Out_ D3D12_ROOT_DESCRIPTOR &amp;table, UINT shaderRegister, UINT registerSpace = <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L981" class="blob-num js-line-number" data-line-number="981"></td>
        <td id="LC981" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L982" class="blob-num js-line-number" data-line-number="982"></td>
        <td id="LC982" class="blob-code blob-code-inner js-file-line">        table.<span class="pl-smi">ShaderRegister</span> = shaderRegister;</td>
      </tr>
      <tr>
        <td id="L983" class="blob-num js-line-number" data-line-number="983"></td>
        <td id="LC983" class="blob-code blob-code-inner js-file-line">        table.<span class="pl-smi">RegisterSpace</span> = registerSpace;</td>
      </tr>
      <tr>
        <td id="L984" class="blob-num js-line-number" data-line-number="984"></td>
        <td id="LC984" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L985" class="blob-num js-line-number" data-line-number="985"></td>
        <td id="LC985" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L986" class="blob-num js-line-number" data-line-number="986"></td>
        <td id="LC986" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L987" class="blob-num js-line-number" data-line-number="987"></td>
        <td id="LC987" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L988" class="blob-num js-line-number" data-line-number="988"></td>
        <td id="LC988" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_ROOT_PARAMETER : public D3D12_ROOT_PARAMETER</td>
      </tr>
      <tr>
        <td id="L989" class="blob-num js-line-number" data-line-number="989"></td>
        <td id="LC989" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L990" class="blob-num js-line-number" data-line-number="990"></td>
        <td id="LC990" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_ROOT_PARAMETER</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L991" class="blob-num js-line-number" data-line-number="991"></td>
        <td id="LC991" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_ROOT_PARAMETER</span>(<span class="pl-k">const</span> D3D12_ROOT_PARAMETER &amp;o) :</td>
      </tr>
      <tr>
        <td id="L992" class="blob-num js-line-number" data-line-number="992"></td>
        <td id="LC992" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_ROOT_PARAMETER</span>(o)</td>
      </tr>
      <tr>
        <td id="L993" class="blob-num js-line-number" data-line-number="993"></td>
        <td id="LC993" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L994" class="blob-num js-line-number" data-line-number="994"></td>
        <td id="LC994" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L995" class="blob-num js-line-number" data-line-number="995"></td>
        <td id="LC995" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitAsDescriptorTable</span>(</td>
      </tr>
      <tr>
        <td id="L996" class="blob-num js-line-number" data-line-number="996"></td>
        <td id="LC996" class="blob-code blob-code-inner js-file-line">        _Out_ D3D12_ROOT_PARAMETER &amp;rootParam,</td>
      </tr>
      <tr>
        <td id="L997" class="blob-num js-line-number" data-line-number="997"></td>
        <td id="LC997" class="blob-code blob-code-inner js-file-line">        UINT numDescriptorRanges,</td>
      </tr>
      <tr>
        <td id="L998" class="blob-num js-line-number" data-line-number="998"></td>
        <td id="LC998" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_</span>(numDescriptorRanges) <span class="pl-k">const</span> D3D12_DESCRIPTOR_RANGE* pDescriptorRanges,</td>
      </tr>
      <tr>
        <td id="L999" class="blob-num js-line-number" data-line-number="999"></td>
        <td id="LC999" class="blob-code blob-code-inner js-file-line">        D3D12_SHADER_VISIBILITY visibility = D3D12_SHADER_VISIBILITY_ALL)</td>
      </tr>
      <tr>
        <td id="L1000" class="blob-num js-line-number" data-line-number="1000"></td>
        <td id="LC1000" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1001" class="blob-num js-line-number" data-line-number="1001"></td>
        <td id="LC1001" class="blob-code blob-code-inner js-file-line">        rootParam.<span class="pl-smi">ParameterType</span> = D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE;</td>
      </tr>
      <tr>
        <td id="L1002" class="blob-num js-line-number" data-line-number="1002"></td>
        <td id="LC1002" class="blob-code blob-code-inner js-file-line">        rootParam.<span class="pl-smi">ShaderVisibility</span> = visibility;</td>
      </tr>
      <tr>
        <td id="L1003" class="blob-num js-line-number" data-line-number="1003"></td>
        <td id="LC1003" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">CD3DX12_ROOT_DESCRIPTOR_TABLE::Init</span>(rootParam.<span class="pl-smi">DescriptorTable</span>, numDescriptorRanges, pDescriptorRanges);</td>
      </tr>
      <tr>
        <td id="L1004" class="blob-num js-line-number" data-line-number="1004"></td>
        <td id="LC1004" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1005" class="blob-num js-line-number" data-line-number="1005"></td>
        <td id="LC1005" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1006" class="blob-num js-line-number" data-line-number="1006"></td>
        <td id="LC1006" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitAsConstants</span>(</td>
      </tr>
      <tr>
        <td id="L1007" class="blob-num js-line-number" data-line-number="1007"></td>
        <td id="LC1007" class="blob-code blob-code-inner js-file-line">        _Out_ D3D12_ROOT_PARAMETER &amp;rootParam,</td>
      </tr>
      <tr>
        <td id="L1008" class="blob-num js-line-number" data-line-number="1008"></td>
        <td id="LC1008" class="blob-code blob-code-inner js-file-line">        UINT num32BitValues,</td>
      </tr>
      <tr>
        <td id="L1009" class="blob-num js-line-number" data-line-number="1009"></td>
        <td id="LC1009" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1010" class="blob-num js-line-number" data-line-number="1010"></td>
        <td id="LC1010" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1011" class="blob-num js-line-number" data-line-number="1011"></td>
        <td id="LC1011" class="blob-code blob-code-inner js-file-line">        D3D12_SHADER_VISIBILITY visibility = D3D12_SHADER_VISIBILITY_ALL)</td>
      </tr>
      <tr>
        <td id="L1012" class="blob-num js-line-number" data-line-number="1012"></td>
        <td id="LC1012" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1013" class="blob-num js-line-number" data-line-number="1013"></td>
        <td id="LC1013" class="blob-code blob-code-inner js-file-line">        rootParam.<span class="pl-smi">ParameterType</span> = D3D12_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS;</td>
      </tr>
      <tr>
        <td id="L1014" class="blob-num js-line-number" data-line-number="1014"></td>
        <td id="LC1014" class="blob-code blob-code-inner js-file-line">        rootParam.<span class="pl-smi">ShaderVisibility</span> = visibility;</td>
      </tr>
      <tr>
        <td id="L1015" class="blob-num js-line-number" data-line-number="1015"></td>
        <td id="LC1015" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">CD3DX12_ROOT_CONSTANTS::Init</span>(rootParam.<span class="pl-smi">Constants</span>, num32BitValues, shaderRegister, registerSpace);</td>
      </tr>
      <tr>
        <td id="L1016" class="blob-num js-line-number" data-line-number="1016"></td>
        <td id="LC1016" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1017" class="blob-num js-line-number" data-line-number="1017"></td>
        <td id="LC1017" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1018" class="blob-num js-line-number" data-line-number="1018"></td>
        <td id="LC1018" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitAsConstantBufferView</span>(</td>
      </tr>
      <tr>
        <td id="L1019" class="blob-num js-line-number" data-line-number="1019"></td>
        <td id="LC1019" class="blob-code blob-code-inner js-file-line">        _Out_ D3D12_ROOT_PARAMETER &amp;rootParam,</td>
      </tr>
      <tr>
        <td id="L1020" class="blob-num js-line-number" data-line-number="1020"></td>
        <td id="LC1020" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1021" class="blob-num js-line-number" data-line-number="1021"></td>
        <td id="LC1021" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1022" class="blob-num js-line-number" data-line-number="1022"></td>
        <td id="LC1022" class="blob-code blob-code-inner js-file-line">        D3D12_SHADER_VISIBILITY visibility = D3D12_SHADER_VISIBILITY_ALL)</td>
      </tr>
      <tr>
        <td id="L1023" class="blob-num js-line-number" data-line-number="1023"></td>
        <td id="LC1023" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1024" class="blob-num js-line-number" data-line-number="1024"></td>
        <td id="LC1024" class="blob-code blob-code-inner js-file-line">        rootParam.<span class="pl-smi">ParameterType</span> = D3D12_ROOT_PARAMETER_TYPE_CBV;</td>
      </tr>
      <tr>
        <td id="L1025" class="blob-num js-line-number" data-line-number="1025"></td>
        <td id="LC1025" class="blob-code blob-code-inner js-file-line">        rootParam.<span class="pl-smi">ShaderVisibility</span> = visibility;</td>
      </tr>
      <tr>
        <td id="L1026" class="blob-num js-line-number" data-line-number="1026"></td>
        <td id="LC1026" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">CD3DX12_ROOT_DESCRIPTOR::Init</span>(rootParam.<span class="pl-smi">Descriptor</span>, shaderRegister, registerSpace);</td>
      </tr>
      <tr>
        <td id="L1027" class="blob-num js-line-number" data-line-number="1027"></td>
        <td id="LC1027" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1028" class="blob-num js-line-number" data-line-number="1028"></td>
        <td id="LC1028" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1029" class="blob-num js-line-number" data-line-number="1029"></td>
        <td id="LC1029" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitAsShaderResourceView</span>(</td>
      </tr>
      <tr>
        <td id="L1030" class="blob-num js-line-number" data-line-number="1030"></td>
        <td id="LC1030" class="blob-code blob-code-inner js-file-line">        _Out_ D3D12_ROOT_PARAMETER &amp;rootParam,</td>
      </tr>
      <tr>
        <td id="L1031" class="blob-num js-line-number" data-line-number="1031"></td>
        <td id="LC1031" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1032" class="blob-num js-line-number" data-line-number="1032"></td>
        <td id="LC1032" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1033" class="blob-num js-line-number" data-line-number="1033"></td>
        <td id="LC1033" class="blob-code blob-code-inner js-file-line">        D3D12_SHADER_VISIBILITY visibility = D3D12_SHADER_VISIBILITY_ALL)</td>
      </tr>
      <tr>
        <td id="L1034" class="blob-num js-line-number" data-line-number="1034"></td>
        <td id="LC1034" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1035" class="blob-num js-line-number" data-line-number="1035"></td>
        <td id="LC1035" class="blob-code blob-code-inner js-file-line">        rootParam.<span class="pl-smi">ParameterType</span> = D3D12_ROOT_PARAMETER_TYPE_SRV;</td>
      </tr>
      <tr>
        <td id="L1036" class="blob-num js-line-number" data-line-number="1036"></td>
        <td id="LC1036" class="blob-code blob-code-inner js-file-line">        rootParam.<span class="pl-smi">ShaderVisibility</span> = visibility;</td>
      </tr>
      <tr>
        <td id="L1037" class="blob-num js-line-number" data-line-number="1037"></td>
        <td id="LC1037" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">CD3DX12_ROOT_DESCRIPTOR::Init</span>(rootParam.<span class="pl-smi">Descriptor</span>, shaderRegister, registerSpace);</td>
      </tr>
      <tr>
        <td id="L1038" class="blob-num js-line-number" data-line-number="1038"></td>
        <td id="LC1038" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1039" class="blob-num js-line-number" data-line-number="1039"></td>
        <td id="LC1039" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1040" class="blob-num js-line-number" data-line-number="1040"></td>
        <td id="LC1040" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitAsUnorderedAccessView</span>(</td>
      </tr>
      <tr>
        <td id="L1041" class="blob-num js-line-number" data-line-number="1041"></td>
        <td id="LC1041" class="blob-code blob-code-inner js-file-line">        _Out_ D3D12_ROOT_PARAMETER &amp;rootParam,</td>
      </tr>
      <tr>
        <td id="L1042" class="blob-num js-line-number" data-line-number="1042"></td>
        <td id="LC1042" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1043" class="blob-num js-line-number" data-line-number="1043"></td>
        <td id="LC1043" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1044" class="blob-num js-line-number" data-line-number="1044"></td>
        <td id="LC1044" class="blob-code blob-code-inner js-file-line">        D3D12_SHADER_VISIBILITY visibility = D3D12_SHADER_VISIBILITY_ALL)</td>
      </tr>
      <tr>
        <td id="L1045" class="blob-num js-line-number" data-line-number="1045"></td>
        <td id="LC1045" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1046" class="blob-num js-line-number" data-line-number="1046"></td>
        <td id="LC1046" class="blob-code blob-code-inner js-file-line">        rootParam.<span class="pl-smi">ParameterType</span> = D3D12_ROOT_PARAMETER_TYPE_UAV;</td>
      </tr>
      <tr>
        <td id="L1047" class="blob-num js-line-number" data-line-number="1047"></td>
        <td id="LC1047" class="blob-code blob-code-inner js-file-line">        rootParam.<span class="pl-smi">ShaderVisibility</span> = visibility;</td>
      </tr>
      <tr>
        <td id="L1048" class="blob-num js-line-number" data-line-number="1048"></td>
        <td id="LC1048" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">CD3DX12_ROOT_DESCRIPTOR::Init</span>(rootParam.<span class="pl-smi">Descriptor</span>, shaderRegister, registerSpace);</td>
      </tr>
      <tr>
        <td id="L1049" class="blob-num js-line-number" data-line-number="1049"></td>
        <td id="LC1049" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1050" class="blob-num js-line-number" data-line-number="1050"></td>
        <td id="LC1050" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1051" class="blob-num js-line-number" data-line-number="1051"></td>
        <td id="LC1051" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitAsDescriptorTable</span>(</td>
      </tr>
      <tr>
        <td id="L1052" class="blob-num js-line-number" data-line-number="1052"></td>
        <td id="LC1052" class="blob-code blob-code-inner js-file-line">        UINT numDescriptorRanges,</td>
      </tr>
      <tr>
        <td id="L1053" class="blob-num js-line-number" data-line-number="1053"></td>
        <td id="LC1053" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_</span>(numDescriptorRanges) <span class="pl-k">const</span> D3D12_DESCRIPTOR_RANGE* pDescriptorRanges,</td>
      </tr>
      <tr>
        <td id="L1054" class="blob-num js-line-number" data-line-number="1054"></td>
        <td id="LC1054" class="blob-code blob-code-inner js-file-line">        D3D12_SHADER_VISIBILITY visibility = D3D12_SHADER_VISIBILITY_ALL)</td>
      </tr>
      <tr>
        <td id="L1055" class="blob-num js-line-number" data-line-number="1055"></td>
        <td id="LC1055" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1056" class="blob-num js-line-number" data-line-number="1056"></td>
        <td id="LC1056" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">InitAsDescriptorTable</span>(*this, numDescriptorRanges, pDescriptorRanges, visibility);</td>
      </tr>
      <tr>
        <td id="L1057" class="blob-num js-line-number" data-line-number="1057"></td>
        <td id="LC1057" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1058" class="blob-num js-line-number" data-line-number="1058"></td>
        <td id="LC1058" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1059" class="blob-num js-line-number" data-line-number="1059"></td>
        <td id="LC1059" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitAsConstants</span>(</td>
      </tr>
      <tr>
        <td id="L1060" class="blob-num js-line-number" data-line-number="1060"></td>
        <td id="LC1060" class="blob-code blob-code-inner js-file-line">        UINT num32BitValues,</td>
      </tr>
      <tr>
        <td id="L1061" class="blob-num js-line-number" data-line-number="1061"></td>
        <td id="LC1061" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1062" class="blob-num js-line-number" data-line-number="1062"></td>
        <td id="LC1062" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1063" class="blob-num js-line-number" data-line-number="1063"></td>
        <td id="LC1063" class="blob-code blob-code-inner js-file-line">        D3D12_SHADER_VISIBILITY visibility = D3D12_SHADER_VISIBILITY_ALL)</td>
      </tr>
      <tr>
        <td id="L1064" class="blob-num js-line-number" data-line-number="1064"></td>
        <td id="LC1064" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1065" class="blob-num js-line-number" data-line-number="1065"></td>
        <td id="LC1065" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">InitAsConstants</span>(*this, num32BitValues, shaderRegister, registerSpace, visibility);</td>
      </tr>
      <tr>
        <td id="L1066" class="blob-num js-line-number" data-line-number="1066"></td>
        <td id="LC1066" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1067" class="blob-num js-line-number" data-line-number="1067"></td>
        <td id="LC1067" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1068" class="blob-num js-line-number" data-line-number="1068"></td>
        <td id="LC1068" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitAsConstantBufferView</span>(</td>
      </tr>
      <tr>
        <td id="L1069" class="blob-num js-line-number" data-line-number="1069"></td>
        <td id="LC1069" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1070" class="blob-num js-line-number" data-line-number="1070"></td>
        <td id="LC1070" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1071" class="blob-num js-line-number" data-line-number="1071"></td>
        <td id="LC1071" class="blob-code blob-code-inner js-file-line">        D3D12_SHADER_VISIBILITY visibility = D3D12_SHADER_VISIBILITY_ALL)</td>
      </tr>
      <tr>
        <td id="L1072" class="blob-num js-line-number" data-line-number="1072"></td>
        <td id="LC1072" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1073" class="blob-num js-line-number" data-line-number="1073"></td>
        <td id="LC1073" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">InitAsConstantBufferView</span>(*this, shaderRegister, registerSpace, visibility);</td>
      </tr>
      <tr>
        <td id="L1074" class="blob-num js-line-number" data-line-number="1074"></td>
        <td id="LC1074" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1075" class="blob-num js-line-number" data-line-number="1075"></td>
        <td id="LC1075" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1076" class="blob-num js-line-number" data-line-number="1076"></td>
        <td id="LC1076" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitAsShaderResourceView</span>(</td>
      </tr>
      <tr>
        <td id="L1077" class="blob-num js-line-number" data-line-number="1077"></td>
        <td id="LC1077" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1078" class="blob-num js-line-number" data-line-number="1078"></td>
        <td id="LC1078" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1079" class="blob-num js-line-number" data-line-number="1079"></td>
        <td id="LC1079" class="blob-code blob-code-inner js-file-line">        D3D12_SHADER_VISIBILITY visibility = D3D12_SHADER_VISIBILITY_ALL)</td>
      </tr>
      <tr>
        <td id="L1080" class="blob-num js-line-number" data-line-number="1080"></td>
        <td id="LC1080" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1081" class="blob-num js-line-number" data-line-number="1081"></td>
        <td id="LC1081" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">InitAsShaderResourceView</span>(*this, shaderRegister, registerSpace, visibility);</td>
      </tr>
      <tr>
        <td id="L1082" class="blob-num js-line-number" data-line-number="1082"></td>
        <td id="LC1082" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1083" class="blob-num js-line-number" data-line-number="1083"></td>
        <td id="LC1083" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1084" class="blob-num js-line-number" data-line-number="1084"></td>
        <td id="LC1084" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitAsUnorderedAccessView</span>(</td>
      </tr>
      <tr>
        <td id="L1085" class="blob-num js-line-number" data-line-number="1085"></td>
        <td id="LC1085" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1086" class="blob-num js-line-number" data-line-number="1086"></td>
        <td id="LC1086" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1087" class="blob-num js-line-number" data-line-number="1087"></td>
        <td id="LC1087" class="blob-code blob-code-inner js-file-line">        D3D12_SHADER_VISIBILITY visibility = D3D12_SHADER_VISIBILITY_ALL)</td>
      </tr>
      <tr>
        <td id="L1088" class="blob-num js-line-number" data-line-number="1088"></td>
        <td id="LC1088" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1089" class="blob-num js-line-number" data-line-number="1089"></td>
        <td id="LC1089" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">InitAsUnorderedAccessView</span>(*this, shaderRegister, registerSpace, visibility);</td>
      </tr>
      <tr>
        <td id="L1090" class="blob-num js-line-number" data-line-number="1090"></td>
        <td id="LC1090" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1091" class="blob-num js-line-number" data-line-number="1091"></td>
        <td id="LC1091" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1092" class="blob-num js-line-number" data-line-number="1092"></td>
        <td id="LC1092" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1093" class="blob-num js-line-number" data-line-number="1093"></td>
        <td id="LC1093" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1094" class="blob-num js-line-number" data-line-number="1094"></td>
        <td id="LC1094" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_STATIC_SAMPLER_DESC : public D3D12_STATIC_SAMPLER_DESC</td>
      </tr>
      <tr>
        <td id="L1095" class="blob-num js-line-number" data-line-number="1095"></td>
        <td id="LC1095" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1096" class="blob-num js-line-number" data-line-number="1096"></td>
        <td id="LC1096" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_STATIC_SAMPLER_DESC</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L1097" class="blob-num js-line-number" data-line-number="1097"></td>
        <td id="LC1097" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_STATIC_SAMPLER_DESC</span>(<span class="pl-k">const</span> D3D12_STATIC_SAMPLER_DESC &amp;o) :</td>
      </tr>
      <tr>
        <td id="L1098" class="blob-num js-line-number" data-line-number="1098"></td>
        <td id="LC1098" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_STATIC_SAMPLER_DESC</span>(o)</td>
      </tr>
      <tr>
        <td id="L1099" class="blob-num js-line-number" data-line-number="1099"></td>
        <td id="LC1099" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L1100" class="blob-num js-line-number" data-line-number="1100"></td>
        <td id="LC1100" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_STATIC_SAMPLER_DESC</span>(</td>
      </tr>
      <tr>
        <td id="L1101" class="blob-num js-line-number" data-line-number="1101"></td>
        <td id="LC1101" class="blob-code blob-code-inner js-file-line">         UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1102" class="blob-num js-line-number" data-line-number="1102"></td>
        <td id="LC1102" class="blob-code blob-code-inner js-file-line">         D3D12_FILTER filter = D3D12_FILTER_ANISOTROPIC,</td>
      </tr>
      <tr>
        <td id="L1103" class="blob-num js-line-number" data-line-number="1103"></td>
        <td id="LC1103" class="blob-code blob-code-inner js-file-line">         D3D12_TEXTURE_ADDRESS_MODE addressU = D3D12_TEXTURE_ADDRESS_MODE_WRAP,</td>
      </tr>
      <tr>
        <td id="L1104" class="blob-num js-line-number" data-line-number="1104"></td>
        <td id="LC1104" class="blob-code blob-code-inner js-file-line">         D3D12_TEXTURE_ADDRESS_MODE addressV = D3D12_TEXTURE_ADDRESS_MODE_WRAP,</td>
      </tr>
      <tr>
        <td id="L1105" class="blob-num js-line-number" data-line-number="1105"></td>
        <td id="LC1105" class="blob-code blob-code-inner js-file-line">         D3D12_TEXTURE_ADDRESS_MODE addressW = D3D12_TEXTURE_ADDRESS_MODE_WRAP,</td>
      </tr>
      <tr>
        <td id="L1106" class="blob-num js-line-number" data-line-number="1106"></td>
        <td id="LC1106" class="blob-code blob-code-inner js-file-line">         FLOAT mipLODBias = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1107" class="blob-num js-line-number" data-line-number="1107"></td>
        <td id="LC1107" class="blob-code blob-code-inner js-file-line">         UINT maxAnisotropy = <span class="pl-c1">16</span>,</td>
      </tr>
      <tr>
        <td id="L1108" class="blob-num js-line-number" data-line-number="1108"></td>
        <td id="LC1108" class="blob-code blob-code-inner js-file-line">         D3D12_COMPARISON_FUNC comparisonFunc = D3D12_COMPARISON_FUNC_LESS_EQUAL,</td>
      </tr>
      <tr>
        <td id="L1109" class="blob-num js-line-number" data-line-number="1109"></td>
        <td id="LC1109" class="blob-code blob-code-inner js-file-line">         D3D12_STATIC_BORDER_COLOR borderColor = D3D12_STATIC_BORDER_COLOR_OPAQUE_WHITE,</td>
      </tr>
      <tr>
        <td id="L1110" class="blob-num js-line-number" data-line-number="1110"></td>
        <td id="LC1110" class="blob-code blob-code-inner js-file-line">         FLOAT minLOD = <span class="pl-c1">0</span>.<span class="pl-smi">f</span>,</td>
      </tr>
      <tr>
        <td id="L1111" class="blob-num js-line-number" data-line-number="1111"></td>
        <td id="LC1111" class="blob-code blob-code-inner js-file-line">         FLOAT maxLOD = D3D12_FLOAT32_MAX,</td>
      </tr>
      <tr>
        <td id="L1112" class="blob-num js-line-number" data-line-number="1112"></td>
        <td id="LC1112" class="blob-code blob-code-inner js-file-line">         D3D12_SHADER_VISIBILITY shaderVisibility = D3D12_SHADER_VISIBILITY_ALL, </td>
      </tr>
      <tr>
        <td id="L1113" class="blob-num js-line-number" data-line-number="1113"></td>
        <td id="LC1113" class="blob-code blob-code-inner js-file-line">         UINT registerSpace = <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1114" class="blob-num js-line-number" data-line-number="1114"></td>
        <td id="LC1114" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1115" class="blob-num js-line-number" data-line-number="1115"></td>
        <td id="LC1115" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>(</td>
      </tr>
      <tr>
        <td id="L1116" class="blob-num js-line-number" data-line-number="1116"></td>
        <td id="LC1116" class="blob-code blob-code-inner js-file-line">            shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1117" class="blob-num js-line-number" data-line-number="1117"></td>
        <td id="LC1117" class="blob-code blob-code-inner js-file-line">            filter,</td>
      </tr>
      <tr>
        <td id="L1118" class="blob-num js-line-number" data-line-number="1118"></td>
        <td id="LC1118" class="blob-code blob-code-inner js-file-line">            addressU,</td>
      </tr>
      <tr>
        <td id="L1119" class="blob-num js-line-number" data-line-number="1119"></td>
        <td id="LC1119" class="blob-code blob-code-inner js-file-line">            addressV,</td>
      </tr>
      <tr>
        <td id="L1120" class="blob-num js-line-number" data-line-number="1120"></td>
        <td id="LC1120" class="blob-code blob-code-inner js-file-line">            addressW,</td>
      </tr>
      <tr>
        <td id="L1121" class="blob-num js-line-number" data-line-number="1121"></td>
        <td id="LC1121" class="blob-code blob-code-inner js-file-line">            mipLODBias,</td>
      </tr>
      <tr>
        <td id="L1122" class="blob-num js-line-number" data-line-number="1122"></td>
        <td id="LC1122" class="blob-code blob-code-inner js-file-line">            maxAnisotropy,</td>
      </tr>
      <tr>
        <td id="L1123" class="blob-num js-line-number" data-line-number="1123"></td>
        <td id="LC1123" class="blob-code blob-code-inner js-file-line">            comparisonFunc,</td>
      </tr>
      <tr>
        <td id="L1124" class="blob-num js-line-number" data-line-number="1124"></td>
        <td id="LC1124" class="blob-code blob-code-inner js-file-line">            borderColor,</td>
      </tr>
      <tr>
        <td id="L1125" class="blob-num js-line-number" data-line-number="1125"></td>
        <td id="LC1125" class="blob-code blob-code-inner js-file-line">            minLOD,</td>
      </tr>
      <tr>
        <td id="L1126" class="blob-num js-line-number" data-line-number="1126"></td>
        <td id="LC1126" class="blob-code blob-code-inner js-file-line">            maxLOD,</td>
      </tr>
      <tr>
        <td id="L1127" class="blob-num js-line-number" data-line-number="1127"></td>
        <td id="LC1127" class="blob-code blob-code-inner js-file-line">            shaderVisibility,</td>
      </tr>
      <tr>
        <td id="L1128" class="blob-num js-line-number" data-line-number="1128"></td>
        <td id="LC1128" class="blob-code blob-code-inner js-file-line">            registerSpace);</td>
      </tr>
      <tr>
        <td id="L1129" class="blob-num js-line-number" data-line-number="1129"></td>
        <td id="LC1129" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1130" class="blob-num js-line-number" data-line-number="1130"></td>
        <td id="LC1130" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1131" class="blob-num js-line-number" data-line-number="1131"></td>
        <td id="LC1131" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">Init</span>(</td>
      </tr>
      <tr>
        <td id="L1132" class="blob-num js-line-number" data-line-number="1132"></td>
        <td id="LC1132" class="blob-code blob-code-inner js-file-line">        _Out_ D3D12_STATIC_SAMPLER_DESC &amp;samplerDesc,</td>
      </tr>
      <tr>
        <td id="L1133" class="blob-num js-line-number" data-line-number="1133"></td>
        <td id="LC1133" class="blob-code blob-code-inner js-file-line">         UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1134" class="blob-num js-line-number" data-line-number="1134"></td>
        <td id="LC1134" class="blob-code blob-code-inner js-file-line">         D3D12_FILTER filter = D3D12_FILTER_ANISOTROPIC,</td>
      </tr>
      <tr>
        <td id="L1135" class="blob-num js-line-number" data-line-number="1135"></td>
        <td id="LC1135" class="blob-code blob-code-inner js-file-line">         D3D12_TEXTURE_ADDRESS_MODE addressU = D3D12_TEXTURE_ADDRESS_MODE_WRAP,</td>
      </tr>
      <tr>
        <td id="L1136" class="blob-num js-line-number" data-line-number="1136"></td>
        <td id="LC1136" class="blob-code blob-code-inner js-file-line">         D3D12_TEXTURE_ADDRESS_MODE addressV = D3D12_TEXTURE_ADDRESS_MODE_WRAP,</td>
      </tr>
      <tr>
        <td id="L1137" class="blob-num js-line-number" data-line-number="1137"></td>
        <td id="LC1137" class="blob-code blob-code-inner js-file-line">         D3D12_TEXTURE_ADDRESS_MODE addressW = D3D12_TEXTURE_ADDRESS_MODE_WRAP,</td>
      </tr>
      <tr>
        <td id="L1138" class="blob-num js-line-number" data-line-number="1138"></td>
        <td id="LC1138" class="blob-code blob-code-inner js-file-line">         FLOAT mipLODBias = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1139" class="blob-num js-line-number" data-line-number="1139"></td>
        <td id="LC1139" class="blob-code blob-code-inner js-file-line">         UINT maxAnisotropy = <span class="pl-c1">16</span>,</td>
      </tr>
      <tr>
        <td id="L1140" class="blob-num js-line-number" data-line-number="1140"></td>
        <td id="LC1140" class="blob-code blob-code-inner js-file-line">         D3D12_COMPARISON_FUNC comparisonFunc = D3D12_COMPARISON_FUNC_LESS_EQUAL,</td>
      </tr>
      <tr>
        <td id="L1141" class="blob-num js-line-number" data-line-number="1141"></td>
        <td id="LC1141" class="blob-code blob-code-inner js-file-line">         D3D12_STATIC_BORDER_COLOR borderColor = D3D12_STATIC_BORDER_COLOR_OPAQUE_WHITE,</td>
      </tr>
      <tr>
        <td id="L1142" class="blob-num js-line-number" data-line-number="1142"></td>
        <td id="LC1142" class="blob-code blob-code-inner js-file-line">         FLOAT minLOD = <span class="pl-c1">0</span>.<span class="pl-smi">f</span>,</td>
      </tr>
      <tr>
        <td id="L1143" class="blob-num js-line-number" data-line-number="1143"></td>
        <td id="LC1143" class="blob-code blob-code-inner js-file-line">         FLOAT maxLOD = D3D12_FLOAT32_MAX,</td>
      </tr>
      <tr>
        <td id="L1144" class="blob-num js-line-number" data-line-number="1144"></td>
        <td id="LC1144" class="blob-code blob-code-inner js-file-line">         D3D12_SHADER_VISIBILITY shaderVisibility = D3D12_SHADER_VISIBILITY_ALL, </td>
      </tr>
      <tr>
        <td id="L1145" class="blob-num js-line-number" data-line-number="1145"></td>
        <td id="LC1145" class="blob-code blob-code-inner js-file-line">         UINT registerSpace = <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1146" class="blob-num js-line-number" data-line-number="1146"></td>
        <td id="LC1146" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1147" class="blob-num js-line-number" data-line-number="1147"></td>
        <td id="LC1147" class="blob-code blob-code-inner js-file-line">        samplerDesc.<span class="pl-smi">ShaderRegister</span> = shaderRegister;</td>
      </tr>
      <tr>
        <td id="L1148" class="blob-num js-line-number" data-line-number="1148"></td>
        <td id="LC1148" class="blob-code blob-code-inner js-file-line">        samplerDesc.<span class="pl-smi">Filter</span> = filter;</td>
      </tr>
      <tr>
        <td id="L1149" class="blob-num js-line-number" data-line-number="1149"></td>
        <td id="LC1149" class="blob-code blob-code-inner js-file-line">        samplerDesc.<span class="pl-smi">AddressU</span> = addressU;</td>
      </tr>
      <tr>
        <td id="L1150" class="blob-num js-line-number" data-line-number="1150"></td>
        <td id="LC1150" class="blob-code blob-code-inner js-file-line">        samplerDesc.<span class="pl-smi">AddressV</span> = addressV;</td>
      </tr>
      <tr>
        <td id="L1151" class="blob-num js-line-number" data-line-number="1151"></td>
        <td id="LC1151" class="blob-code blob-code-inner js-file-line">        samplerDesc.<span class="pl-smi">AddressW</span> = addressW;</td>
      </tr>
      <tr>
        <td id="L1152" class="blob-num js-line-number" data-line-number="1152"></td>
        <td id="LC1152" class="blob-code blob-code-inner js-file-line">        samplerDesc.<span class="pl-smi">MipLODBias</span> = mipLODBias;</td>
      </tr>
      <tr>
        <td id="L1153" class="blob-num js-line-number" data-line-number="1153"></td>
        <td id="LC1153" class="blob-code blob-code-inner js-file-line">        samplerDesc.<span class="pl-smi">MaxAnisotropy</span> = maxAnisotropy;</td>
      </tr>
      <tr>
        <td id="L1154" class="blob-num js-line-number" data-line-number="1154"></td>
        <td id="LC1154" class="blob-code blob-code-inner js-file-line">        samplerDesc.<span class="pl-smi">ComparisonFunc</span> = comparisonFunc;</td>
      </tr>
      <tr>
        <td id="L1155" class="blob-num js-line-number" data-line-number="1155"></td>
        <td id="LC1155" class="blob-code blob-code-inner js-file-line">        samplerDesc.<span class="pl-smi">BorderColor</span> = borderColor;</td>
      </tr>
      <tr>
        <td id="L1156" class="blob-num js-line-number" data-line-number="1156"></td>
        <td id="LC1156" class="blob-code blob-code-inner js-file-line">        samplerDesc.<span class="pl-smi">MinLOD</span> = minLOD;</td>
      </tr>
      <tr>
        <td id="L1157" class="blob-num js-line-number" data-line-number="1157"></td>
        <td id="LC1157" class="blob-code blob-code-inner js-file-line">        samplerDesc.<span class="pl-smi">MaxLOD</span> = maxLOD;</td>
      </tr>
      <tr>
        <td id="L1158" class="blob-num js-line-number" data-line-number="1158"></td>
        <td id="LC1158" class="blob-code blob-code-inner js-file-line">        samplerDesc.<span class="pl-smi">ShaderVisibility</span> = shaderVisibility;</td>
      </tr>
      <tr>
        <td id="L1159" class="blob-num js-line-number" data-line-number="1159"></td>
        <td id="LC1159" class="blob-code blob-code-inner js-file-line">        samplerDesc.<span class="pl-smi">RegisterSpace</span> = registerSpace;</td>
      </tr>
      <tr>
        <td id="L1160" class="blob-num js-line-number" data-line-number="1160"></td>
        <td id="LC1160" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1161" class="blob-num js-line-number" data-line-number="1161"></td>
        <td id="LC1161" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">Init</span>(</td>
      </tr>
      <tr>
        <td id="L1162" class="blob-num js-line-number" data-line-number="1162"></td>
        <td id="LC1162" class="blob-code blob-code-inner js-file-line">         UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1163" class="blob-num js-line-number" data-line-number="1163"></td>
        <td id="LC1163" class="blob-code blob-code-inner js-file-line">         D3D12_FILTER filter = D3D12_FILTER_ANISOTROPIC,</td>
      </tr>
      <tr>
        <td id="L1164" class="blob-num js-line-number" data-line-number="1164"></td>
        <td id="LC1164" class="blob-code blob-code-inner js-file-line">         D3D12_TEXTURE_ADDRESS_MODE addressU = D3D12_TEXTURE_ADDRESS_MODE_WRAP,</td>
      </tr>
      <tr>
        <td id="L1165" class="blob-num js-line-number" data-line-number="1165"></td>
        <td id="LC1165" class="blob-code blob-code-inner js-file-line">         D3D12_TEXTURE_ADDRESS_MODE addressV = D3D12_TEXTURE_ADDRESS_MODE_WRAP,</td>
      </tr>
      <tr>
        <td id="L1166" class="blob-num js-line-number" data-line-number="1166"></td>
        <td id="LC1166" class="blob-code blob-code-inner js-file-line">         D3D12_TEXTURE_ADDRESS_MODE addressW = D3D12_TEXTURE_ADDRESS_MODE_WRAP,</td>
      </tr>
      <tr>
        <td id="L1167" class="blob-num js-line-number" data-line-number="1167"></td>
        <td id="LC1167" class="blob-code blob-code-inner js-file-line">         FLOAT mipLODBias = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1168" class="blob-num js-line-number" data-line-number="1168"></td>
        <td id="LC1168" class="blob-code blob-code-inner js-file-line">         UINT maxAnisotropy = <span class="pl-c1">16</span>,</td>
      </tr>
      <tr>
        <td id="L1169" class="blob-num js-line-number" data-line-number="1169"></td>
        <td id="LC1169" class="blob-code blob-code-inner js-file-line">         D3D12_COMPARISON_FUNC comparisonFunc = D3D12_COMPARISON_FUNC_LESS_EQUAL,</td>
      </tr>
      <tr>
        <td id="L1170" class="blob-num js-line-number" data-line-number="1170"></td>
        <td id="LC1170" class="blob-code blob-code-inner js-file-line">         D3D12_STATIC_BORDER_COLOR borderColor = D3D12_STATIC_BORDER_COLOR_OPAQUE_WHITE,</td>
      </tr>
      <tr>
        <td id="L1171" class="blob-num js-line-number" data-line-number="1171"></td>
        <td id="LC1171" class="blob-code blob-code-inner js-file-line">         FLOAT minLOD = <span class="pl-c1">0</span>.<span class="pl-smi">f</span>,</td>
      </tr>
      <tr>
        <td id="L1172" class="blob-num js-line-number" data-line-number="1172"></td>
        <td id="LC1172" class="blob-code blob-code-inner js-file-line">         FLOAT maxLOD = D3D12_FLOAT32_MAX,</td>
      </tr>
      <tr>
        <td id="L1173" class="blob-num js-line-number" data-line-number="1173"></td>
        <td id="LC1173" class="blob-code blob-code-inner js-file-line">         D3D12_SHADER_VISIBILITY shaderVisibility = D3D12_SHADER_VISIBILITY_ALL, </td>
      </tr>
      <tr>
        <td id="L1174" class="blob-num js-line-number" data-line-number="1174"></td>
        <td id="LC1174" class="blob-code blob-code-inner js-file-line">         UINT registerSpace = <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1175" class="blob-num js-line-number" data-line-number="1175"></td>
        <td id="LC1175" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1176" class="blob-num js-line-number" data-line-number="1176"></td>
        <td id="LC1176" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>(</td>
      </tr>
      <tr>
        <td id="L1177" class="blob-num js-line-number" data-line-number="1177"></td>
        <td id="LC1177" class="blob-code blob-code-inner js-file-line">            *this,</td>
      </tr>
      <tr>
        <td id="L1178" class="blob-num js-line-number" data-line-number="1178"></td>
        <td id="LC1178" class="blob-code blob-code-inner js-file-line">            shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1179" class="blob-num js-line-number" data-line-number="1179"></td>
        <td id="LC1179" class="blob-code blob-code-inner js-file-line">            filter,</td>
      </tr>
      <tr>
        <td id="L1180" class="blob-num js-line-number" data-line-number="1180"></td>
        <td id="LC1180" class="blob-code blob-code-inner js-file-line">            addressU,</td>
      </tr>
      <tr>
        <td id="L1181" class="blob-num js-line-number" data-line-number="1181"></td>
        <td id="LC1181" class="blob-code blob-code-inner js-file-line">            addressV,</td>
      </tr>
      <tr>
        <td id="L1182" class="blob-num js-line-number" data-line-number="1182"></td>
        <td id="LC1182" class="blob-code blob-code-inner js-file-line">            addressW,</td>
      </tr>
      <tr>
        <td id="L1183" class="blob-num js-line-number" data-line-number="1183"></td>
        <td id="LC1183" class="blob-code blob-code-inner js-file-line">            mipLODBias,</td>
      </tr>
      <tr>
        <td id="L1184" class="blob-num js-line-number" data-line-number="1184"></td>
        <td id="LC1184" class="blob-code blob-code-inner js-file-line">            maxAnisotropy,</td>
      </tr>
      <tr>
        <td id="L1185" class="blob-num js-line-number" data-line-number="1185"></td>
        <td id="LC1185" class="blob-code blob-code-inner js-file-line">            comparisonFunc,</td>
      </tr>
      <tr>
        <td id="L1186" class="blob-num js-line-number" data-line-number="1186"></td>
        <td id="LC1186" class="blob-code blob-code-inner js-file-line">            borderColor,</td>
      </tr>
      <tr>
        <td id="L1187" class="blob-num js-line-number" data-line-number="1187"></td>
        <td id="LC1187" class="blob-code blob-code-inner js-file-line">            minLOD,</td>
      </tr>
      <tr>
        <td id="L1188" class="blob-num js-line-number" data-line-number="1188"></td>
        <td id="LC1188" class="blob-code blob-code-inner js-file-line">            maxLOD,</td>
      </tr>
      <tr>
        <td id="L1189" class="blob-num js-line-number" data-line-number="1189"></td>
        <td id="LC1189" class="blob-code blob-code-inner js-file-line">            shaderVisibility,</td>
      </tr>
      <tr>
        <td id="L1190" class="blob-num js-line-number" data-line-number="1190"></td>
        <td id="LC1190" class="blob-code blob-code-inner js-file-line">            registerSpace);</td>
      </tr>
      <tr>
        <td id="L1191" class="blob-num js-line-number" data-line-number="1191"></td>
        <td id="LC1191" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1192" class="blob-num js-line-number" data-line-number="1192"></td>
        <td id="LC1192" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1193" class="blob-num js-line-number" data-line-number="1193"></td>
        <td id="LC1193" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1194" class="blob-num js-line-number" data-line-number="1194"></td>
        <td id="LC1194" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1195" class="blob-num js-line-number" data-line-number="1195"></td>
        <td id="LC1195" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1196" class="blob-num js-line-number" data-line-number="1196"></td>
        <td id="LC1196" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_ROOT_SIGNATURE_DESC : public D3D12_ROOT_SIGNATURE_DESC</td>
      </tr>
      <tr>
        <td id="L1197" class="blob-num js-line-number" data-line-number="1197"></td>
        <td id="LC1197" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1198" class="blob-num js-line-number" data-line-number="1198"></td>
        <td id="LC1198" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_ROOT_SIGNATURE_DESC</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L1199" class="blob-num js-line-number" data-line-number="1199"></td>
        <td id="LC1199" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_ROOT_SIGNATURE_DESC</span>(<span class="pl-k">const</span> D3D12_ROOT_SIGNATURE_DESC &amp;o) :</td>
      </tr>
      <tr>
        <td id="L1200" class="blob-num js-line-number" data-line-number="1200"></td>
        <td id="LC1200" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_ROOT_SIGNATURE_DESC</span>(o)</td>
      </tr>
      <tr>
        <td id="L1201" class="blob-num js-line-number" data-line-number="1201"></td>
        <td id="LC1201" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L1202" class="blob-num js-line-number" data-line-number="1202"></td>
        <td id="LC1202" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_ROOT_SIGNATURE_DESC</span>(</td>
      </tr>
      <tr>
        <td id="L1203" class="blob-num js-line-number" data-line-number="1203"></td>
        <td id="LC1203" class="blob-code blob-code-inner js-file-line">        UINT numParameters,</td>
      </tr>
      <tr>
        <td id="L1204" class="blob-num js-line-number" data-line-number="1204"></td>
        <td id="LC1204" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numParameters) <span class="pl-k">const</span> D3D12_ROOT_PARAMETER* _pParameters,</td>
      </tr>
      <tr>
        <td id="L1205" class="blob-num js-line-number" data-line-number="1205"></td>
        <td id="LC1205" class="blob-code blob-code-inner js-file-line">        UINT numStaticSamplers = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1206" class="blob-num js-line-number" data-line-number="1206"></td>
        <td id="LC1206" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numStaticSamplers) <span class="pl-k">const</span> D3D12_STATIC_SAMPLER_DESC* _pStaticSamplers = nullptr,</td>
      </tr>
      <tr>
        <td id="L1207" class="blob-num js-line-number" data-line-number="1207"></td>
        <td id="LC1207" class="blob-code blob-code-inner js-file-line">        D3D12_ROOT_SIGNATURE_FLAGS flags = D3D12_ROOT_SIGNATURE_FLAG_NONE)</td>
      </tr>
      <tr>
        <td id="L1208" class="blob-num js-line-number" data-line-number="1208"></td>
        <td id="LC1208" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1209" class="blob-num js-line-number" data-line-number="1209"></td>
        <td id="LC1209" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>(numParameters, _pParameters, numStaticSamplers, _pStaticSamplers, flags);</td>
      </tr>
      <tr>
        <td id="L1210" class="blob-num js-line-number" data-line-number="1210"></td>
        <td id="LC1210" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1211" class="blob-num js-line-number" data-line-number="1211"></td>
        <td id="LC1211" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_ROOT_SIGNATURE_DESC</span>(CD3DX12_DEFAULT)</td>
      </tr>
      <tr>
        <td id="L1212" class="blob-num js-line-number" data-line-number="1212"></td>
        <td id="LC1212" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1213" class="blob-num js-line-number" data-line-number="1213"></td>
        <td id="LC1213" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>(<span class="pl-c1">0</span>, nullptr, <span class="pl-c1">0</span>, nullptr, D3D12_ROOT_SIGNATURE_FLAG_NONE);</td>
      </tr>
      <tr>
        <td id="L1214" class="blob-num js-line-number" data-line-number="1214"></td>
        <td id="LC1214" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1215" class="blob-num js-line-number" data-line-number="1215"></td>
        <td id="LC1215" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1216" class="blob-num js-line-number" data-line-number="1216"></td>
        <td id="LC1216" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">Init</span>(</td>
      </tr>
      <tr>
        <td id="L1217" class="blob-num js-line-number" data-line-number="1217"></td>
        <td id="LC1217" class="blob-code blob-code-inner js-file-line">        UINT numParameters,</td>
      </tr>
      <tr>
        <td id="L1218" class="blob-num js-line-number" data-line-number="1218"></td>
        <td id="LC1218" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numParameters) <span class="pl-k">const</span> D3D12_ROOT_PARAMETER* _pParameters,</td>
      </tr>
      <tr>
        <td id="L1219" class="blob-num js-line-number" data-line-number="1219"></td>
        <td id="LC1219" class="blob-code blob-code-inner js-file-line">        UINT numStaticSamplers = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1220" class="blob-num js-line-number" data-line-number="1220"></td>
        <td id="LC1220" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numStaticSamplers) <span class="pl-k">const</span> D3D12_STATIC_SAMPLER_DESC* _pStaticSamplers = nullptr,</td>
      </tr>
      <tr>
        <td id="L1221" class="blob-num js-line-number" data-line-number="1221"></td>
        <td id="LC1221" class="blob-code blob-code-inner js-file-line">        D3D12_ROOT_SIGNATURE_FLAGS flags = D3D12_ROOT_SIGNATURE_FLAG_NONE)</td>
      </tr>
      <tr>
        <td id="L1222" class="blob-num js-line-number" data-line-number="1222"></td>
        <td id="LC1222" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1223" class="blob-num js-line-number" data-line-number="1223"></td>
        <td id="LC1223" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>(*this, numParameters, _pParameters, numStaticSamplers, _pStaticSamplers, flags);</td>
      </tr>
      <tr>
        <td id="L1224" class="blob-num js-line-number" data-line-number="1224"></td>
        <td id="LC1224" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1225" class="blob-num js-line-number" data-line-number="1225"></td>
        <td id="LC1225" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1226" class="blob-num js-line-number" data-line-number="1226"></td>
        <td id="LC1226" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">Init</span>(</td>
      </tr>
      <tr>
        <td id="L1227" class="blob-num js-line-number" data-line-number="1227"></td>
        <td id="LC1227" class="blob-code blob-code-inner js-file-line">        _Out_ D3D12_ROOT_SIGNATURE_DESC &amp;desc,</td>
      </tr>
      <tr>
        <td id="L1228" class="blob-num js-line-number" data-line-number="1228"></td>
        <td id="LC1228" class="blob-code blob-code-inner js-file-line">        UINT numParameters,</td>
      </tr>
      <tr>
        <td id="L1229" class="blob-num js-line-number" data-line-number="1229"></td>
        <td id="LC1229" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numParameters) <span class="pl-k">const</span> D3D12_ROOT_PARAMETER* _pParameters,</td>
      </tr>
      <tr>
        <td id="L1230" class="blob-num js-line-number" data-line-number="1230"></td>
        <td id="LC1230" class="blob-code blob-code-inner js-file-line">        UINT numStaticSamplers = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1231" class="blob-num js-line-number" data-line-number="1231"></td>
        <td id="LC1231" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numStaticSamplers) <span class="pl-k">const</span> D3D12_STATIC_SAMPLER_DESC* _pStaticSamplers = nullptr,</td>
      </tr>
      <tr>
        <td id="L1232" class="blob-num js-line-number" data-line-number="1232"></td>
        <td id="LC1232" class="blob-code blob-code-inner js-file-line">        D3D12_ROOT_SIGNATURE_FLAGS flags = D3D12_ROOT_SIGNATURE_FLAG_NONE)</td>
      </tr>
      <tr>
        <td id="L1233" class="blob-num js-line-number" data-line-number="1233"></td>
        <td id="LC1233" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1234" class="blob-num js-line-number" data-line-number="1234"></td>
        <td id="LC1234" class="blob-code blob-code-inner js-file-line">        desc.<span class="pl-smi">NumParameters</span> = numParameters;</td>
      </tr>
      <tr>
        <td id="L1235" class="blob-num js-line-number" data-line-number="1235"></td>
        <td id="LC1235" class="blob-code blob-code-inner js-file-line">        desc.<span class="pl-smi">pParameters</span> = _pParameters;</td>
      </tr>
      <tr>
        <td id="L1236" class="blob-num js-line-number" data-line-number="1236"></td>
        <td id="LC1236" class="blob-code blob-code-inner js-file-line">        desc.<span class="pl-smi">NumStaticSamplers</span> = numStaticSamplers;</td>
      </tr>
      <tr>
        <td id="L1237" class="blob-num js-line-number" data-line-number="1237"></td>
        <td id="LC1237" class="blob-code blob-code-inner js-file-line">        desc.<span class="pl-smi">pStaticSamplers</span> = _pStaticSamplers;</td>
      </tr>
      <tr>
        <td id="L1238" class="blob-num js-line-number" data-line-number="1238"></td>
        <td id="LC1238" class="blob-code blob-code-inner js-file-line">        desc.<span class="pl-smi">Flags</span> = flags;</td>
      </tr>
      <tr>
        <td id="L1239" class="blob-num js-line-number" data-line-number="1239"></td>
        <td id="LC1239" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1240" class="blob-num js-line-number" data-line-number="1240"></td>
        <td id="LC1240" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1241" class="blob-num js-line-number" data-line-number="1241"></td>
        <td id="LC1241" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1242" class="blob-num js-line-number" data-line-number="1242"></td>
        <td id="LC1242" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1243" class="blob-num js-line-number" data-line-number="1243"></td>
        <td id="LC1243" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_DESCRIPTOR_RANGE1 : public D3D12_DESCRIPTOR_RANGE1</td>
      </tr>
      <tr>
        <td id="L1244" class="blob-num js-line-number" data-line-number="1244"></td>
        <td id="LC1244" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1245" class="blob-num js-line-number" data-line-number="1245"></td>
        <td id="LC1245" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_DESCRIPTOR_RANGE1</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L1246" class="blob-num js-line-number" data-line-number="1246"></td>
        <td id="LC1246" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_DESCRIPTOR_RANGE1</span>(<span class="pl-k">const</span> D3D12_DESCRIPTOR_RANGE1 &amp;o) :</td>
      </tr>
      <tr>
        <td id="L1247" class="blob-num js-line-number" data-line-number="1247"></td>
        <td id="LC1247" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_DESCRIPTOR_RANGE1</span>(o)</td>
      </tr>
      <tr>
        <td id="L1248" class="blob-num js-line-number" data-line-number="1248"></td>
        <td id="LC1248" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L1249" class="blob-num js-line-number" data-line-number="1249"></td>
        <td id="LC1249" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_DESCRIPTOR_RANGE1</span>(</td>
      </tr>
      <tr>
        <td id="L1250" class="blob-num js-line-number" data-line-number="1250"></td>
        <td id="LC1250" class="blob-code blob-code-inner js-file-line">        D3D12_DESCRIPTOR_RANGE_TYPE rangeType,</td>
      </tr>
      <tr>
        <td id="L1251" class="blob-num js-line-number" data-line-number="1251"></td>
        <td id="LC1251" class="blob-code blob-code-inner js-file-line">        UINT numDescriptors,</td>
      </tr>
      <tr>
        <td id="L1252" class="blob-num js-line-number" data-line-number="1252"></td>
        <td id="LC1252" class="blob-code blob-code-inner js-file-line">        UINT baseShaderRegister,</td>
      </tr>
      <tr>
        <td id="L1253" class="blob-num js-line-number" data-line-number="1253"></td>
        <td id="LC1253" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1254" class="blob-num js-line-number" data-line-number="1254"></td>
        <td id="LC1254" class="blob-code blob-code-inner js-file-line">        D3D12_DESCRIPTOR_RANGE_FLAGS flags = D3D12_DESCRIPTOR_RANGE_FLAG_NONE,</td>
      </tr>
      <tr>
        <td id="L1255" class="blob-num js-line-number" data-line-number="1255"></td>
        <td id="LC1255" class="blob-code blob-code-inner js-file-line">        UINT offsetInDescriptorsFromTableStart =</td>
      </tr>
      <tr>
        <td id="L1256" class="blob-num js-line-number" data-line-number="1256"></td>
        <td id="LC1256" class="blob-code blob-code-inner js-file-line">        D3D12_DESCRIPTOR_RANGE_OFFSET_APPEND)</td>
      </tr>
      <tr>
        <td id="L1257" class="blob-num js-line-number" data-line-number="1257"></td>
        <td id="LC1257" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1258" class="blob-num js-line-number" data-line-number="1258"></td>
        <td id="LC1258" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>(rangeType, numDescriptors, baseShaderRegister, registerSpace, flags, offsetInDescriptorsFromTableStart);</td>
      </tr>
      <tr>
        <td id="L1259" class="blob-num js-line-number" data-line-number="1259"></td>
        <td id="LC1259" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1260" class="blob-num js-line-number" data-line-number="1260"></td>
        <td id="LC1260" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1261" class="blob-num js-line-number" data-line-number="1261"></td>
        <td id="LC1261" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">Init</span>(</td>
      </tr>
      <tr>
        <td id="L1262" class="blob-num js-line-number" data-line-number="1262"></td>
        <td id="LC1262" class="blob-code blob-code-inner js-file-line">        D3D12_DESCRIPTOR_RANGE_TYPE rangeType,</td>
      </tr>
      <tr>
        <td id="L1263" class="blob-num js-line-number" data-line-number="1263"></td>
        <td id="LC1263" class="blob-code blob-code-inner js-file-line">        UINT numDescriptors,</td>
      </tr>
      <tr>
        <td id="L1264" class="blob-num js-line-number" data-line-number="1264"></td>
        <td id="LC1264" class="blob-code blob-code-inner js-file-line">        UINT baseShaderRegister,</td>
      </tr>
      <tr>
        <td id="L1265" class="blob-num js-line-number" data-line-number="1265"></td>
        <td id="LC1265" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1266" class="blob-num js-line-number" data-line-number="1266"></td>
        <td id="LC1266" class="blob-code blob-code-inner js-file-line">        D3D12_DESCRIPTOR_RANGE_FLAGS flags = D3D12_DESCRIPTOR_RANGE_FLAG_NONE,</td>
      </tr>
      <tr>
        <td id="L1267" class="blob-num js-line-number" data-line-number="1267"></td>
        <td id="LC1267" class="blob-code blob-code-inner js-file-line">        UINT offsetInDescriptorsFromTableStart =</td>
      </tr>
      <tr>
        <td id="L1268" class="blob-num js-line-number" data-line-number="1268"></td>
        <td id="LC1268" class="blob-code blob-code-inner js-file-line">        D3D12_DESCRIPTOR_RANGE_OFFSET_APPEND)</td>
      </tr>
      <tr>
        <td id="L1269" class="blob-num js-line-number" data-line-number="1269"></td>
        <td id="LC1269" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1270" class="blob-num js-line-number" data-line-number="1270"></td>
        <td id="LC1270" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>(*this, rangeType, numDescriptors, baseShaderRegister, registerSpace, flags, offsetInDescriptorsFromTableStart);</td>
      </tr>
      <tr>
        <td id="L1271" class="blob-num js-line-number" data-line-number="1271"></td>
        <td id="LC1271" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1272" class="blob-num js-line-number" data-line-number="1272"></td>
        <td id="LC1272" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1273" class="blob-num js-line-number" data-line-number="1273"></td>
        <td id="LC1273" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">Init</span>(</td>
      </tr>
      <tr>
        <td id="L1274" class="blob-num js-line-number" data-line-number="1274"></td>
        <td id="LC1274" class="blob-code blob-code-inner js-file-line">        _Out_ D3D12_DESCRIPTOR_RANGE1 &amp;range,</td>
      </tr>
      <tr>
        <td id="L1275" class="blob-num js-line-number" data-line-number="1275"></td>
        <td id="LC1275" class="blob-code blob-code-inner js-file-line">        D3D12_DESCRIPTOR_RANGE_TYPE rangeType,</td>
      </tr>
      <tr>
        <td id="L1276" class="blob-num js-line-number" data-line-number="1276"></td>
        <td id="LC1276" class="blob-code blob-code-inner js-file-line">        UINT numDescriptors,</td>
      </tr>
      <tr>
        <td id="L1277" class="blob-num js-line-number" data-line-number="1277"></td>
        <td id="LC1277" class="blob-code blob-code-inner js-file-line">        UINT baseShaderRegister,</td>
      </tr>
      <tr>
        <td id="L1278" class="blob-num js-line-number" data-line-number="1278"></td>
        <td id="LC1278" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1279" class="blob-num js-line-number" data-line-number="1279"></td>
        <td id="LC1279" class="blob-code blob-code-inner js-file-line">        D3D12_DESCRIPTOR_RANGE_FLAGS flags = D3D12_DESCRIPTOR_RANGE_FLAG_NONE,</td>
      </tr>
      <tr>
        <td id="L1280" class="blob-num js-line-number" data-line-number="1280"></td>
        <td id="LC1280" class="blob-code blob-code-inner js-file-line">        UINT offsetInDescriptorsFromTableStart =</td>
      </tr>
      <tr>
        <td id="L1281" class="blob-num js-line-number" data-line-number="1281"></td>
        <td id="LC1281" class="blob-code blob-code-inner js-file-line">        D3D12_DESCRIPTOR_RANGE_OFFSET_APPEND)</td>
      </tr>
      <tr>
        <td id="L1282" class="blob-num js-line-number" data-line-number="1282"></td>
        <td id="LC1282" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1283" class="blob-num js-line-number" data-line-number="1283"></td>
        <td id="LC1283" class="blob-code blob-code-inner js-file-line">        range.<span class="pl-smi">RangeType</span> = rangeType;</td>
      </tr>
      <tr>
        <td id="L1284" class="blob-num js-line-number" data-line-number="1284"></td>
        <td id="LC1284" class="blob-code blob-code-inner js-file-line">        range.<span class="pl-smi">NumDescriptors</span> = numDescriptors;</td>
      </tr>
      <tr>
        <td id="L1285" class="blob-num js-line-number" data-line-number="1285"></td>
        <td id="LC1285" class="blob-code blob-code-inner js-file-line">        range.<span class="pl-smi">BaseShaderRegister</span> = baseShaderRegister;</td>
      </tr>
      <tr>
        <td id="L1286" class="blob-num js-line-number" data-line-number="1286"></td>
        <td id="LC1286" class="blob-code blob-code-inner js-file-line">        range.<span class="pl-smi">RegisterSpace</span> = registerSpace;</td>
      </tr>
      <tr>
        <td id="L1287" class="blob-num js-line-number" data-line-number="1287"></td>
        <td id="LC1287" class="blob-code blob-code-inner js-file-line">        range.<span class="pl-smi">Flags</span> = flags;</td>
      </tr>
      <tr>
        <td id="L1288" class="blob-num js-line-number" data-line-number="1288"></td>
        <td id="LC1288" class="blob-code blob-code-inner js-file-line">        range.<span class="pl-smi">OffsetInDescriptorsFromTableStart</span> = offsetInDescriptorsFromTableStart;</td>
      </tr>
      <tr>
        <td id="L1289" class="blob-num js-line-number" data-line-number="1289"></td>
        <td id="LC1289" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1290" class="blob-num js-line-number" data-line-number="1290"></td>
        <td id="LC1290" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1291" class="blob-num js-line-number" data-line-number="1291"></td>
        <td id="LC1291" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1292" class="blob-num js-line-number" data-line-number="1292"></td>
        <td id="LC1292" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1293" class="blob-num js-line-number" data-line-number="1293"></td>
        <td id="LC1293" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_ROOT_DESCRIPTOR_TABLE1 : public D3D12_ROOT_DESCRIPTOR_TABLE1</td>
      </tr>
      <tr>
        <td id="L1294" class="blob-num js-line-number" data-line-number="1294"></td>
        <td id="LC1294" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1295" class="blob-num js-line-number" data-line-number="1295"></td>
        <td id="LC1295" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_ROOT_DESCRIPTOR_TABLE1</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L1296" class="blob-num js-line-number" data-line-number="1296"></td>
        <td id="LC1296" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_ROOT_DESCRIPTOR_TABLE1</span>(<span class="pl-k">const</span> D3D12_ROOT_DESCRIPTOR_TABLE1 &amp;o) :</td>
      </tr>
      <tr>
        <td id="L1297" class="blob-num js-line-number" data-line-number="1297"></td>
        <td id="LC1297" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_ROOT_DESCRIPTOR_TABLE1</span>(o)</td>
      </tr>
      <tr>
        <td id="L1298" class="blob-num js-line-number" data-line-number="1298"></td>
        <td id="LC1298" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L1299" class="blob-num js-line-number" data-line-number="1299"></td>
        <td id="LC1299" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_ROOT_DESCRIPTOR_TABLE1</span>(</td>
      </tr>
      <tr>
        <td id="L1300" class="blob-num js-line-number" data-line-number="1300"></td>
        <td id="LC1300" class="blob-code blob-code-inner js-file-line">        UINT numDescriptorRanges,</td>
      </tr>
      <tr>
        <td id="L1301" class="blob-num js-line-number" data-line-number="1301"></td>
        <td id="LC1301" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numDescriptorRanges) <span class="pl-k">const</span> D3D12_DESCRIPTOR_RANGE1* _pDescriptorRanges)</td>
      </tr>
      <tr>
        <td id="L1302" class="blob-num js-line-number" data-line-number="1302"></td>
        <td id="LC1302" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1303" class="blob-num js-line-number" data-line-number="1303"></td>
        <td id="LC1303" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>(numDescriptorRanges, _pDescriptorRanges);</td>
      </tr>
      <tr>
        <td id="L1304" class="blob-num js-line-number" data-line-number="1304"></td>
        <td id="LC1304" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1305" class="blob-num js-line-number" data-line-number="1305"></td>
        <td id="LC1305" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1306" class="blob-num js-line-number" data-line-number="1306"></td>
        <td id="LC1306" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">Init</span>(</td>
      </tr>
      <tr>
        <td id="L1307" class="blob-num js-line-number" data-line-number="1307"></td>
        <td id="LC1307" class="blob-code blob-code-inner js-file-line">        UINT numDescriptorRanges,</td>
      </tr>
      <tr>
        <td id="L1308" class="blob-num js-line-number" data-line-number="1308"></td>
        <td id="LC1308" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numDescriptorRanges) <span class="pl-k">const</span> D3D12_DESCRIPTOR_RANGE1* _pDescriptorRanges)</td>
      </tr>
      <tr>
        <td id="L1309" class="blob-num js-line-number" data-line-number="1309"></td>
        <td id="LC1309" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1310" class="blob-num js-line-number" data-line-number="1310"></td>
        <td id="LC1310" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>(*this, numDescriptorRanges, _pDescriptorRanges);</td>
      </tr>
      <tr>
        <td id="L1311" class="blob-num js-line-number" data-line-number="1311"></td>
        <td id="LC1311" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1312" class="blob-num js-line-number" data-line-number="1312"></td>
        <td id="LC1312" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1313" class="blob-num js-line-number" data-line-number="1313"></td>
        <td id="LC1313" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">Init</span>(</td>
      </tr>
      <tr>
        <td id="L1314" class="blob-num js-line-number" data-line-number="1314"></td>
        <td id="LC1314" class="blob-code blob-code-inner js-file-line">        _Out_ D3D12_ROOT_DESCRIPTOR_TABLE1 &amp;rootDescriptorTable,</td>
      </tr>
      <tr>
        <td id="L1315" class="blob-num js-line-number" data-line-number="1315"></td>
        <td id="LC1315" class="blob-code blob-code-inner js-file-line">        UINT numDescriptorRanges,</td>
      </tr>
      <tr>
        <td id="L1316" class="blob-num js-line-number" data-line-number="1316"></td>
        <td id="LC1316" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numDescriptorRanges) <span class="pl-k">const</span> D3D12_DESCRIPTOR_RANGE1* _pDescriptorRanges)</td>
      </tr>
      <tr>
        <td id="L1317" class="blob-num js-line-number" data-line-number="1317"></td>
        <td id="LC1317" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1318" class="blob-num js-line-number" data-line-number="1318"></td>
        <td id="LC1318" class="blob-code blob-code-inner js-file-line">        rootDescriptorTable.<span class="pl-smi">NumDescriptorRanges</span> = numDescriptorRanges;</td>
      </tr>
      <tr>
        <td id="L1319" class="blob-num js-line-number" data-line-number="1319"></td>
        <td id="LC1319" class="blob-code blob-code-inner js-file-line">        rootDescriptorTable.<span class="pl-smi">pDescriptorRanges</span> = _pDescriptorRanges;</td>
      </tr>
      <tr>
        <td id="L1320" class="blob-num js-line-number" data-line-number="1320"></td>
        <td id="LC1320" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1321" class="blob-num js-line-number" data-line-number="1321"></td>
        <td id="LC1321" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1322" class="blob-num js-line-number" data-line-number="1322"></td>
        <td id="LC1322" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1323" class="blob-num js-line-number" data-line-number="1323"></td>
        <td id="LC1323" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1324" class="blob-num js-line-number" data-line-number="1324"></td>
        <td id="LC1324" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_ROOT_DESCRIPTOR1 : public D3D12_ROOT_DESCRIPTOR1</td>
      </tr>
      <tr>
        <td id="L1325" class="blob-num js-line-number" data-line-number="1325"></td>
        <td id="LC1325" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1326" class="blob-num js-line-number" data-line-number="1326"></td>
        <td id="LC1326" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_ROOT_DESCRIPTOR1</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L1327" class="blob-num js-line-number" data-line-number="1327"></td>
        <td id="LC1327" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_ROOT_DESCRIPTOR1</span>(<span class="pl-k">const</span> D3D12_ROOT_DESCRIPTOR1 &amp;o) :</td>
      </tr>
      <tr>
        <td id="L1328" class="blob-num js-line-number" data-line-number="1328"></td>
        <td id="LC1328" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_ROOT_DESCRIPTOR1</span>(o)</td>
      </tr>
      <tr>
        <td id="L1329" class="blob-num js-line-number" data-line-number="1329"></td>
        <td id="LC1329" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L1330" class="blob-num js-line-number" data-line-number="1330"></td>
        <td id="LC1330" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_ROOT_DESCRIPTOR1</span>(</td>
      </tr>
      <tr>
        <td id="L1331" class="blob-num js-line-number" data-line-number="1331"></td>
        <td id="LC1331" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1332" class="blob-num js-line-number" data-line-number="1332"></td>
        <td id="LC1332" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1333" class="blob-num js-line-number" data-line-number="1333"></td>
        <td id="LC1333" class="blob-code blob-code-inner js-file-line">        D3D12_ROOT_DESCRIPTOR_FLAGS flags = D3D12_ROOT_DESCRIPTOR_FLAG_NONE)</td>
      </tr>
      <tr>
        <td id="L1334" class="blob-num js-line-number" data-line-number="1334"></td>
        <td id="LC1334" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1335" class="blob-num js-line-number" data-line-number="1335"></td>
        <td id="LC1335" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>(shaderRegister, registerSpace, flags);</td>
      </tr>
      <tr>
        <td id="L1336" class="blob-num js-line-number" data-line-number="1336"></td>
        <td id="LC1336" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1337" class="blob-num js-line-number" data-line-number="1337"></td>
        <td id="LC1337" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1338" class="blob-num js-line-number" data-line-number="1338"></td>
        <td id="LC1338" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">Init</span>(</td>
      </tr>
      <tr>
        <td id="L1339" class="blob-num js-line-number" data-line-number="1339"></td>
        <td id="LC1339" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1340" class="blob-num js-line-number" data-line-number="1340"></td>
        <td id="LC1340" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1341" class="blob-num js-line-number" data-line-number="1341"></td>
        <td id="LC1341" class="blob-code blob-code-inner js-file-line">        D3D12_ROOT_DESCRIPTOR_FLAGS flags = D3D12_ROOT_DESCRIPTOR_FLAG_NONE)</td>
      </tr>
      <tr>
        <td id="L1342" class="blob-num js-line-number" data-line-number="1342"></td>
        <td id="LC1342" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1343" class="blob-num js-line-number" data-line-number="1343"></td>
        <td id="LC1343" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>(*this, shaderRegister, registerSpace, flags);</td>
      </tr>
      <tr>
        <td id="L1344" class="blob-num js-line-number" data-line-number="1344"></td>
        <td id="LC1344" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1345" class="blob-num js-line-number" data-line-number="1345"></td>
        <td id="LC1345" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1346" class="blob-num js-line-number" data-line-number="1346"></td>
        <td id="LC1346" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">Init</span>(</td>
      </tr>
      <tr>
        <td id="L1347" class="blob-num js-line-number" data-line-number="1347"></td>
        <td id="LC1347" class="blob-code blob-code-inner js-file-line">        _Out_ D3D12_ROOT_DESCRIPTOR1 &amp;table, </td>
      </tr>
      <tr>
        <td id="L1348" class="blob-num js-line-number" data-line-number="1348"></td>
        <td id="LC1348" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister, </td>
      </tr>
      <tr>
        <td id="L1349" class="blob-num js-line-number" data-line-number="1349"></td>
        <td id="LC1349" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>, </td>
      </tr>
      <tr>
        <td id="L1350" class="blob-num js-line-number" data-line-number="1350"></td>
        <td id="LC1350" class="blob-code blob-code-inner js-file-line">        D3D12_ROOT_DESCRIPTOR_FLAGS flags = D3D12_ROOT_DESCRIPTOR_FLAG_NONE)</td>
      </tr>
      <tr>
        <td id="L1351" class="blob-num js-line-number" data-line-number="1351"></td>
        <td id="LC1351" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1352" class="blob-num js-line-number" data-line-number="1352"></td>
        <td id="LC1352" class="blob-code blob-code-inner js-file-line">        table.<span class="pl-smi">ShaderRegister</span> = shaderRegister;</td>
      </tr>
      <tr>
        <td id="L1353" class="blob-num js-line-number" data-line-number="1353"></td>
        <td id="LC1353" class="blob-code blob-code-inner js-file-line">        table.<span class="pl-smi">RegisterSpace</span> = registerSpace;</td>
      </tr>
      <tr>
        <td id="L1354" class="blob-num js-line-number" data-line-number="1354"></td>
        <td id="LC1354" class="blob-code blob-code-inner js-file-line">        table.<span class="pl-smi">Flags</span> = flags;</td>
      </tr>
      <tr>
        <td id="L1355" class="blob-num js-line-number" data-line-number="1355"></td>
        <td id="LC1355" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1356" class="blob-num js-line-number" data-line-number="1356"></td>
        <td id="LC1356" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1357" class="blob-num js-line-number" data-line-number="1357"></td>
        <td id="LC1357" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1358" class="blob-num js-line-number" data-line-number="1358"></td>
        <td id="LC1358" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1359" class="blob-num js-line-number" data-line-number="1359"></td>
        <td id="LC1359" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_ROOT_PARAMETER1 : public D3D12_ROOT_PARAMETER1</td>
      </tr>
      <tr>
        <td id="L1360" class="blob-num js-line-number" data-line-number="1360"></td>
        <td id="LC1360" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1361" class="blob-num js-line-number" data-line-number="1361"></td>
        <td id="LC1361" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_ROOT_PARAMETER1</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L1362" class="blob-num js-line-number" data-line-number="1362"></td>
        <td id="LC1362" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_ROOT_PARAMETER1</span>(<span class="pl-k">const</span> D3D12_ROOT_PARAMETER1 &amp;o) :</td>
      </tr>
      <tr>
        <td id="L1363" class="blob-num js-line-number" data-line-number="1363"></td>
        <td id="LC1363" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_ROOT_PARAMETER1</span>(o)</td>
      </tr>
      <tr>
        <td id="L1364" class="blob-num js-line-number" data-line-number="1364"></td>
        <td id="LC1364" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L1365" class="blob-num js-line-number" data-line-number="1365"></td>
        <td id="LC1365" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1366" class="blob-num js-line-number" data-line-number="1366"></td>
        <td id="LC1366" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitAsDescriptorTable</span>(</td>
      </tr>
      <tr>
        <td id="L1367" class="blob-num js-line-number" data-line-number="1367"></td>
        <td id="LC1367" class="blob-code blob-code-inner js-file-line">        _Out_ D3D12_ROOT_PARAMETER1 &amp;rootParam,</td>
      </tr>
      <tr>
        <td id="L1368" class="blob-num js-line-number" data-line-number="1368"></td>
        <td id="LC1368" class="blob-code blob-code-inner js-file-line">        UINT numDescriptorRanges,</td>
      </tr>
      <tr>
        <td id="L1369" class="blob-num js-line-number" data-line-number="1369"></td>
        <td id="LC1369" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_</span>(numDescriptorRanges) <span class="pl-k">const</span> D3D12_DESCRIPTOR_RANGE1* pDescriptorRanges,</td>
      </tr>
      <tr>
        <td id="L1370" class="blob-num js-line-number" data-line-number="1370"></td>
        <td id="LC1370" class="blob-code blob-code-inner js-file-line">        D3D12_SHADER_VISIBILITY visibility = D3D12_SHADER_VISIBILITY_ALL)</td>
      </tr>
      <tr>
        <td id="L1371" class="blob-num js-line-number" data-line-number="1371"></td>
        <td id="LC1371" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1372" class="blob-num js-line-number" data-line-number="1372"></td>
        <td id="LC1372" class="blob-code blob-code-inner js-file-line">        rootParam.<span class="pl-smi">ParameterType</span> = D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE;</td>
      </tr>
      <tr>
        <td id="L1373" class="blob-num js-line-number" data-line-number="1373"></td>
        <td id="LC1373" class="blob-code blob-code-inner js-file-line">        rootParam.<span class="pl-smi">ShaderVisibility</span> = visibility;</td>
      </tr>
      <tr>
        <td id="L1374" class="blob-num js-line-number" data-line-number="1374"></td>
        <td id="LC1374" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">CD3DX12_ROOT_DESCRIPTOR_TABLE1::Init</span>(rootParam.<span class="pl-smi">DescriptorTable</span>, numDescriptorRanges, pDescriptorRanges);</td>
      </tr>
      <tr>
        <td id="L1375" class="blob-num js-line-number" data-line-number="1375"></td>
        <td id="LC1375" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1376" class="blob-num js-line-number" data-line-number="1376"></td>
        <td id="LC1376" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1377" class="blob-num js-line-number" data-line-number="1377"></td>
        <td id="LC1377" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitAsConstants</span>(</td>
      </tr>
      <tr>
        <td id="L1378" class="blob-num js-line-number" data-line-number="1378"></td>
        <td id="LC1378" class="blob-code blob-code-inner js-file-line">        _Out_ D3D12_ROOT_PARAMETER1 &amp;rootParam,</td>
      </tr>
      <tr>
        <td id="L1379" class="blob-num js-line-number" data-line-number="1379"></td>
        <td id="LC1379" class="blob-code blob-code-inner js-file-line">        UINT num32BitValues,</td>
      </tr>
      <tr>
        <td id="L1380" class="blob-num js-line-number" data-line-number="1380"></td>
        <td id="LC1380" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1381" class="blob-num js-line-number" data-line-number="1381"></td>
        <td id="LC1381" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1382" class="blob-num js-line-number" data-line-number="1382"></td>
        <td id="LC1382" class="blob-code blob-code-inner js-file-line">        D3D12_SHADER_VISIBILITY visibility = D3D12_SHADER_VISIBILITY_ALL)</td>
      </tr>
      <tr>
        <td id="L1383" class="blob-num js-line-number" data-line-number="1383"></td>
        <td id="LC1383" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1384" class="blob-num js-line-number" data-line-number="1384"></td>
        <td id="LC1384" class="blob-code blob-code-inner js-file-line">        rootParam.<span class="pl-smi">ParameterType</span> = D3D12_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS;</td>
      </tr>
      <tr>
        <td id="L1385" class="blob-num js-line-number" data-line-number="1385"></td>
        <td id="LC1385" class="blob-code blob-code-inner js-file-line">        rootParam.<span class="pl-smi">ShaderVisibility</span> = visibility;</td>
      </tr>
      <tr>
        <td id="L1386" class="blob-num js-line-number" data-line-number="1386"></td>
        <td id="LC1386" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">CD3DX12_ROOT_CONSTANTS::Init</span>(rootParam.<span class="pl-smi">Constants</span>, num32BitValues, shaderRegister, registerSpace);</td>
      </tr>
      <tr>
        <td id="L1387" class="blob-num js-line-number" data-line-number="1387"></td>
        <td id="LC1387" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1388" class="blob-num js-line-number" data-line-number="1388"></td>
        <td id="LC1388" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1389" class="blob-num js-line-number" data-line-number="1389"></td>
        <td id="LC1389" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitAsConstantBufferView</span>(</td>
      </tr>
      <tr>
        <td id="L1390" class="blob-num js-line-number" data-line-number="1390"></td>
        <td id="LC1390" class="blob-code blob-code-inner js-file-line">        _Out_ D3D12_ROOT_PARAMETER1 &amp;rootParam,</td>
      </tr>
      <tr>
        <td id="L1391" class="blob-num js-line-number" data-line-number="1391"></td>
        <td id="LC1391" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1392" class="blob-num js-line-number" data-line-number="1392"></td>
        <td id="LC1392" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1393" class="blob-num js-line-number" data-line-number="1393"></td>
        <td id="LC1393" class="blob-code blob-code-inner js-file-line">        D3D12_ROOT_DESCRIPTOR_FLAGS flags = D3D12_ROOT_DESCRIPTOR_FLAG_NONE,</td>
      </tr>
      <tr>
        <td id="L1394" class="blob-num js-line-number" data-line-number="1394"></td>
        <td id="LC1394" class="blob-code blob-code-inner js-file-line">        D3D12_SHADER_VISIBILITY visibility = D3D12_SHADER_VISIBILITY_ALL)</td>
      </tr>
      <tr>
        <td id="L1395" class="blob-num js-line-number" data-line-number="1395"></td>
        <td id="LC1395" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1396" class="blob-num js-line-number" data-line-number="1396"></td>
        <td id="LC1396" class="blob-code blob-code-inner js-file-line">        rootParam.<span class="pl-smi">ParameterType</span> = D3D12_ROOT_PARAMETER_TYPE_CBV;</td>
      </tr>
      <tr>
        <td id="L1397" class="blob-num js-line-number" data-line-number="1397"></td>
        <td id="LC1397" class="blob-code blob-code-inner js-file-line">        rootParam.<span class="pl-smi">ShaderVisibility</span> = visibility;</td>
      </tr>
      <tr>
        <td id="L1398" class="blob-num js-line-number" data-line-number="1398"></td>
        <td id="LC1398" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">CD3DX12_ROOT_DESCRIPTOR1::Init</span>(rootParam.<span class="pl-smi">Descriptor</span>, shaderRegister, registerSpace, flags);</td>
      </tr>
      <tr>
        <td id="L1399" class="blob-num js-line-number" data-line-number="1399"></td>
        <td id="LC1399" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1400" class="blob-num js-line-number" data-line-number="1400"></td>
        <td id="LC1400" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1401" class="blob-num js-line-number" data-line-number="1401"></td>
        <td id="LC1401" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitAsShaderResourceView</span>(</td>
      </tr>
      <tr>
        <td id="L1402" class="blob-num js-line-number" data-line-number="1402"></td>
        <td id="LC1402" class="blob-code blob-code-inner js-file-line">        _Out_ D3D12_ROOT_PARAMETER1 &amp;rootParam,</td>
      </tr>
      <tr>
        <td id="L1403" class="blob-num js-line-number" data-line-number="1403"></td>
        <td id="LC1403" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1404" class="blob-num js-line-number" data-line-number="1404"></td>
        <td id="LC1404" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1405" class="blob-num js-line-number" data-line-number="1405"></td>
        <td id="LC1405" class="blob-code blob-code-inner js-file-line">        D3D12_ROOT_DESCRIPTOR_FLAGS flags = D3D12_ROOT_DESCRIPTOR_FLAG_NONE,</td>
      </tr>
      <tr>
        <td id="L1406" class="blob-num js-line-number" data-line-number="1406"></td>
        <td id="LC1406" class="blob-code blob-code-inner js-file-line">        D3D12_SHADER_VISIBILITY visibility = D3D12_SHADER_VISIBILITY_ALL)</td>
      </tr>
      <tr>
        <td id="L1407" class="blob-num js-line-number" data-line-number="1407"></td>
        <td id="LC1407" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1408" class="blob-num js-line-number" data-line-number="1408"></td>
        <td id="LC1408" class="blob-code blob-code-inner js-file-line">        rootParam.<span class="pl-smi">ParameterType</span> = D3D12_ROOT_PARAMETER_TYPE_SRV;</td>
      </tr>
      <tr>
        <td id="L1409" class="blob-num js-line-number" data-line-number="1409"></td>
        <td id="LC1409" class="blob-code blob-code-inner js-file-line">        rootParam.<span class="pl-smi">ShaderVisibility</span> = visibility;</td>
      </tr>
      <tr>
        <td id="L1410" class="blob-num js-line-number" data-line-number="1410"></td>
        <td id="LC1410" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">CD3DX12_ROOT_DESCRIPTOR1::Init</span>(rootParam.<span class="pl-smi">Descriptor</span>, shaderRegister, registerSpace, flags);</td>
      </tr>
      <tr>
        <td id="L1411" class="blob-num js-line-number" data-line-number="1411"></td>
        <td id="LC1411" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1412" class="blob-num js-line-number" data-line-number="1412"></td>
        <td id="LC1412" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1413" class="blob-num js-line-number" data-line-number="1413"></td>
        <td id="LC1413" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitAsUnorderedAccessView</span>(</td>
      </tr>
      <tr>
        <td id="L1414" class="blob-num js-line-number" data-line-number="1414"></td>
        <td id="LC1414" class="blob-code blob-code-inner js-file-line">        _Out_ D3D12_ROOT_PARAMETER1 &amp;rootParam,</td>
      </tr>
      <tr>
        <td id="L1415" class="blob-num js-line-number" data-line-number="1415"></td>
        <td id="LC1415" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1416" class="blob-num js-line-number" data-line-number="1416"></td>
        <td id="LC1416" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1417" class="blob-num js-line-number" data-line-number="1417"></td>
        <td id="LC1417" class="blob-code blob-code-inner js-file-line">        D3D12_ROOT_DESCRIPTOR_FLAGS flags = D3D12_ROOT_DESCRIPTOR_FLAG_NONE,</td>
      </tr>
      <tr>
        <td id="L1418" class="blob-num js-line-number" data-line-number="1418"></td>
        <td id="LC1418" class="blob-code blob-code-inner js-file-line">        D3D12_SHADER_VISIBILITY visibility = D3D12_SHADER_VISIBILITY_ALL)</td>
      </tr>
      <tr>
        <td id="L1419" class="blob-num js-line-number" data-line-number="1419"></td>
        <td id="LC1419" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1420" class="blob-num js-line-number" data-line-number="1420"></td>
        <td id="LC1420" class="blob-code blob-code-inner js-file-line">        rootParam.<span class="pl-smi">ParameterType</span> = D3D12_ROOT_PARAMETER_TYPE_UAV;</td>
      </tr>
      <tr>
        <td id="L1421" class="blob-num js-line-number" data-line-number="1421"></td>
        <td id="LC1421" class="blob-code blob-code-inner js-file-line">        rootParam.<span class="pl-smi">ShaderVisibility</span> = visibility;</td>
      </tr>
      <tr>
        <td id="L1422" class="blob-num js-line-number" data-line-number="1422"></td>
        <td id="LC1422" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">CD3DX12_ROOT_DESCRIPTOR1::Init</span>(rootParam.<span class="pl-smi">Descriptor</span>, shaderRegister, registerSpace, flags);</td>
      </tr>
      <tr>
        <td id="L1423" class="blob-num js-line-number" data-line-number="1423"></td>
        <td id="LC1423" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1424" class="blob-num js-line-number" data-line-number="1424"></td>
        <td id="LC1424" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1425" class="blob-num js-line-number" data-line-number="1425"></td>
        <td id="LC1425" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitAsDescriptorTable</span>(</td>
      </tr>
      <tr>
        <td id="L1426" class="blob-num js-line-number" data-line-number="1426"></td>
        <td id="LC1426" class="blob-code blob-code-inner js-file-line">        UINT numDescriptorRanges,</td>
      </tr>
      <tr>
        <td id="L1427" class="blob-num js-line-number" data-line-number="1427"></td>
        <td id="LC1427" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_</span>(numDescriptorRanges) <span class="pl-k">const</span> D3D12_DESCRIPTOR_RANGE1* pDescriptorRanges,</td>
      </tr>
      <tr>
        <td id="L1428" class="blob-num js-line-number" data-line-number="1428"></td>
        <td id="LC1428" class="blob-code blob-code-inner js-file-line">        D3D12_SHADER_VISIBILITY visibility = D3D12_SHADER_VISIBILITY_ALL)</td>
      </tr>
      <tr>
        <td id="L1429" class="blob-num js-line-number" data-line-number="1429"></td>
        <td id="LC1429" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1430" class="blob-num js-line-number" data-line-number="1430"></td>
        <td id="LC1430" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">InitAsDescriptorTable</span>(*this, numDescriptorRanges, pDescriptorRanges, visibility);</td>
      </tr>
      <tr>
        <td id="L1431" class="blob-num js-line-number" data-line-number="1431"></td>
        <td id="LC1431" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1432" class="blob-num js-line-number" data-line-number="1432"></td>
        <td id="LC1432" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1433" class="blob-num js-line-number" data-line-number="1433"></td>
        <td id="LC1433" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitAsConstants</span>(</td>
      </tr>
      <tr>
        <td id="L1434" class="blob-num js-line-number" data-line-number="1434"></td>
        <td id="LC1434" class="blob-code blob-code-inner js-file-line">        UINT num32BitValues,</td>
      </tr>
      <tr>
        <td id="L1435" class="blob-num js-line-number" data-line-number="1435"></td>
        <td id="LC1435" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1436" class="blob-num js-line-number" data-line-number="1436"></td>
        <td id="LC1436" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1437" class="blob-num js-line-number" data-line-number="1437"></td>
        <td id="LC1437" class="blob-code blob-code-inner js-file-line">        D3D12_SHADER_VISIBILITY visibility = D3D12_SHADER_VISIBILITY_ALL)</td>
      </tr>
      <tr>
        <td id="L1438" class="blob-num js-line-number" data-line-number="1438"></td>
        <td id="LC1438" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1439" class="blob-num js-line-number" data-line-number="1439"></td>
        <td id="LC1439" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">InitAsConstants</span>(*this, num32BitValues, shaderRegister, registerSpace, visibility);</td>
      </tr>
      <tr>
        <td id="L1440" class="blob-num js-line-number" data-line-number="1440"></td>
        <td id="LC1440" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1441" class="blob-num js-line-number" data-line-number="1441"></td>
        <td id="LC1441" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1442" class="blob-num js-line-number" data-line-number="1442"></td>
        <td id="LC1442" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitAsConstantBufferView</span>(</td>
      </tr>
      <tr>
        <td id="L1443" class="blob-num js-line-number" data-line-number="1443"></td>
        <td id="LC1443" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1444" class="blob-num js-line-number" data-line-number="1444"></td>
        <td id="LC1444" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1445" class="blob-num js-line-number" data-line-number="1445"></td>
        <td id="LC1445" class="blob-code blob-code-inner js-file-line">        D3D12_ROOT_DESCRIPTOR_FLAGS flags = D3D12_ROOT_DESCRIPTOR_FLAG_NONE,</td>
      </tr>
      <tr>
        <td id="L1446" class="blob-num js-line-number" data-line-number="1446"></td>
        <td id="LC1446" class="blob-code blob-code-inner js-file-line">        D3D12_SHADER_VISIBILITY visibility = D3D12_SHADER_VISIBILITY_ALL)</td>
      </tr>
      <tr>
        <td id="L1447" class="blob-num js-line-number" data-line-number="1447"></td>
        <td id="LC1447" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1448" class="blob-num js-line-number" data-line-number="1448"></td>
        <td id="LC1448" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">InitAsConstantBufferView</span>(*this, shaderRegister, registerSpace, flags, visibility);</td>
      </tr>
      <tr>
        <td id="L1449" class="blob-num js-line-number" data-line-number="1449"></td>
        <td id="LC1449" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1450" class="blob-num js-line-number" data-line-number="1450"></td>
        <td id="LC1450" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1451" class="blob-num js-line-number" data-line-number="1451"></td>
        <td id="LC1451" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitAsShaderResourceView</span>(</td>
      </tr>
      <tr>
        <td id="L1452" class="blob-num js-line-number" data-line-number="1452"></td>
        <td id="LC1452" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1453" class="blob-num js-line-number" data-line-number="1453"></td>
        <td id="LC1453" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1454" class="blob-num js-line-number" data-line-number="1454"></td>
        <td id="LC1454" class="blob-code blob-code-inner js-file-line">        D3D12_ROOT_DESCRIPTOR_FLAGS flags = D3D12_ROOT_DESCRIPTOR_FLAG_NONE,</td>
      </tr>
      <tr>
        <td id="L1455" class="blob-num js-line-number" data-line-number="1455"></td>
        <td id="LC1455" class="blob-code blob-code-inner js-file-line">        D3D12_SHADER_VISIBILITY visibility = D3D12_SHADER_VISIBILITY_ALL)</td>
      </tr>
      <tr>
        <td id="L1456" class="blob-num js-line-number" data-line-number="1456"></td>
        <td id="LC1456" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1457" class="blob-num js-line-number" data-line-number="1457"></td>
        <td id="LC1457" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">InitAsShaderResourceView</span>(*this, shaderRegister, registerSpace, flags, visibility);</td>
      </tr>
      <tr>
        <td id="L1458" class="blob-num js-line-number" data-line-number="1458"></td>
        <td id="LC1458" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1459" class="blob-num js-line-number" data-line-number="1459"></td>
        <td id="LC1459" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1460" class="blob-num js-line-number" data-line-number="1460"></td>
        <td id="LC1460" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitAsUnorderedAccessView</span>(</td>
      </tr>
      <tr>
        <td id="L1461" class="blob-num js-line-number" data-line-number="1461"></td>
        <td id="LC1461" class="blob-code blob-code-inner js-file-line">        UINT shaderRegister,</td>
      </tr>
      <tr>
        <td id="L1462" class="blob-num js-line-number" data-line-number="1462"></td>
        <td id="LC1462" class="blob-code blob-code-inner js-file-line">        UINT registerSpace = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1463" class="blob-num js-line-number" data-line-number="1463"></td>
        <td id="LC1463" class="blob-code blob-code-inner js-file-line">        D3D12_ROOT_DESCRIPTOR_FLAGS flags = D3D12_ROOT_DESCRIPTOR_FLAG_NONE,</td>
      </tr>
      <tr>
        <td id="L1464" class="blob-num js-line-number" data-line-number="1464"></td>
        <td id="LC1464" class="blob-code blob-code-inner js-file-line">        D3D12_SHADER_VISIBILITY visibility = D3D12_SHADER_VISIBILITY_ALL)</td>
      </tr>
      <tr>
        <td id="L1465" class="blob-num js-line-number" data-line-number="1465"></td>
        <td id="LC1465" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1466" class="blob-num js-line-number" data-line-number="1466"></td>
        <td id="LC1466" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">InitAsUnorderedAccessView</span>(*this, shaderRegister, registerSpace, flags, visibility);</td>
      </tr>
      <tr>
        <td id="L1467" class="blob-num js-line-number" data-line-number="1467"></td>
        <td id="LC1467" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1468" class="blob-num js-line-number" data-line-number="1468"></td>
        <td id="LC1468" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1469" class="blob-num js-line-number" data-line-number="1469"></td>
        <td id="LC1469" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1470" class="blob-num js-line-number" data-line-number="1470"></td>
        <td id="LC1470" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1471" class="blob-num js-line-number" data-line-number="1471"></td>
        <td id="LC1471" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_VERSIONED_ROOT_SIGNATURE_DESC : public D3D12_VERSIONED_ROOT_SIGNATURE_DESC</td>
      </tr>
      <tr>
        <td id="L1472" class="blob-num js-line-number" data-line-number="1472"></td>
        <td id="LC1472" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1473" class="blob-num js-line-number" data-line-number="1473"></td>
        <td id="LC1473" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_VERSIONED_ROOT_SIGNATURE_DESC</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L1474" class="blob-num js-line-number" data-line-number="1474"></td>
        <td id="LC1474" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_VERSIONED_ROOT_SIGNATURE_DESC</span>(<span class="pl-k">const</span> D3D12_VERSIONED_ROOT_SIGNATURE_DESC &amp;o) :</td>
      </tr>
      <tr>
        <td id="L1475" class="blob-num js-line-number" data-line-number="1475"></td>
        <td id="LC1475" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_VERSIONED_ROOT_SIGNATURE_DESC</span>(o)</td>
      </tr>
      <tr>
        <td id="L1476" class="blob-num js-line-number" data-line-number="1476"></td>
        <td id="LC1476" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L1477" class="blob-num js-line-number" data-line-number="1477"></td>
        <td id="LC1477" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_VERSIONED_ROOT_SIGNATURE_DESC</span>(<span class="pl-k">const</span> D3D12_ROOT_SIGNATURE_DESC &amp;o)</td>
      </tr>
      <tr>
        <td id="L1478" class="blob-num js-line-number" data-line-number="1478"></td>
        <td id="LC1478" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1479" class="blob-num js-line-number" data-line-number="1479"></td>
        <td id="LC1479" class="blob-code blob-code-inner js-file-line">        Version = D3D_ROOT_SIGNATURE_VERSION_1_0;</td>
      </tr>
      <tr>
        <td id="L1480" class="blob-num js-line-number" data-line-number="1480"></td>
        <td id="LC1480" class="blob-code blob-code-inner js-file-line">        Desc_1_0 = o;</td>
      </tr>
      <tr>
        <td id="L1481" class="blob-num js-line-number" data-line-number="1481"></td>
        <td id="LC1481" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1482" class="blob-num js-line-number" data-line-number="1482"></td>
        <td id="LC1482" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_VERSIONED_ROOT_SIGNATURE_DESC</span>(<span class="pl-k">const</span> D3D12_ROOT_SIGNATURE_DESC1 &amp;o)</td>
      </tr>
      <tr>
        <td id="L1483" class="blob-num js-line-number" data-line-number="1483"></td>
        <td id="LC1483" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1484" class="blob-num js-line-number" data-line-number="1484"></td>
        <td id="LC1484" class="blob-code blob-code-inner js-file-line">        Version = D3D_ROOT_SIGNATURE_VERSION_1_1;</td>
      </tr>
      <tr>
        <td id="L1485" class="blob-num js-line-number" data-line-number="1485"></td>
        <td id="LC1485" class="blob-code blob-code-inner js-file-line">        Desc_1_1 = o;</td>
      </tr>
      <tr>
        <td id="L1486" class="blob-num js-line-number" data-line-number="1486"></td>
        <td id="LC1486" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1487" class="blob-num js-line-number" data-line-number="1487"></td>
        <td id="LC1487" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_VERSIONED_ROOT_SIGNATURE_DESC</span>(</td>
      </tr>
      <tr>
        <td id="L1488" class="blob-num js-line-number" data-line-number="1488"></td>
        <td id="LC1488" class="blob-code blob-code-inner js-file-line">        UINT numParameters,</td>
      </tr>
      <tr>
        <td id="L1489" class="blob-num js-line-number" data-line-number="1489"></td>
        <td id="LC1489" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numParameters) <span class="pl-k">const</span> D3D12_ROOT_PARAMETER* _pParameters,</td>
      </tr>
      <tr>
        <td id="L1490" class="blob-num js-line-number" data-line-number="1490"></td>
        <td id="LC1490" class="blob-code blob-code-inner js-file-line">        UINT numStaticSamplers = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1491" class="blob-num js-line-number" data-line-number="1491"></td>
        <td id="LC1491" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numStaticSamplers) <span class="pl-k">const</span> D3D12_STATIC_SAMPLER_DESC* _pStaticSamplers = nullptr,</td>
      </tr>
      <tr>
        <td id="L1492" class="blob-num js-line-number" data-line-number="1492"></td>
        <td id="LC1492" class="blob-code blob-code-inner js-file-line">        D3D12_ROOT_SIGNATURE_FLAGS flags = D3D12_ROOT_SIGNATURE_FLAG_NONE)</td>
      </tr>
      <tr>
        <td id="L1493" class="blob-num js-line-number" data-line-number="1493"></td>
        <td id="LC1493" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1494" class="blob-num js-line-number" data-line-number="1494"></td>
        <td id="LC1494" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init_1_0</span>(numParameters, _pParameters, numStaticSamplers, _pStaticSamplers, flags);</td>
      </tr>
      <tr>
        <td id="L1495" class="blob-num js-line-number" data-line-number="1495"></td>
        <td id="LC1495" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1496" class="blob-num js-line-number" data-line-number="1496"></td>
        <td id="LC1496" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_VERSIONED_ROOT_SIGNATURE_DESC</span>(</td>
      </tr>
      <tr>
        <td id="L1497" class="blob-num js-line-number" data-line-number="1497"></td>
        <td id="LC1497" class="blob-code blob-code-inner js-file-line">        UINT numParameters,</td>
      </tr>
      <tr>
        <td id="L1498" class="blob-num js-line-number" data-line-number="1498"></td>
        <td id="LC1498" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numParameters) <span class="pl-k">const</span> D3D12_ROOT_PARAMETER1* _pParameters,</td>
      </tr>
      <tr>
        <td id="L1499" class="blob-num js-line-number" data-line-number="1499"></td>
        <td id="LC1499" class="blob-code blob-code-inner js-file-line">        UINT numStaticSamplers = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1500" class="blob-num js-line-number" data-line-number="1500"></td>
        <td id="LC1500" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numStaticSamplers) <span class="pl-k">const</span> D3D12_STATIC_SAMPLER_DESC* _pStaticSamplers = nullptr,</td>
      </tr>
      <tr>
        <td id="L1501" class="blob-num js-line-number" data-line-number="1501"></td>
        <td id="LC1501" class="blob-code blob-code-inner js-file-line">        D3D12_ROOT_SIGNATURE_FLAGS flags = D3D12_ROOT_SIGNATURE_FLAG_NONE)</td>
      </tr>
      <tr>
        <td id="L1502" class="blob-num js-line-number" data-line-number="1502"></td>
        <td id="LC1502" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1503" class="blob-num js-line-number" data-line-number="1503"></td>
        <td id="LC1503" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init_1_1</span>(numParameters, _pParameters, numStaticSamplers, _pStaticSamplers, flags);</td>
      </tr>
      <tr>
        <td id="L1504" class="blob-num js-line-number" data-line-number="1504"></td>
        <td id="LC1504" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1505" class="blob-num js-line-number" data-line-number="1505"></td>
        <td id="LC1505" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_VERSIONED_ROOT_SIGNATURE_DESC</span>(CD3DX12_DEFAULT)</td>
      </tr>
      <tr>
        <td id="L1506" class="blob-num js-line-number" data-line-number="1506"></td>
        <td id="LC1506" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1507" class="blob-num js-line-number" data-line-number="1507"></td>
        <td id="LC1507" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init_1_1</span>(<span class="pl-c1">0</span>, nullptr, <span class="pl-c1">0</span>, nullptr, D3D12_ROOT_SIGNATURE_FLAG_NONE);</td>
      </tr>
      <tr>
        <td id="L1508" class="blob-num js-line-number" data-line-number="1508"></td>
        <td id="LC1508" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1509" class="blob-num js-line-number" data-line-number="1509"></td>
        <td id="LC1509" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1510" class="blob-num js-line-number" data-line-number="1510"></td>
        <td id="LC1510" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">Init_1_0</span>(</td>
      </tr>
      <tr>
        <td id="L1511" class="blob-num js-line-number" data-line-number="1511"></td>
        <td id="LC1511" class="blob-code blob-code-inner js-file-line">        UINT numParameters,</td>
      </tr>
      <tr>
        <td id="L1512" class="blob-num js-line-number" data-line-number="1512"></td>
        <td id="LC1512" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numParameters) <span class="pl-k">const</span> D3D12_ROOT_PARAMETER* _pParameters,</td>
      </tr>
      <tr>
        <td id="L1513" class="blob-num js-line-number" data-line-number="1513"></td>
        <td id="LC1513" class="blob-code blob-code-inner js-file-line">        UINT numStaticSamplers = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1514" class="blob-num js-line-number" data-line-number="1514"></td>
        <td id="LC1514" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numStaticSamplers) <span class="pl-k">const</span> D3D12_STATIC_SAMPLER_DESC* _pStaticSamplers = nullptr,</td>
      </tr>
      <tr>
        <td id="L1515" class="blob-num js-line-number" data-line-number="1515"></td>
        <td id="LC1515" class="blob-code blob-code-inner js-file-line">        D3D12_ROOT_SIGNATURE_FLAGS flags = D3D12_ROOT_SIGNATURE_FLAG_NONE)</td>
      </tr>
      <tr>
        <td id="L1516" class="blob-num js-line-number" data-line-number="1516"></td>
        <td id="LC1516" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1517" class="blob-num js-line-number" data-line-number="1517"></td>
        <td id="LC1517" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init_1_0</span>(*this, numParameters, _pParameters, numStaticSamplers, _pStaticSamplers, flags);</td>
      </tr>
      <tr>
        <td id="L1518" class="blob-num js-line-number" data-line-number="1518"></td>
        <td id="LC1518" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1519" class="blob-num js-line-number" data-line-number="1519"></td>
        <td id="LC1519" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1520" class="blob-num js-line-number" data-line-number="1520"></td>
        <td id="LC1520" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">Init_1_0</span>(</td>
      </tr>
      <tr>
        <td id="L1521" class="blob-num js-line-number" data-line-number="1521"></td>
        <td id="LC1521" class="blob-code blob-code-inner js-file-line">        _Out_ D3D12_VERSIONED_ROOT_SIGNATURE_DESC &amp;desc,</td>
      </tr>
      <tr>
        <td id="L1522" class="blob-num js-line-number" data-line-number="1522"></td>
        <td id="LC1522" class="blob-code blob-code-inner js-file-line">        UINT numParameters,</td>
      </tr>
      <tr>
        <td id="L1523" class="blob-num js-line-number" data-line-number="1523"></td>
        <td id="LC1523" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numParameters) <span class="pl-k">const</span> D3D12_ROOT_PARAMETER* _pParameters,</td>
      </tr>
      <tr>
        <td id="L1524" class="blob-num js-line-number" data-line-number="1524"></td>
        <td id="LC1524" class="blob-code blob-code-inner js-file-line">        UINT numStaticSamplers = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1525" class="blob-num js-line-number" data-line-number="1525"></td>
        <td id="LC1525" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numStaticSamplers) <span class="pl-k">const</span> D3D12_STATIC_SAMPLER_DESC* _pStaticSamplers = nullptr,</td>
      </tr>
      <tr>
        <td id="L1526" class="blob-num js-line-number" data-line-number="1526"></td>
        <td id="LC1526" class="blob-code blob-code-inner js-file-line">        D3D12_ROOT_SIGNATURE_FLAGS flags = D3D12_ROOT_SIGNATURE_FLAG_NONE)</td>
      </tr>
      <tr>
        <td id="L1527" class="blob-num js-line-number" data-line-number="1527"></td>
        <td id="LC1527" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1528" class="blob-num js-line-number" data-line-number="1528"></td>
        <td id="LC1528" class="blob-code blob-code-inner js-file-line">        desc.<span class="pl-smi">Version</span> = D3D_ROOT_SIGNATURE_VERSION_1_0;</td>
      </tr>
      <tr>
        <td id="L1529" class="blob-num js-line-number" data-line-number="1529"></td>
        <td id="LC1529" class="blob-code blob-code-inner js-file-line">        desc.<span class="pl-smi">Desc_1_0</span>.<span class="pl-smi">NumParameters</span> = numParameters;</td>
      </tr>
      <tr>
        <td id="L1530" class="blob-num js-line-number" data-line-number="1530"></td>
        <td id="LC1530" class="blob-code blob-code-inner js-file-line">        desc.<span class="pl-smi">Desc_1_0</span>.<span class="pl-smi">pParameters</span> = _pParameters;</td>
      </tr>
      <tr>
        <td id="L1531" class="blob-num js-line-number" data-line-number="1531"></td>
        <td id="LC1531" class="blob-code blob-code-inner js-file-line">        desc.<span class="pl-smi">Desc_1_0</span>.<span class="pl-smi">NumStaticSamplers</span> = numStaticSamplers;</td>
      </tr>
      <tr>
        <td id="L1532" class="blob-num js-line-number" data-line-number="1532"></td>
        <td id="LC1532" class="blob-code blob-code-inner js-file-line">        desc.<span class="pl-smi">Desc_1_0</span>.<span class="pl-smi">pStaticSamplers</span> = _pStaticSamplers;</td>
      </tr>
      <tr>
        <td id="L1533" class="blob-num js-line-number" data-line-number="1533"></td>
        <td id="LC1533" class="blob-code blob-code-inner js-file-line">        desc.<span class="pl-smi">Desc_1_0</span>.<span class="pl-smi">Flags</span> = flags;</td>
      </tr>
      <tr>
        <td id="L1534" class="blob-num js-line-number" data-line-number="1534"></td>
        <td id="LC1534" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1535" class="blob-num js-line-number" data-line-number="1535"></td>
        <td id="LC1535" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1536" class="blob-num js-line-number" data-line-number="1536"></td>
        <td id="LC1536" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">Init_1_1</span>(</td>
      </tr>
      <tr>
        <td id="L1537" class="blob-num js-line-number" data-line-number="1537"></td>
        <td id="LC1537" class="blob-code blob-code-inner js-file-line">        UINT numParameters,</td>
      </tr>
      <tr>
        <td id="L1538" class="blob-num js-line-number" data-line-number="1538"></td>
        <td id="LC1538" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numParameters) <span class="pl-k">const</span> D3D12_ROOT_PARAMETER1* _pParameters,</td>
      </tr>
      <tr>
        <td id="L1539" class="blob-num js-line-number" data-line-number="1539"></td>
        <td id="LC1539" class="blob-code blob-code-inner js-file-line">        UINT numStaticSamplers = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1540" class="blob-num js-line-number" data-line-number="1540"></td>
        <td id="LC1540" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numStaticSamplers) <span class="pl-k">const</span> D3D12_STATIC_SAMPLER_DESC* _pStaticSamplers = nullptr,</td>
      </tr>
      <tr>
        <td id="L1541" class="blob-num js-line-number" data-line-number="1541"></td>
        <td id="LC1541" class="blob-code blob-code-inner js-file-line">        D3D12_ROOT_SIGNATURE_FLAGS flags = D3D12_ROOT_SIGNATURE_FLAG_NONE)</td>
      </tr>
      <tr>
        <td id="L1542" class="blob-num js-line-number" data-line-number="1542"></td>
        <td id="LC1542" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1543" class="blob-num js-line-number" data-line-number="1543"></td>
        <td id="LC1543" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init_1_1</span>(*this, numParameters, _pParameters, numStaticSamplers, _pStaticSamplers, flags);</td>
      </tr>
      <tr>
        <td id="L1544" class="blob-num js-line-number" data-line-number="1544"></td>
        <td id="LC1544" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1545" class="blob-num js-line-number" data-line-number="1545"></td>
        <td id="LC1545" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1546" class="blob-num js-line-number" data-line-number="1546"></td>
        <td id="LC1546" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">Init_1_1</span>(</td>
      </tr>
      <tr>
        <td id="L1547" class="blob-num js-line-number" data-line-number="1547"></td>
        <td id="LC1547" class="blob-code blob-code-inner js-file-line">        _Out_ D3D12_VERSIONED_ROOT_SIGNATURE_DESC &amp;desc,</td>
      </tr>
      <tr>
        <td id="L1548" class="blob-num js-line-number" data-line-number="1548"></td>
        <td id="LC1548" class="blob-code blob-code-inner js-file-line">        UINT numParameters,</td>
      </tr>
      <tr>
        <td id="L1549" class="blob-num js-line-number" data-line-number="1549"></td>
        <td id="LC1549" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numParameters) <span class="pl-k">const</span> D3D12_ROOT_PARAMETER1* _pParameters,</td>
      </tr>
      <tr>
        <td id="L1550" class="blob-num js-line-number" data-line-number="1550"></td>
        <td id="LC1550" class="blob-code blob-code-inner js-file-line">        UINT numStaticSamplers = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1551" class="blob-num js-line-number" data-line-number="1551"></td>
        <td id="LC1551" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">_In_reads_opt_</span>(numStaticSamplers) <span class="pl-k">const</span> D3D12_STATIC_SAMPLER_DESC* _pStaticSamplers = nullptr,</td>
      </tr>
      <tr>
        <td id="L1552" class="blob-num js-line-number" data-line-number="1552"></td>
        <td id="LC1552" class="blob-code blob-code-inner js-file-line">        D3D12_ROOT_SIGNATURE_FLAGS flags = D3D12_ROOT_SIGNATURE_FLAG_NONE)</td>
      </tr>
      <tr>
        <td id="L1553" class="blob-num js-line-number" data-line-number="1553"></td>
        <td id="LC1553" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1554" class="blob-num js-line-number" data-line-number="1554"></td>
        <td id="LC1554" class="blob-code blob-code-inner js-file-line">        desc.<span class="pl-smi">Version</span> = D3D_ROOT_SIGNATURE_VERSION_1_1;</td>
      </tr>
      <tr>
        <td id="L1555" class="blob-num js-line-number" data-line-number="1555"></td>
        <td id="LC1555" class="blob-code blob-code-inner js-file-line">        desc.<span class="pl-smi">Desc_1_1</span>.<span class="pl-smi">NumParameters</span> = numParameters;</td>
      </tr>
      <tr>
        <td id="L1556" class="blob-num js-line-number" data-line-number="1556"></td>
        <td id="LC1556" class="blob-code blob-code-inner js-file-line">        desc.<span class="pl-smi">Desc_1_1</span>.<span class="pl-smi">pParameters</span> = _pParameters;</td>
      </tr>
      <tr>
        <td id="L1557" class="blob-num js-line-number" data-line-number="1557"></td>
        <td id="LC1557" class="blob-code blob-code-inner js-file-line">        desc.<span class="pl-smi">Desc_1_1</span>.<span class="pl-smi">NumStaticSamplers</span> = numStaticSamplers;</td>
      </tr>
      <tr>
        <td id="L1558" class="blob-num js-line-number" data-line-number="1558"></td>
        <td id="LC1558" class="blob-code blob-code-inner js-file-line">        desc.<span class="pl-smi">Desc_1_1</span>.<span class="pl-smi">pStaticSamplers</span> = _pStaticSamplers;</td>
      </tr>
      <tr>
        <td id="L1559" class="blob-num js-line-number" data-line-number="1559"></td>
        <td id="LC1559" class="blob-code blob-code-inner js-file-line">        desc.<span class="pl-smi">Desc_1_1</span>.<span class="pl-smi">Flags</span> = flags;</td>
      </tr>
      <tr>
        <td id="L1560" class="blob-num js-line-number" data-line-number="1560"></td>
        <td id="LC1560" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1561" class="blob-num js-line-number" data-line-number="1561"></td>
        <td id="LC1561" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1562" class="blob-num js-line-number" data-line-number="1562"></td>
        <td id="LC1562" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1563" class="blob-num js-line-number" data-line-number="1563"></td>
        <td id="LC1563" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1564" class="blob-num js-line-number" data-line-number="1564"></td>
        <td id="LC1564" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_CPU_DESCRIPTOR_HANDLE : public D3D12_CPU_DESCRIPTOR_HANDLE</td>
      </tr>
      <tr>
        <td id="L1565" class="blob-num js-line-number" data-line-number="1565"></td>
        <td id="LC1565" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1566" class="blob-num js-line-number" data-line-number="1566"></td>
        <td id="LC1566" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_CPU_DESCRIPTOR_HANDLE</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L1567" class="blob-num js-line-number" data-line-number="1567"></td>
        <td id="LC1567" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_CPU_DESCRIPTOR_HANDLE</span>(<span class="pl-k">const</span> D3D12_CPU_DESCRIPTOR_HANDLE &amp;o) :</td>
      </tr>
      <tr>
        <td id="L1568" class="blob-num js-line-number" data-line-number="1568"></td>
        <td id="LC1568" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_CPU_DESCRIPTOR_HANDLE</span>(o)</td>
      </tr>
      <tr>
        <td id="L1569" class="blob-num js-line-number" data-line-number="1569"></td>
        <td id="LC1569" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L1570" class="blob-num js-line-number" data-line-number="1570"></td>
        <td id="LC1570" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_CPU_DESCRIPTOR_HANDLE</span>(CD3DX12_DEFAULT) { ptr = <span class="pl-c1">0</span>; }</td>
      </tr>
      <tr>
        <td id="L1571" class="blob-num js-line-number" data-line-number="1571"></td>
        <td id="LC1571" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_CPU_DESCRIPTOR_HANDLE</span>(_In_ <span class="pl-k">const</span> D3D12_CPU_DESCRIPTOR_HANDLE &amp;other, INT offsetScaledByIncrementSize)</td>
      </tr>
      <tr>
        <td id="L1572" class="blob-num js-line-number" data-line-number="1572"></td>
        <td id="LC1572" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1573" class="blob-num js-line-number" data-line-number="1573"></td>
        <td id="LC1573" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">InitOffsetted</span>(other, offsetScaledByIncrementSize);</td>
      </tr>
      <tr>
        <td id="L1574" class="blob-num js-line-number" data-line-number="1574"></td>
        <td id="LC1574" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1575" class="blob-num js-line-number" data-line-number="1575"></td>
        <td id="LC1575" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_CPU_DESCRIPTOR_HANDLE</span>(_In_ <span class="pl-k">const</span> D3D12_CPU_DESCRIPTOR_HANDLE &amp;other, INT offsetInDescriptors, UINT descriptorIncrementSize)</td>
      </tr>
      <tr>
        <td id="L1576" class="blob-num js-line-number" data-line-number="1576"></td>
        <td id="LC1576" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1577" class="blob-num js-line-number" data-line-number="1577"></td>
        <td id="LC1577" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">InitOffsetted</span>(other, offsetInDescriptors, descriptorIncrementSize);</td>
      </tr>
      <tr>
        <td id="L1578" class="blob-num js-line-number" data-line-number="1578"></td>
        <td id="LC1578" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1579" class="blob-num js-line-number" data-line-number="1579"></td>
        <td id="LC1579" class="blob-code blob-code-inner js-file-line">    CD3DX12_CPU_DESCRIPTOR_HANDLE&amp; <span class="pl-c1">Offset</span>(INT offsetInDescriptors, UINT descriptorIncrementSize)</td>
      </tr>
      <tr>
        <td id="L1580" class="blob-num js-line-number" data-line-number="1580"></td>
        <td id="LC1580" class="blob-code blob-code-inner js-file-line">    { </td>
      </tr>
      <tr>
        <td id="L1581" class="blob-num js-line-number" data-line-number="1581"></td>
        <td id="LC1581" class="blob-code blob-code-inner js-file-line">        ptr = <span class="pl-c1">SIZE_T</span>(<span class="pl-c1">INT64</span>(ptr) + <span class="pl-c1">INT64</span>(offsetInDescriptors) * <span class="pl-c1">INT64</span>(descriptorIncrementSize));</td>
      </tr>
      <tr>
        <td id="L1582" class="blob-num js-line-number" data-line-number="1582"></td>
        <td id="LC1582" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> *this;</td>
      </tr>
      <tr>
        <td id="L1583" class="blob-num js-line-number" data-line-number="1583"></td>
        <td id="LC1583" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1584" class="blob-num js-line-number" data-line-number="1584"></td>
        <td id="LC1584" class="blob-code blob-code-inner js-file-line">    CD3DX12_CPU_DESCRIPTOR_HANDLE&amp; <span class="pl-c1">Offset</span>(INT offsetScaledByIncrementSize) </td>
      </tr>
      <tr>
        <td id="L1585" class="blob-num js-line-number" data-line-number="1585"></td>
        <td id="LC1585" class="blob-code blob-code-inner js-file-line">    { </td>
      </tr>
      <tr>
        <td id="L1586" class="blob-num js-line-number" data-line-number="1586"></td>
        <td id="LC1586" class="blob-code blob-code-inner js-file-line">        ptr = <span class="pl-c1">SIZE_T</span>(<span class="pl-c1">INT64</span>(ptr) + <span class="pl-c1">INT64</span>(offsetScaledByIncrementSize));</td>
      </tr>
      <tr>
        <td id="L1587" class="blob-num js-line-number" data-line-number="1587"></td>
        <td id="LC1587" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> *this;</td>
      </tr>
      <tr>
        <td id="L1588" class="blob-num js-line-number" data-line-number="1588"></td>
        <td id="LC1588" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1589" class="blob-num js-line-number" data-line-number="1589"></td>
        <td id="LC1589" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span> operator==(_In_ <span class="pl-k">const</span> D3D12_CPU_DESCRIPTOR_HANDLE&amp; other) <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L1590" class="blob-num js-line-number" data-line-number="1590"></td>
        <td id="LC1590" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1591" class="blob-num js-line-number" data-line-number="1591"></td>
        <td id="LC1591" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> (ptr == other.<span class="pl-smi">ptr</span>);</td>
      </tr>
      <tr>
        <td id="L1592" class="blob-num js-line-number" data-line-number="1592"></td>
        <td id="LC1592" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1593" class="blob-num js-line-number" data-line-number="1593"></td>
        <td id="LC1593" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span> operator!=(_In_ <span class="pl-k">const</span> D3D12_CPU_DESCRIPTOR_HANDLE&amp; other) <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L1594" class="blob-num js-line-number" data-line-number="1594"></td>
        <td id="LC1594" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1595" class="blob-num js-line-number" data-line-number="1595"></td>
        <td id="LC1595" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> (ptr != other.<span class="pl-smi">ptr</span>);</td>
      </tr>
      <tr>
        <td id="L1596" class="blob-num js-line-number" data-line-number="1596"></td>
        <td id="LC1596" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1597" class="blob-num js-line-number" data-line-number="1597"></td>
        <td id="LC1597" class="blob-code blob-code-inner js-file-line">    CD3DX12_CPU_DESCRIPTOR_HANDLE &amp;operator=(<span class="pl-k">const</span> D3D12_CPU_DESCRIPTOR_HANDLE &amp;other)</td>
      </tr>
      <tr>
        <td id="L1598" class="blob-num js-line-number" data-line-number="1598"></td>
        <td id="LC1598" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1599" class="blob-num js-line-number" data-line-number="1599"></td>
        <td id="LC1599" class="blob-code blob-code-inner js-file-line">        ptr = other.<span class="pl-smi">ptr</span>;</td>
      </tr>
      <tr>
        <td id="L1600" class="blob-num js-line-number" data-line-number="1600"></td>
        <td id="LC1600" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> *this;</td>
      </tr>
      <tr>
        <td id="L1601" class="blob-num js-line-number" data-line-number="1601"></td>
        <td id="LC1601" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1602" class="blob-num js-line-number" data-line-number="1602"></td>
        <td id="LC1602" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1603" class="blob-num js-line-number" data-line-number="1603"></td>
        <td id="LC1603" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitOffsetted</span>(_In_ <span class="pl-k">const</span> D3D12_CPU_DESCRIPTOR_HANDLE &amp;base, INT offsetScaledByIncrementSize)</td>
      </tr>
      <tr>
        <td id="L1604" class="blob-num js-line-number" data-line-number="1604"></td>
        <td id="LC1604" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1605" class="blob-num js-line-number" data-line-number="1605"></td>
        <td id="LC1605" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">InitOffsetted</span>(*this, base, offsetScaledByIncrementSize);</td>
      </tr>
      <tr>
        <td id="L1606" class="blob-num js-line-number" data-line-number="1606"></td>
        <td id="LC1606" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1607" class="blob-num js-line-number" data-line-number="1607"></td>
        <td id="LC1607" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1608" class="blob-num js-line-number" data-line-number="1608"></td>
        <td id="LC1608" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitOffsetted</span>(_In_ <span class="pl-k">const</span> D3D12_CPU_DESCRIPTOR_HANDLE &amp;base, INT offsetInDescriptors, UINT descriptorIncrementSize)</td>
      </tr>
      <tr>
        <td id="L1609" class="blob-num js-line-number" data-line-number="1609"></td>
        <td id="LC1609" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1610" class="blob-num js-line-number" data-line-number="1610"></td>
        <td id="LC1610" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">InitOffsetted</span>(*this, base, offsetInDescriptors, descriptorIncrementSize);</td>
      </tr>
      <tr>
        <td id="L1611" class="blob-num js-line-number" data-line-number="1611"></td>
        <td id="LC1611" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1612" class="blob-num js-line-number" data-line-number="1612"></td>
        <td id="LC1612" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1613" class="blob-num js-line-number" data-line-number="1613"></td>
        <td id="LC1613" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitOffsetted</span>(_Out_ D3D12_CPU_DESCRIPTOR_HANDLE &amp;handle, _In_ <span class="pl-k">const</span> D3D12_CPU_DESCRIPTOR_HANDLE &amp;base, INT offsetScaledByIncrementSize)</td>
      </tr>
      <tr>
        <td id="L1614" class="blob-num js-line-number" data-line-number="1614"></td>
        <td id="LC1614" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1615" class="blob-num js-line-number" data-line-number="1615"></td>
        <td id="LC1615" class="blob-code blob-code-inner js-file-line">        handle.<span class="pl-smi">ptr</span> = <span class="pl-c1">SIZE_T</span>(<span class="pl-c1">INT64</span>(base.<span class="pl-smi">ptr</span>) + <span class="pl-c1">INT64</span>(offsetScaledByIncrementSize));</td>
      </tr>
      <tr>
        <td id="L1616" class="blob-num js-line-number" data-line-number="1616"></td>
        <td id="LC1616" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1617" class="blob-num js-line-number" data-line-number="1617"></td>
        <td id="LC1617" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1618" class="blob-num js-line-number" data-line-number="1618"></td>
        <td id="LC1618" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitOffsetted</span>(_Out_ D3D12_CPU_DESCRIPTOR_HANDLE &amp;handle, _In_ <span class="pl-k">const</span> D3D12_CPU_DESCRIPTOR_HANDLE &amp;base, INT offsetInDescriptors, UINT descriptorIncrementSize)</td>
      </tr>
      <tr>
        <td id="L1619" class="blob-num js-line-number" data-line-number="1619"></td>
        <td id="LC1619" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1620" class="blob-num js-line-number" data-line-number="1620"></td>
        <td id="LC1620" class="blob-code blob-code-inner js-file-line">        handle.<span class="pl-smi">ptr</span> = <span class="pl-c1">SIZE_T</span>(<span class="pl-c1">INT64</span>(base.<span class="pl-smi">ptr</span>) + <span class="pl-c1">INT64</span>(offsetInDescriptors) * <span class="pl-c1">INT64</span>(descriptorIncrementSize));</td>
      </tr>
      <tr>
        <td id="L1621" class="blob-num js-line-number" data-line-number="1621"></td>
        <td id="LC1621" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1622" class="blob-num js-line-number" data-line-number="1622"></td>
        <td id="LC1622" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1623" class="blob-num js-line-number" data-line-number="1623"></td>
        <td id="LC1623" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1624" class="blob-num js-line-number" data-line-number="1624"></td>
        <td id="LC1624" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1625" class="blob-num js-line-number" data-line-number="1625"></td>
        <td id="LC1625" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_GPU_DESCRIPTOR_HANDLE : public D3D12_GPU_DESCRIPTOR_HANDLE</td>
      </tr>
      <tr>
        <td id="L1626" class="blob-num js-line-number" data-line-number="1626"></td>
        <td id="LC1626" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1627" class="blob-num js-line-number" data-line-number="1627"></td>
        <td id="LC1627" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_GPU_DESCRIPTOR_HANDLE</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L1628" class="blob-num js-line-number" data-line-number="1628"></td>
        <td id="LC1628" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_GPU_DESCRIPTOR_HANDLE</span>(<span class="pl-k">const</span> D3D12_GPU_DESCRIPTOR_HANDLE &amp;o) :</td>
      </tr>
      <tr>
        <td id="L1629" class="blob-num js-line-number" data-line-number="1629"></td>
        <td id="LC1629" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_GPU_DESCRIPTOR_HANDLE</span>(o)</td>
      </tr>
      <tr>
        <td id="L1630" class="blob-num js-line-number" data-line-number="1630"></td>
        <td id="LC1630" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L1631" class="blob-num js-line-number" data-line-number="1631"></td>
        <td id="LC1631" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_GPU_DESCRIPTOR_HANDLE</span>(CD3DX12_DEFAULT) { ptr = <span class="pl-c1">0</span>; }</td>
      </tr>
      <tr>
        <td id="L1632" class="blob-num js-line-number" data-line-number="1632"></td>
        <td id="LC1632" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_GPU_DESCRIPTOR_HANDLE</span>(_In_ <span class="pl-k">const</span> D3D12_GPU_DESCRIPTOR_HANDLE &amp;other, INT offsetScaledByIncrementSize)</td>
      </tr>
      <tr>
        <td id="L1633" class="blob-num js-line-number" data-line-number="1633"></td>
        <td id="LC1633" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1634" class="blob-num js-line-number" data-line-number="1634"></td>
        <td id="LC1634" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">InitOffsetted</span>(other, offsetScaledByIncrementSize);</td>
      </tr>
      <tr>
        <td id="L1635" class="blob-num js-line-number" data-line-number="1635"></td>
        <td id="LC1635" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1636" class="blob-num js-line-number" data-line-number="1636"></td>
        <td id="LC1636" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_GPU_DESCRIPTOR_HANDLE</span>(_In_ <span class="pl-k">const</span> D3D12_GPU_DESCRIPTOR_HANDLE &amp;other, INT offsetInDescriptors, UINT descriptorIncrementSize)</td>
      </tr>
      <tr>
        <td id="L1637" class="blob-num js-line-number" data-line-number="1637"></td>
        <td id="LC1637" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1638" class="blob-num js-line-number" data-line-number="1638"></td>
        <td id="LC1638" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">InitOffsetted</span>(other, offsetInDescriptors, descriptorIncrementSize);</td>
      </tr>
      <tr>
        <td id="L1639" class="blob-num js-line-number" data-line-number="1639"></td>
        <td id="LC1639" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1640" class="blob-num js-line-number" data-line-number="1640"></td>
        <td id="LC1640" class="blob-code blob-code-inner js-file-line">    CD3DX12_GPU_DESCRIPTOR_HANDLE&amp; <span class="pl-c1">Offset</span>(INT offsetInDescriptors, UINT descriptorIncrementSize)</td>
      </tr>
      <tr>
        <td id="L1641" class="blob-num js-line-number" data-line-number="1641"></td>
        <td id="LC1641" class="blob-code blob-code-inner js-file-line">    { </td>
      </tr>
      <tr>
        <td id="L1642" class="blob-num js-line-number" data-line-number="1642"></td>
        <td id="LC1642" class="blob-code blob-code-inner js-file-line">        ptr = <span class="pl-c1">UINT64</span>(<span class="pl-c1">INT64</span>(ptr) + <span class="pl-c1">INT64</span>(offsetInDescriptors) * <span class="pl-c1">INT64</span>(descriptorIncrementSize));</td>
      </tr>
      <tr>
        <td id="L1643" class="blob-num js-line-number" data-line-number="1643"></td>
        <td id="LC1643" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> *this;</td>
      </tr>
      <tr>
        <td id="L1644" class="blob-num js-line-number" data-line-number="1644"></td>
        <td id="LC1644" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1645" class="blob-num js-line-number" data-line-number="1645"></td>
        <td id="LC1645" class="blob-code blob-code-inner js-file-line">    CD3DX12_GPU_DESCRIPTOR_HANDLE&amp; <span class="pl-c1">Offset</span>(INT offsetScaledByIncrementSize) </td>
      </tr>
      <tr>
        <td id="L1646" class="blob-num js-line-number" data-line-number="1646"></td>
        <td id="LC1646" class="blob-code blob-code-inner js-file-line">    { </td>
      </tr>
      <tr>
        <td id="L1647" class="blob-num js-line-number" data-line-number="1647"></td>
        <td id="LC1647" class="blob-code blob-code-inner js-file-line">        ptr = <span class="pl-c1">UINT64</span>(<span class="pl-c1">INT64</span>(ptr) + <span class="pl-c1">INT64</span>(offsetScaledByIncrementSize));</td>
      </tr>
      <tr>
        <td id="L1648" class="blob-num js-line-number" data-line-number="1648"></td>
        <td id="LC1648" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> *this;</td>
      </tr>
      <tr>
        <td id="L1649" class="blob-num js-line-number" data-line-number="1649"></td>
        <td id="LC1649" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1650" class="blob-num js-line-number" data-line-number="1650"></td>
        <td id="LC1650" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">bool</span> operator==(_In_ <span class="pl-k">const</span> D3D12_GPU_DESCRIPTOR_HANDLE&amp; other) <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L1651" class="blob-num js-line-number" data-line-number="1651"></td>
        <td id="LC1651" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1652" class="blob-num js-line-number" data-line-number="1652"></td>
        <td id="LC1652" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> (ptr == other.<span class="pl-smi">ptr</span>);</td>
      </tr>
      <tr>
        <td id="L1653" class="blob-num js-line-number" data-line-number="1653"></td>
        <td id="LC1653" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1654" class="blob-num js-line-number" data-line-number="1654"></td>
        <td id="LC1654" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">bool</span> operator!=(_In_ <span class="pl-k">const</span> D3D12_GPU_DESCRIPTOR_HANDLE&amp; other) <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L1655" class="blob-num js-line-number" data-line-number="1655"></td>
        <td id="LC1655" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1656" class="blob-num js-line-number" data-line-number="1656"></td>
        <td id="LC1656" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> (ptr != other.<span class="pl-smi">ptr</span>);</td>
      </tr>
      <tr>
        <td id="L1657" class="blob-num js-line-number" data-line-number="1657"></td>
        <td id="LC1657" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1658" class="blob-num js-line-number" data-line-number="1658"></td>
        <td id="LC1658" class="blob-code blob-code-inner js-file-line">    CD3DX12_GPU_DESCRIPTOR_HANDLE &amp;operator=(<span class="pl-k">const</span> D3D12_GPU_DESCRIPTOR_HANDLE &amp;other)</td>
      </tr>
      <tr>
        <td id="L1659" class="blob-num js-line-number" data-line-number="1659"></td>
        <td id="LC1659" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1660" class="blob-num js-line-number" data-line-number="1660"></td>
        <td id="LC1660" class="blob-code blob-code-inner js-file-line">        ptr = other.<span class="pl-smi">ptr</span>;</td>
      </tr>
      <tr>
        <td id="L1661" class="blob-num js-line-number" data-line-number="1661"></td>
        <td id="LC1661" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> *this;</td>
      </tr>
      <tr>
        <td id="L1662" class="blob-num js-line-number" data-line-number="1662"></td>
        <td id="LC1662" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1663" class="blob-num js-line-number" data-line-number="1663"></td>
        <td id="LC1663" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1664" class="blob-num js-line-number" data-line-number="1664"></td>
        <td id="LC1664" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitOffsetted</span>(_In_ <span class="pl-k">const</span> D3D12_GPU_DESCRIPTOR_HANDLE &amp;base, INT offsetScaledByIncrementSize)</td>
      </tr>
      <tr>
        <td id="L1665" class="blob-num js-line-number" data-line-number="1665"></td>
        <td id="LC1665" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1666" class="blob-num js-line-number" data-line-number="1666"></td>
        <td id="LC1666" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">InitOffsetted</span>(*this, base, offsetScaledByIncrementSize);</td>
      </tr>
      <tr>
        <td id="L1667" class="blob-num js-line-number" data-line-number="1667"></td>
        <td id="LC1667" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1668" class="blob-num js-line-number" data-line-number="1668"></td>
        <td id="LC1668" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1669" class="blob-num js-line-number" data-line-number="1669"></td>
        <td id="LC1669" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitOffsetted</span>(_In_ <span class="pl-k">const</span> D3D12_GPU_DESCRIPTOR_HANDLE &amp;base, INT offsetInDescriptors, UINT descriptorIncrementSize)</td>
      </tr>
      <tr>
        <td id="L1670" class="blob-num js-line-number" data-line-number="1670"></td>
        <td id="LC1670" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1671" class="blob-num js-line-number" data-line-number="1671"></td>
        <td id="LC1671" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">InitOffsetted</span>(*this, base, offsetInDescriptors, descriptorIncrementSize);</td>
      </tr>
      <tr>
        <td id="L1672" class="blob-num js-line-number" data-line-number="1672"></td>
        <td id="LC1672" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1673" class="blob-num js-line-number" data-line-number="1673"></td>
        <td id="LC1673" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1674" class="blob-num js-line-number" data-line-number="1674"></td>
        <td id="LC1674" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitOffsetted</span>(_Out_ D3D12_GPU_DESCRIPTOR_HANDLE &amp;handle, _In_ <span class="pl-k">const</span> D3D12_GPU_DESCRIPTOR_HANDLE &amp;base, INT offsetScaledByIncrementSize)</td>
      </tr>
      <tr>
        <td id="L1675" class="blob-num js-line-number" data-line-number="1675"></td>
        <td id="LC1675" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1676" class="blob-num js-line-number" data-line-number="1676"></td>
        <td id="LC1676" class="blob-code blob-code-inner js-file-line">        handle.<span class="pl-smi">ptr</span> = <span class="pl-c1">UINT64</span>(<span class="pl-c1">INT64</span>(base.<span class="pl-smi">ptr</span>) + <span class="pl-c1">INT64</span>(offsetScaledByIncrementSize));</td>
      </tr>
      <tr>
        <td id="L1677" class="blob-num js-line-number" data-line-number="1677"></td>
        <td id="LC1677" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1678" class="blob-num js-line-number" data-line-number="1678"></td>
        <td id="LC1678" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1679" class="blob-num js-line-number" data-line-number="1679"></td>
        <td id="LC1679" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-smi">InitOffsetted</span>(_Out_ D3D12_GPU_DESCRIPTOR_HANDLE &amp;handle, _In_ <span class="pl-k">const</span> D3D12_GPU_DESCRIPTOR_HANDLE &amp;base, INT offsetInDescriptors, UINT descriptorIncrementSize)</td>
      </tr>
      <tr>
        <td id="L1680" class="blob-num js-line-number" data-line-number="1680"></td>
        <td id="LC1680" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1681" class="blob-num js-line-number" data-line-number="1681"></td>
        <td id="LC1681" class="blob-code blob-code-inner js-file-line">        handle.<span class="pl-smi">ptr</span> = <span class="pl-c1">UINT64</span>(<span class="pl-c1">INT64</span>(base.<span class="pl-smi">ptr</span>) + <span class="pl-c1">INT64</span>(offsetInDescriptors) * <span class="pl-c1">INT64</span>(descriptorIncrementSize));</td>
      </tr>
      <tr>
        <td id="L1682" class="blob-num js-line-number" data-line-number="1682"></td>
        <td id="LC1682" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1683" class="blob-num js-line-number" data-line-number="1683"></td>
        <td id="LC1683" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1684" class="blob-num js-line-number" data-line-number="1684"></td>
        <td id="LC1684" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1685" class="blob-num js-line-number" data-line-number="1685"></td>
        <td id="LC1685" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1686" class="blob-num js-line-number" data-line-number="1686"></td>
        <td id="LC1686" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> UINT <span class="pl-en">D3D12CalcSubresource</span>( UINT MipSlice, UINT ArraySlice, UINT PlaneSlice, UINT MipLevels, UINT ArraySize )</td>
      </tr>
      <tr>
        <td id="L1687" class="blob-num js-line-number" data-line-number="1687"></td>
        <td id="LC1687" class="blob-code blob-code-inner js-file-line">{ </td>
      </tr>
      <tr>
        <td id="L1688" class="blob-num js-line-number" data-line-number="1688"></td>
        <td id="LC1688" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> MipSlice + ArraySlice * MipLevels + PlaneSlice * MipLevels * ArraySize; </td>
      </tr>
      <tr>
        <td id="L1689" class="blob-num js-line-number" data-line-number="1689"></td>
        <td id="LC1689" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1690" class="blob-num js-line-number" data-line-number="1690"></td>
        <td id="LC1690" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1691" class="blob-num js-line-number" data-line-number="1691"></td>
        <td id="LC1691" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1692" class="blob-num js-line-number" data-line-number="1692"></td>
        <td id="LC1692" class="blob-code blob-code-inner js-file-line">template &lt;typename T, typename U, typename V&gt;</td>
      </tr>
      <tr>
        <td id="L1693" class="blob-num js-line-number" data-line-number="1693"></td>
        <td id="LC1693" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">D3D12DecomposeSubresource</span>( UINT Subresource, UINT MipLevels, UINT ArraySize, _Out_ T&amp; MipSlice, _Out_ U&amp; ArraySlice, _Out_ V&amp; PlaneSlice )</td>
      </tr>
      <tr>
        <td id="L1694" class="blob-num js-line-number" data-line-number="1694"></td>
        <td id="LC1694" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1695" class="blob-num js-line-number" data-line-number="1695"></td>
        <td id="LC1695" class="blob-code blob-code-inner js-file-line">    MipSlice = static_cast&lt;T&gt;(Subresource % MipLevels);</td>
      </tr>
      <tr>
        <td id="L1696" class="blob-num js-line-number" data-line-number="1696"></td>
        <td id="LC1696" class="blob-code blob-code-inner js-file-line">    ArraySlice = static_cast&lt;U&gt;((Subresource / MipLevels) % ArraySize);</td>
      </tr>
      <tr>
        <td id="L1697" class="blob-num js-line-number" data-line-number="1697"></td>
        <td id="LC1697" class="blob-code blob-code-inner js-file-line">    PlaneSlice = static_cast&lt;V&gt;(Subresource / (MipLevels * ArraySize));</td>
      </tr>
      <tr>
        <td id="L1698" class="blob-num js-line-number" data-line-number="1698"></td>
        <td id="LC1698" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1699" class="blob-num js-line-number" data-line-number="1699"></td>
        <td id="LC1699" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1700" class="blob-num js-line-number" data-line-number="1700"></td>
        <td id="LC1700" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1701" class="blob-num js-line-number" data-line-number="1701"></td>
        <td id="LC1701" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> UINT8 <span class="pl-en">D3D12GetFormatPlaneCount</span>(</td>
      </tr>
      <tr>
        <td id="L1702" class="blob-num js-line-number" data-line-number="1702"></td>
        <td id="LC1702" class="blob-code blob-code-inner js-file-line">    _In_ ID3D12Device* pDevice,</td>
      </tr>
      <tr>
        <td id="L1703" class="blob-num js-line-number" data-line-number="1703"></td>
        <td id="LC1703" class="blob-code blob-code-inner js-file-line">    DXGI_FORMAT Format</td>
      </tr>
      <tr>
        <td id="L1704" class="blob-num js-line-number" data-line-number="1704"></td>
        <td id="LC1704" class="blob-code blob-code-inner js-file-line">    )</td>
      </tr>
      <tr>
        <td id="L1705" class="blob-num js-line-number" data-line-number="1705"></td>
        <td id="LC1705" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1706" class="blob-num js-line-number" data-line-number="1706"></td>
        <td id="LC1706" class="blob-code blob-code-inner js-file-line">    D3D12_FEATURE_DATA_FORMAT_INFO formatInfo = { Format, <span class="pl-c1">0</span> };</td>
      </tr>
      <tr>
        <td id="L1707" class="blob-num js-line-number" data-line-number="1707"></td>
        <td id="LC1707" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (<span class="pl-c1">FAILED</span>(pDevice-&gt;<span class="pl-c1">CheckFeatureSupport</span>(D3D12_FEATURE_FORMAT_INFO, &amp;formatInfo, <span class="pl-k">sizeof</span>(formatInfo))))</td>
      </tr>
      <tr>
        <td id="L1708" class="blob-num js-line-number" data-line-number="1708"></td>
        <td id="LC1708" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1709" class="blob-num js-line-number" data-line-number="1709"></td>
        <td id="LC1709" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1710" class="blob-num js-line-number" data-line-number="1710"></td>
        <td id="LC1710" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1711" class="blob-num js-line-number" data-line-number="1711"></td>
        <td id="LC1711" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> formatInfo.<span class="pl-smi">PlaneCount</span>;</td>
      </tr>
      <tr>
        <td id="L1712" class="blob-num js-line-number" data-line-number="1712"></td>
        <td id="LC1712" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1713" class="blob-num js-line-number" data-line-number="1713"></td>
        <td id="LC1713" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1714" class="blob-num js-line-number" data-line-number="1714"></td>
        <td id="LC1714" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1715" class="blob-num js-line-number" data-line-number="1715"></td>
        <td id="LC1715" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_RESOURCE_DESC : public D3D12_RESOURCE_DESC</td>
      </tr>
      <tr>
        <td id="L1716" class="blob-num js-line-number" data-line-number="1716"></td>
        <td id="LC1716" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1717" class="blob-num js-line-number" data-line-number="1717"></td>
        <td id="LC1717" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_RESOURCE_DESC</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L1718" class="blob-num js-line-number" data-line-number="1718"></td>
        <td id="LC1718" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_RESOURCE_DESC</span>( <span class="pl-k">const</span> D3D12_RESOURCE_DESC&amp; o ) :</td>
      </tr>
      <tr>
        <td id="L1719" class="blob-num js-line-number" data-line-number="1719"></td>
        <td id="LC1719" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_RESOURCE_DESC</span>( o )</td>
      </tr>
      <tr>
        <td id="L1720" class="blob-num js-line-number" data-line-number="1720"></td>
        <td id="LC1720" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L1721" class="blob-num js-line-number" data-line-number="1721"></td>
        <td id="LC1721" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_RESOURCE_DESC</span>( </td>
      </tr>
      <tr>
        <td id="L1722" class="blob-num js-line-number" data-line-number="1722"></td>
        <td id="LC1722" class="blob-code blob-code-inner js-file-line">        D3D12_RESOURCE_DIMENSION dimension,</td>
      </tr>
      <tr>
        <td id="L1723" class="blob-num js-line-number" data-line-number="1723"></td>
        <td id="LC1723" class="blob-code blob-code-inner js-file-line">        UINT64 alignment,</td>
      </tr>
      <tr>
        <td id="L1724" class="blob-num js-line-number" data-line-number="1724"></td>
        <td id="LC1724" class="blob-code blob-code-inner js-file-line">        UINT64 width,</td>
      </tr>
      <tr>
        <td id="L1725" class="blob-num js-line-number" data-line-number="1725"></td>
        <td id="LC1725" class="blob-code blob-code-inner js-file-line">        UINT height,</td>
      </tr>
      <tr>
        <td id="L1726" class="blob-num js-line-number" data-line-number="1726"></td>
        <td id="LC1726" class="blob-code blob-code-inner js-file-line">        UINT16 depthOrArraySize,</td>
      </tr>
      <tr>
        <td id="L1727" class="blob-num js-line-number" data-line-number="1727"></td>
        <td id="LC1727" class="blob-code blob-code-inner js-file-line">        UINT16 mipLevels,</td>
      </tr>
      <tr>
        <td id="L1728" class="blob-num js-line-number" data-line-number="1728"></td>
        <td id="LC1728" class="blob-code blob-code-inner js-file-line">        DXGI_FORMAT format,</td>
      </tr>
      <tr>
        <td id="L1729" class="blob-num js-line-number" data-line-number="1729"></td>
        <td id="LC1729" class="blob-code blob-code-inner js-file-line">        UINT sampleCount,</td>
      </tr>
      <tr>
        <td id="L1730" class="blob-num js-line-number" data-line-number="1730"></td>
        <td id="LC1730" class="blob-code blob-code-inner js-file-line">        UINT sampleQuality,</td>
      </tr>
      <tr>
        <td id="L1731" class="blob-num js-line-number" data-line-number="1731"></td>
        <td id="LC1731" class="blob-code blob-code-inner js-file-line">        D3D12_TEXTURE_LAYOUT layout,</td>
      </tr>
      <tr>
        <td id="L1732" class="blob-num js-line-number" data-line-number="1732"></td>
        <td id="LC1732" class="blob-code blob-code-inner js-file-line">        D3D12_RESOURCE_FLAGS flags )</td>
      </tr>
      <tr>
        <td id="L1733" class="blob-num js-line-number" data-line-number="1733"></td>
        <td id="LC1733" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1734" class="blob-num js-line-number" data-line-number="1734"></td>
        <td id="LC1734" class="blob-code blob-code-inner js-file-line">        Dimension = dimension;</td>
      </tr>
      <tr>
        <td id="L1735" class="blob-num js-line-number" data-line-number="1735"></td>
        <td id="LC1735" class="blob-code blob-code-inner js-file-line">        Alignment = alignment;</td>
      </tr>
      <tr>
        <td id="L1736" class="blob-num js-line-number" data-line-number="1736"></td>
        <td id="LC1736" class="blob-code blob-code-inner js-file-line">        Width = width;</td>
      </tr>
      <tr>
        <td id="L1737" class="blob-num js-line-number" data-line-number="1737"></td>
        <td id="LC1737" class="blob-code blob-code-inner js-file-line">        Height = height;</td>
      </tr>
      <tr>
        <td id="L1738" class="blob-num js-line-number" data-line-number="1738"></td>
        <td id="LC1738" class="blob-code blob-code-inner js-file-line">        DepthOrArraySize = depthOrArraySize;</td>
      </tr>
      <tr>
        <td id="L1739" class="blob-num js-line-number" data-line-number="1739"></td>
        <td id="LC1739" class="blob-code blob-code-inner js-file-line">        MipLevels = mipLevels;</td>
      </tr>
      <tr>
        <td id="L1740" class="blob-num js-line-number" data-line-number="1740"></td>
        <td id="LC1740" class="blob-code blob-code-inner js-file-line">        Format = format;</td>
      </tr>
      <tr>
        <td id="L1741" class="blob-num js-line-number" data-line-number="1741"></td>
        <td id="LC1741" class="blob-code blob-code-inner js-file-line">        SampleDesc.<span class="pl-smi">Count</span> = sampleCount;</td>
      </tr>
      <tr>
        <td id="L1742" class="blob-num js-line-number" data-line-number="1742"></td>
        <td id="LC1742" class="blob-code blob-code-inner js-file-line">        SampleDesc.<span class="pl-smi">Quality</span> = sampleQuality;</td>
      </tr>
      <tr>
        <td id="L1743" class="blob-num js-line-number" data-line-number="1743"></td>
        <td id="LC1743" class="blob-code blob-code-inner js-file-line">        Layout = layout;</td>
      </tr>
      <tr>
        <td id="L1744" class="blob-num js-line-number" data-line-number="1744"></td>
        <td id="LC1744" class="blob-code blob-code-inner js-file-line">        Flags = flags;</td>
      </tr>
      <tr>
        <td id="L1745" class="blob-num js-line-number" data-line-number="1745"></td>
        <td id="LC1745" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1746" class="blob-num js-line-number" data-line-number="1746"></td>
        <td id="LC1746" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> CD3DX12_RESOURCE_DESC <span class="pl-smi">Buffer</span>( </td>
      </tr>
      <tr>
        <td id="L1747" class="blob-num js-line-number" data-line-number="1747"></td>
        <td id="LC1747" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">const</span> D3D12_RESOURCE_ALLOCATION_INFO&amp; resAllocInfo,</td>
      </tr>
      <tr>
        <td id="L1748" class="blob-num js-line-number" data-line-number="1748"></td>
        <td id="LC1748" class="blob-code blob-code-inner js-file-line">        D3D12_RESOURCE_FLAGS flags = D3D12_RESOURCE_FLAG_NONE )</td>
      </tr>
      <tr>
        <td id="L1749" class="blob-num js-line-number" data-line-number="1749"></td>
        <td id="LC1749" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1750" class="blob-num js-line-number" data-line-number="1750"></td>
        <td id="LC1750" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> <span class="pl-c1">CD3DX12_RESOURCE_DESC</span>( D3D12_RESOURCE_DIMENSION_BUFFER, resAllocInfo.<span class="pl-smi">Alignment</span>, resAllocInfo.<span class="pl-smi">SizeInBytes</span>, </td>
      </tr>
      <tr>
        <td id="L1751" class="blob-num js-line-number" data-line-number="1751"></td>
        <td id="LC1751" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">1</span>, <span class="pl-c1">1</span>, <span class="pl-c1">1</span>, DXGI_FORMAT_UNKNOWN, <span class="pl-c1">1</span>, <span class="pl-c1">0</span>, D3D12_TEXTURE_LAYOUT_ROW_MAJOR, flags );</td>
      </tr>
      <tr>
        <td id="L1752" class="blob-num js-line-number" data-line-number="1752"></td>
        <td id="LC1752" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1753" class="blob-num js-line-number" data-line-number="1753"></td>
        <td id="LC1753" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> CD3DX12_RESOURCE_DESC <span class="pl-smi">Buffer</span>( </td>
      </tr>
      <tr>
        <td id="L1754" class="blob-num js-line-number" data-line-number="1754"></td>
        <td id="LC1754" class="blob-code blob-code-inner js-file-line">        UINT64 width,</td>
      </tr>
      <tr>
        <td id="L1755" class="blob-num js-line-number" data-line-number="1755"></td>
        <td id="LC1755" class="blob-code blob-code-inner js-file-line">        D3D12_RESOURCE_FLAGS flags = D3D12_RESOURCE_FLAG_NONE,</td>
      </tr>
      <tr>
        <td id="L1756" class="blob-num js-line-number" data-line-number="1756"></td>
        <td id="LC1756" class="blob-code blob-code-inner js-file-line">        UINT64 alignment = <span class="pl-c1">0</span> )</td>
      </tr>
      <tr>
        <td id="L1757" class="blob-num js-line-number" data-line-number="1757"></td>
        <td id="LC1757" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1758" class="blob-num js-line-number" data-line-number="1758"></td>
        <td id="LC1758" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> <span class="pl-c1">CD3DX12_RESOURCE_DESC</span>( D3D12_RESOURCE_DIMENSION_BUFFER, alignment, width, <span class="pl-c1">1</span>, <span class="pl-c1">1</span>, <span class="pl-c1">1</span>, </td>
      </tr>
      <tr>
        <td id="L1759" class="blob-num js-line-number" data-line-number="1759"></td>
        <td id="LC1759" class="blob-code blob-code-inner js-file-line">            DXGI_FORMAT_UNKNOWN, <span class="pl-c1">1</span>, <span class="pl-c1">0</span>, D3D12_TEXTURE_LAYOUT_ROW_MAJOR, flags );</td>
      </tr>
      <tr>
        <td id="L1760" class="blob-num js-line-number" data-line-number="1760"></td>
        <td id="LC1760" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1761" class="blob-num js-line-number" data-line-number="1761"></td>
        <td id="LC1761" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> CD3DX12_RESOURCE_DESC <span class="pl-smi">Tex1D</span>( </td>
      </tr>
      <tr>
        <td id="L1762" class="blob-num js-line-number" data-line-number="1762"></td>
        <td id="LC1762" class="blob-code blob-code-inner js-file-line">        DXGI_FORMAT format,</td>
      </tr>
      <tr>
        <td id="L1763" class="blob-num js-line-number" data-line-number="1763"></td>
        <td id="LC1763" class="blob-code blob-code-inner js-file-line">        UINT64 width,</td>
      </tr>
      <tr>
        <td id="L1764" class="blob-num js-line-number" data-line-number="1764"></td>
        <td id="LC1764" class="blob-code blob-code-inner js-file-line">        UINT16 arraySize = <span class="pl-c1">1</span>,</td>
      </tr>
      <tr>
        <td id="L1765" class="blob-num js-line-number" data-line-number="1765"></td>
        <td id="LC1765" class="blob-code blob-code-inner js-file-line">        UINT16 mipLevels = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1766" class="blob-num js-line-number" data-line-number="1766"></td>
        <td id="LC1766" class="blob-code blob-code-inner js-file-line">        D3D12_RESOURCE_FLAGS flags = D3D12_RESOURCE_FLAG_NONE,</td>
      </tr>
      <tr>
        <td id="L1767" class="blob-num js-line-number" data-line-number="1767"></td>
        <td id="LC1767" class="blob-code blob-code-inner js-file-line">        D3D12_TEXTURE_LAYOUT layout = D3D12_TEXTURE_LAYOUT_UNKNOWN,</td>
      </tr>
      <tr>
        <td id="L1768" class="blob-num js-line-number" data-line-number="1768"></td>
        <td id="LC1768" class="blob-code blob-code-inner js-file-line">        UINT64 alignment = <span class="pl-c1">0</span> )</td>
      </tr>
      <tr>
        <td id="L1769" class="blob-num js-line-number" data-line-number="1769"></td>
        <td id="LC1769" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1770" class="blob-num js-line-number" data-line-number="1770"></td>
        <td id="LC1770" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> <span class="pl-c1">CD3DX12_RESOURCE_DESC</span>( D3D12_RESOURCE_DIMENSION_TEXTURE1D, alignment, width, <span class="pl-c1">1</span>, arraySize, </td>
      </tr>
      <tr>
        <td id="L1771" class="blob-num js-line-number" data-line-number="1771"></td>
        <td id="LC1771" class="blob-code blob-code-inner js-file-line">            mipLevels, format, <span class="pl-c1">1</span>, <span class="pl-c1">0</span>, layout, flags );</td>
      </tr>
      <tr>
        <td id="L1772" class="blob-num js-line-number" data-line-number="1772"></td>
        <td id="LC1772" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1773" class="blob-num js-line-number" data-line-number="1773"></td>
        <td id="LC1773" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> CD3DX12_RESOURCE_DESC <span class="pl-smi">Tex2D</span>( </td>
      </tr>
      <tr>
        <td id="L1774" class="blob-num js-line-number" data-line-number="1774"></td>
        <td id="LC1774" class="blob-code blob-code-inner js-file-line">        DXGI_FORMAT format,</td>
      </tr>
      <tr>
        <td id="L1775" class="blob-num js-line-number" data-line-number="1775"></td>
        <td id="LC1775" class="blob-code blob-code-inner js-file-line">        UINT64 width,</td>
      </tr>
      <tr>
        <td id="L1776" class="blob-num js-line-number" data-line-number="1776"></td>
        <td id="LC1776" class="blob-code blob-code-inner js-file-line">        UINT height,</td>
      </tr>
      <tr>
        <td id="L1777" class="blob-num js-line-number" data-line-number="1777"></td>
        <td id="LC1777" class="blob-code blob-code-inner js-file-line">        UINT16 arraySize = <span class="pl-c1">1</span>,</td>
      </tr>
      <tr>
        <td id="L1778" class="blob-num js-line-number" data-line-number="1778"></td>
        <td id="LC1778" class="blob-code blob-code-inner js-file-line">        UINT16 mipLevels = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1779" class="blob-num js-line-number" data-line-number="1779"></td>
        <td id="LC1779" class="blob-code blob-code-inner js-file-line">        UINT sampleCount = <span class="pl-c1">1</span>,</td>
      </tr>
      <tr>
        <td id="L1780" class="blob-num js-line-number" data-line-number="1780"></td>
        <td id="LC1780" class="blob-code blob-code-inner js-file-line">        UINT sampleQuality = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1781" class="blob-num js-line-number" data-line-number="1781"></td>
        <td id="LC1781" class="blob-code blob-code-inner js-file-line">        D3D12_RESOURCE_FLAGS flags = D3D12_RESOURCE_FLAG_NONE,</td>
      </tr>
      <tr>
        <td id="L1782" class="blob-num js-line-number" data-line-number="1782"></td>
        <td id="LC1782" class="blob-code blob-code-inner js-file-line">        D3D12_TEXTURE_LAYOUT layout = D3D12_TEXTURE_LAYOUT_UNKNOWN,</td>
      </tr>
      <tr>
        <td id="L1783" class="blob-num js-line-number" data-line-number="1783"></td>
        <td id="LC1783" class="blob-code blob-code-inner js-file-line">        UINT64 alignment = <span class="pl-c1">0</span> )</td>
      </tr>
      <tr>
        <td id="L1784" class="blob-num js-line-number" data-line-number="1784"></td>
        <td id="LC1784" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1785" class="blob-num js-line-number" data-line-number="1785"></td>
        <td id="LC1785" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> <span class="pl-c1">CD3DX12_RESOURCE_DESC</span>( D3D12_RESOURCE_DIMENSION_TEXTURE2D, alignment, width, height, arraySize, </td>
      </tr>
      <tr>
        <td id="L1786" class="blob-num js-line-number" data-line-number="1786"></td>
        <td id="LC1786" class="blob-code blob-code-inner js-file-line">            mipLevels, format, sampleCount, sampleQuality, layout, flags );</td>
      </tr>
      <tr>
        <td id="L1787" class="blob-num js-line-number" data-line-number="1787"></td>
        <td id="LC1787" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1788" class="blob-num js-line-number" data-line-number="1788"></td>
        <td id="LC1788" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> CD3DX12_RESOURCE_DESC <span class="pl-smi">Tex3D</span>( </td>
      </tr>
      <tr>
        <td id="L1789" class="blob-num js-line-number" data-line-number="1789"></td>
        <td id="LC1789" class="blob-code blob-code-inner js-file-line">        DXGI_FORMAT format,</td>
      </tr>
      <tr>
        <td id="L1790" class="blob-num js-line-number" data-line-number="1790"></td>
        <td id="LC1790" class="blob-code blob-code-inner js-file-line">        UINT64 width,</td>
      </tr>
      <tr>
        <td id="L1791" class="blob-num js-line-number" data-line-number="1791"></td>
        <td id="LC1791" class="blob-code blob-code-inner js-file-line">        UINT height,</td>
      </tr>
      <tr>
        <td id="L1792" class="blob-num js-line-number" data-line-number="1792"></td>
        <td id="LC1792" class="blob-code blob-code-inner js-file-line">        UINT16 depth,</td>
      </tr>
      <tr>
        <td id="L1793" class="blob-num js-line-number" data-line-number="1793"></td>
        <td id="LC1793" class="blob-code blob-code-inner js-file-line">        UINT16 mipLevels = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1794" class="blob-num js-line-number" data-line-number="1794"></td>
        <td id="LC1794" class="blob-code blob-code-inner js-file-line">        D3D12_RESOURCE_FLAGS flags = D3D12_RESOURCE_FLAG_NONE,</td>
      </tr>
      <tr>
        <td id="L1795" class="blob-num js-line-number" data-line-number="1795"></td>
        <td id="LC1795" class="blob-code blob-code-inner js-file-line">        D3D12_TEXTURE_LAYOUT layout = D3D12_TEXTURE_LAYOUT_UNKNOWN,</td>
      </tr>
      <tr>
        <td id="L1796" class="blob-num js-line-number" data-line-number="1796"></td>
        <td id="LC1796" class="blob-code blob-code-inner js-file-line">        UINT64 alignment = <span class="pl-c1">0</span> )</td>
      </tr>
      <tr>
        <td id="L1797" class="blob-num js-line-number" data-line-number="1797"></td>
        <td id="LC1797" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1798" class="blob-num js-line-number" data-line-number="1798"></td>
        <td id="LC1798" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> <span class="pl-c1">CD3DX12_RESOURCE_DESC</span>( D3D12_RESOURCE_DIMENSION_TEXTURE3D, alignment, width, height, depth, </td>
      </tr>
      <tr>
        <td id="L1799" class="blob-num js-line-number" data-line-number="1799"></td>
        <td id="LC1799" class="blob-code blob-code-inner js-file-line">            mipLevels, format, <span class="pl-c1">1</span>, <span class="pl-c1">0</span>, layout, flags );</td>
      </tr>
      <tr>
        <td id="L1800" class="blob-num js-line-number" data-line-number="1800"></td>
        <td id="LC1800" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1801" class="blob-num js-line-number" data-line-number="1801"></td>
        <td id="LC1801" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> UINT16 <span class="pl-smi">Depth</span>() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L1802" class="blob-num js-line-number" data-line-number="1802"></td>
        <td id="LC1802" class="blob-code blob-code-inner js-file-line">    { <span class="pl-k">return</span> (Dimension == D3D12_RESOURCE_DIMENSION_TEXTURE3D ? DepthOrArraySize : <span class="pl-c1">1</span>); }</td>
      </tr>
      <tr>
        <td id="L1803" class="blob-num js-line-number" data-line-number="1803"></td>
        <td id="LC1803" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> UINT16 <span class="pl-smi">ArraySize</span>() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L1804" class="blob-num js-line-number" data-line-number="1804"></td>
        <td id="LC1804" class="blob-code blob-code-inner js-file-line">    { <span class="pl-k">return</span> (Dimension != D3D12_RESOURCE_DIMENSION_TEXTURE3D ? DepthOrArraySize : <span class="pl-c1">1</span>); }</td>
      </tr>
      <tr>
        <td id="L1805" class="blob-num js-line-number" data-line-number="1805"></td>
        <td id="LC1805" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> UINT8 <span class="pl-smi">PlaneCount</span>(_In_ ID3D12Device* pDevice) <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L1806" class="blob-num js-line-number" data-line-number="1806"></td>
        <td id="LC1806" class="blob-code blob-code-inner js-file-line">    { <span class="pl-k">return</span> <span class="pl-c1">D3D12GetFormatPlaneCount</span>(pDevice, Format); }</td>
      </tr>
      <tr>
        <td id="L1807" class="blob-num js-line-number" data-line-number="1807"></td>
        <td id="LC1807" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> UINT <span class="pl-smi">Subresources</span>(_In_ ID3D12Device* pDevice) <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L1808" class="blob-num js-line-number" data-line-number="1808"></td>
        <td id="LC1808" class="blob-code blob-code-inner js-file-line">    { <span class="pl-k">return</span> MipLevels * <span class="pl-c1">ArraySize</span>() * <span class="pl-c1">PlaneCount</span>(pDevice); }</td>
      </tr>
      <tr>
        <td id="L1809" class="blob-num js-line-number" data-line-number="1809"></td>
        <td id="LC1809" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> UINT <span class="pl-smi">CalcSubresource</span>(UINT MipSlice, UINT ArraySlice, UINT PlaneSlice)</td>
      </tr>
      <tr>
        <td id="L1810" class="blob-num js-line-number" data-line-number="1810"></td>
        <td id="LC1810" class="blob-code blob-code-inner js-file-line">    { <span class="pl-k">return</span> <span class="pl-c1">D3D12CalcSubresource</span>(MipSlice, ArraySlice, PlaneSlice, MipLevels, <span class="pl-c1">ArraySize</span>()); }</td>
      </tr>
      <tr>
        <td id="L1811" class="blob-num js-line-number" data-line-number="1811"></td>
        <td id="LC1811" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1812" class="blob-num js-line-number" data-line-number="1812"></td>
        <td id="LC1812" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">bool</span> operator==( <span class="pl-k">const</span> D3D12_RESOURCE_DESC&amp; l, <span class="pl-k">const</span> D3D12_RESOURCE_DESC&amp; r )</td>
      </tr>
      <tr>
        <td id="L1813" class="blob-num js-line-number" data-line-number="1813"></td>
        <td id="LC1813" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1814" class="blob-num js-line-number" data-line-number="1814"></td>
        <td id="LC1814" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> l.<span class="pl-smi">Dimension</span> == r.<span class="pl-smi">Dimension</span> &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L1815" class="blob-num js-line-number" data-line-number="1815"></td>
        <td id="LC1815" class="blob-code blob-code-inner js-file-line">        l.<span class="pl-smi">Alignment</span> == r.<span class="pl-smi">Alignment</span> &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L1816" class="blob-num js-line-number" data-line-number="1816"></td>
        <td id="LC1816" class="blob-code blob-code-inner js-file-line">        l.<span class="pl-smi">Width</span> == r.<span class="pl-smi">Width</span> &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L1817" class="blob-num js-line-number" data-line-number="1817"></td>
        <td id="LC1817" class="blob-code blob-code-inner js-file-line">        l.<span class="pl-smi">Height</span> == r.<span class="pl-smi">Height</span> &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L1818" class="blob-num js-line-number" data-line-number="1818"></td>
        <td id="LC1818" class="blob-code blob-code-inner js-file-line">        l.<span class="pl-smi">DepthOrArraySize</span> == r.<span class="pl-smi">DepthOrArraySize</span> &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L1819" class="blob-num js-line-number" data-line-number="1819"></td>
        <td id="LC1819" class="blob-code blob-code-inner js-file-line">        l.<span class="pl-smi">MipLevels</span> == r.<span class="pl-smi">MipLevels</span> &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L1820" class="blob-num js-line-number" data-line-number="1820"></td>
        <td id="LC1820" class="blob-code blob-code-inner js-file-line">        l.<span class="pl-smi">Format</span> == r.<span class="pl-smi">Format</span> &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L1821" class="blob-num js-line-number" data-line-number="1821"></td>
        <td id="LC1821" class="blob-code blob-code-inner js-file-line">        l.<span class="pl-smi">SampleDesc</span>.<span class="pl-smi">Count</span> == r.<span class="pl-smi">SampleDesc</span>.<span class="pl-smi">Count</span> &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L1822" class="blob-num js-line-number" data-line-number="1822"></td>
        <td id="LC1822" class="blob-code blob-code-inner js-file-line">        l.<span class="pl-smi">SampleDesc</span>.<span class="pl-smi">Quality</span> == r.<span class="pl-smi">SampleDesc</span>.<span class="pl-smi">Quality</span> &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L1823" class="blob-num js-line-number" data-line-number="1823"></td>
        <td id="LC1823" class="blob-code blob-code-inner js-file-line">        l.<span class="pl-smi">Layout</span> == r.<span class="pl-smi">Layout</span> &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L1824" class="blob-num js-line-number" data-line-number="1824"></td>
        <td id="LC1824" class="blob-code blob-code-inner js-file-line">        l.<span class="pl-smi">Flags</span> == r.<span class="pl-smi">Flags</span>;</td>
      </tr>
      <tr>
        <td id="L1825" class="blob-num js-line-number" data-line-number="1825"></td>
        <td id="LC1825" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1826" class="blob-num js-line-number" data-line-number="1826"></td>
        <td id="LC1826" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">bool</span> operator!=( <span class="pl-k">const</span> D3D12_RESOURCE_DESC&amp; l, <span class="pl-k">const</span> D3D12_RESOURCE_DESC&amp; r )</td>
      </tr>
      <tr>
        <td id="L1827" class="blob-num js-line-number" data-line-number="1827"></td>
        <td id="LC1827" class="blob-code blob-code-inner js-file-line">{ <span class="pl-k">return</span> !( l == r ); }</td>
      </tr>
      <tr>
        <td id="L1828" class="blob-num js-line-number" data-line-number="1828"></td>
        <td id="LC1828" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1829" class="blob-num js-line-number" data-line-number="1829"></td>
        <td id="LC1829" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1830" class="blob-num js-line-number" data-line-number="1830"></td>
        <td id="LC1830" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_VIEW_INSTANCING_DESC : public D3D12_VIEW_INSTANCING_DESC</td>
      </tr>
      <tr>
        <td id="L1831" class="blob-num js-line-number" data-line-number="1831"></td>
        <td id="LC1831" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1832" class="blob-num js-line-number" data-line-number="1832"></td>
        <td id="LC1832" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_VIEW_INSTANCING_DESC</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L1833" class="blob-num js-line-number" data-line-number="1833"></td>
        <td id="LC1833" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_VIEW_INSTANCING_DESC</span>( <span class="pl-k">const</span> D3D12_VIEW_INSTANCING_DESC&amp; o ) :</td>
      </tr>
      <tr>
        <td id="L1834" class="blob-num js-line-number" data-line-number="1834"></td>
        <td id="LC1834" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">D3D12_VIEW_INSTANCING_DESC</span>( o )</td>
      </tr>
      <tr>
        <td id="L1835" class="blob-num js-line-number" data-line-number="1835"></td>
        <td id="LC1835" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L1836" class="blob-num js-line-number" data-line-number="1836"></td>
        <td id="LC1836" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_VIEW_INSTANCING_DESC</span>( CD3DX12_DEFAULT )</td>
      </tr>
      <tr>
        <td id="L1837" class="blob-num js-line-number" data-line-number="1837"></td>
        <td id="LC1837" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1838" class="blob-num js-line-number" data-line-number="1838"></td>
        <td id="LC1838" class="blob-code blob-code-inner js-file-line">        ViewInstanceCount = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1839" class="blob-num js-line-number" data-line-number="1839"></td>
        <td id="LC1839" class="blob-code blob-code-inner js-file-line">        pViewInstanceLocations = nullptr;</td>
      </tr>
      <tr>
        <td id="L1840" class="blob-num js-line-number" data-line-number="1840"></td>
        <td id="LC1840" class="blob-code blob-code-inner js-file-line">        Flags = D3D12_VIEW_INSTANCING_FLAG_NONE;</td>
      </tr>
      <tr>
        <td id="L1841" class="blob-num js-line-number" data-line-number="1841"></td>
        <td id="LC1841" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1842" class="blob-num js-line-number" data-line-number="1842"></td>
        <td id="LC1842" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_VIEW_INSTANCING_DESC</span>( </td>
      </tr>
      <tr>
        <td id="L1843" class="blob-num js-line-number" data-line-number="1843"></td>
        <td id="LC1843" class="blob-code blob-code-inner js-file-line">        UINT InViewInstanceCount,</td>
      </tr>
      <tr>
        <td id="L1844" class="blob-num js-line-number" data-line-number="1844"></td>
        <td id="LC1844" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">const</span> D3D12_VIEW_INSTANCE_LOCATION* InViewInstanceLocations,</td>
      </tr>
      <tr>
        <td id="L1845" class="blob-num js-line-number" data-line-number="1845"></td>
        <td id="LC1845" class="blob-code blob-code-inner js-file-line">        D3D12_VIEW_INSTANCING_FLAGS InFlags)</td>
      </tr>
      <tr>
        <td id="L1846" class="blob-num js-line-number" data-line-number="1846"></td>
        <td id="LC1846" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1847" class="blob-num js-line-number" data-line-number="1847"></td>
        <td id="LC1847" class="blob-code blob-code-inner js-file-line">        ViewInstanceCount = InViewInstanceCount;</td>
      </tr>
      <tr>
        <td id="L1848" class="blob-num js-line-number" data-line-number="1848"></td>
        <td id="LC1848" class="blob-code blob-code-inner js-file-line">        pViewInstanceLocations = InViewInstanceLocations;</td>
      </tr>
      <tr>
        <td id="L1849" class="blob-num js-line-number" data-line-number="1849"></td>
        <td id="LC1849" class="blob-code blob-code-inner js-file-line">        Flags = InFlags;</td>
      </tr>
      <tr>
        <td id="L1850" class="blob-num js-line-number" data-line-number="1850"></td>
        <td id="LC1850" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1851" class="blob-num js-line-number" data-line-number="1851"></td>
        <td id="LC1851" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1852" class="blob-num js-line-number" data-line-number="1852"></td>
        <td id="LC1852" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1853" class="blob-num js-line-number" data-line-number="1853"></td>
        <td id="LC1853" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1854" class="blob-num js-line-number" data-line-number="1854"></td>
        <td id="LC1854" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Row-by-row memcpy</span></td>
      </tr>
      <tr>
        <td id="L1855" class="blob-num js-line-number" data-line-number="1855"></td>
        <td id="LC1855" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">MemcpySubresource</span>(</td>
      </tr>
      <tr>
        <td id="L1856" class="blob-num js-line-number" data-line-number="1856"></td>
        <td id="LC1856" class="blob-code blob-code-inner js-file-line">    _In_ <span class="pl-k">const</span> D3D12_MEMCPY_DEST* pDest,</td>
      </tr>
      <tr>
        <td id="L1857" class="blob-num js-line-number" data-line-number="1857"></td>
        <td id="LC1857" class="blob-code blob-code-inner js-file-line">    _In_ <span class="pl-k">const</span> D3D12_SUBRESOURCE_DATA* pSrc,</td>
      </tr>
      <tr>
        <td id="L1858" class="blob-num js-line-number" data-line-number="1858"></td>
        <td id="LC1858" class="blob-code blob-code-inner js-file-line">    SIZE_T RowSizeInBytes,</td>
      </tr>
      <tr>
        <td id="L1859" class="blob-num js-line-number" data-line-number="1859"></td>
        <td id="LC1859" class="blob-code blob-code-inner js-file-line">    UINT NumRows,</td>
      </tr>
      <tr>
        <td id="L1860" class="blob-num js-line-number" data-line-number="1860"></td>
        <td id="LC1860" class="blob-code blob-code-inner js-file-line">    UINT NumSlices)</td>
      </tr>
      <tr>
        <td id="L1861" class="blob-num js-line-number" data-line-number="1861"></td>
        <td id="LC1861" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1862" class="blob-num js-line-number" data-line-number="1862"></td>
        <td id="LC1862" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (UINT z = <span class="pl-c1">0</span>; z &lt; NumSlices; ++z)</td>
      </tr>
      <tr>
        <td id="L1863" class="blob-num js-line-number" data-line-number="1863"></td>
        <td id="LC1863" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1864" class="blob-num js-line-number" data-line-number="1864"></td>
        <td id="LC1864" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">auto</span> pDestSlice = reinterpret_cast&lt;BYTE*&gt;(pDest-&gt;<span class="pl-smi">pData</span>) + pDest-&gt;<span class="pl-smi">SlicePitch</span> * z;</td>
      </tr>
      <tr>
        <td id="L1865" class="blob-num js-line-number" data-line-number="1865"></td>
        <td id="LC1865" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">auto</span> pSrcSlice = reinterpret_cast&lt;<span class="pl-k">const</span> BYTE*&gt;(pSrc-&gt;<span class="pl-smi">pData</span>) + pSrc-&gt;<span class="pl-smi">SlicePitch</span> * <span class="pl-c1">LONG_PTR</span>(z);</td>
      </tr>
      <tr>
        <td id="L1866" class="blob-num js-line-number" data-line-number="1866"></td>
        <td id="LC1866" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (UINT y = <span class="pl-c1">0</span>; y &lt; NumRows; ++y)</td>
      </tr>
      <tr>
        <td id="L1867" class="blob-num js-line-number" data-line-number="1867"></td>
        <td id="LC1867" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L1868" class="blob-num js-line-number" data-line-number="1868"></td>
        <td id="LC1868" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">memcpy</span>(pDestSlice + pDest-&gt;<span class="pl-smi">RowPitch</span> * y,</td>
      </tr>
      <tr>
        <td id="L1869" class="blob-num js-line-number" data-line-number="1869"></td>
        <td id="LC1869" class="blob-code blob-code-inner js-file-line">                   pSrcSlice + pSrc-&gt;<span class="pl-smi">RowPitch</span> * <span class="pl-c1">LONG_PTR</span>(y),</td>
      </tr>
      <tr>
        <td id="L1870" class="blob-num js-line-number" data-line-number="1870"></td>
        <td id="LC1870" class="blob-code blob-code-inner js-file-line">                   RowSizeInBytes);</td>
      </tr>
      <tr>
        <td id="L1871" class="blob-num js-line-number" data-line-number="1871"></td>
        <td id="LC1871" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L1872" class="blob-num js-line-number" data-line-number="1872"></td>
        <td id="LC1872" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1873" class="blob-num js-line-number" data-line-number="1873"></td>
        <td id="LC1873" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1874" class="blob-num js-line-number" data-line-number="1874"></td>
        <td id="LC1874" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1875" class="blob-num js-line-number" data-line-number="1875"></td>
        <td id="LC1875" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1876" class="blob-num js-line-number" data-line-number="1876"></td>
        <td id="LC1876" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Returns required size of a buffer to be used for data upload</span></td>
      </tr>
      <tr>
        <td id="L1877" class="blob-num js-line-number" data-line-number="1877"></td>
        <td id="LC1877" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> UINT64 <span class="pl-en">GetRequiredIntermediateSize</span>(</td>
      </tr>
      <tr>
        <td id="L1878" class="blob-num js-line-number" data-line-number="1878"></td>
        <td id="LC1878" class="blob-code blob-code-inner js-file-line">    _In_ ID3D12Resource* pDestinationResource,</td>
      </tr>
      <tr>
        <td id="L1879" class="blob-num js-line-number" data-line-number="1879"></td>
        <td id="LC1879" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">_In_range_</span>(<span class="pl-c1">0</span>,D3D12_REQ_SUBRESOURCES) UINT FirstSubresource,</td>
      </tr>
      <tr>
        <td id="L1880" class="blob-num js-line-number" data-line-number="1880"></td>
        <td id="LC1880" class="blob-code blob-code-inner js-file-line">    _In_range_(<span class="pl-c1">0</span>,D3D12_REQ_SUBRESOURCES-FirstSubresource) UINT NumSubresources)</td>
      </tr>
      <tr>
        <td id="L1881" class="blob-num js-line-number" data-line-number="1881"></td>
        <td id="LC1881" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1882" class="blob-num js-line-number" data-line-number="1882"></td>
        <td id="LC1882" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">auto</span> Desc = pDestinationResource-&gt;<span class="pl-c1">GetDesc</span>();</td>
      </tr>
      <tr>
        <td id="L1883" class="blob-num js-line-number" data-line-number="1883"></td>
        <td id="LC1883" class="blob-code blob-code-inner js-file-line">    UINT64 RequiredSize = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1884" class="blob-num js-line-number" data-line-number="1884"></td>
        <td id="LC1884" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1885" class="blob-num js-line-number" data-line-number="1885"></td>
        <td id="LC1885" class="blob-code blob-code-inner js-file-line">    ID3D12Device* pDevice = nullptr;</td>
      </tr>
      <tr>
        <td id="L1886" class="blob-num js-line-number" data-line-number="1886"></td>
        <td id="LC1886" class="blob-code blob-code-inner js-file-line">    pDestinationResource-&gt;<span class="pl-c1">GetDevice</span>(IID_ID3D12Device, reinterpret_cast&lt;<span class="pl-k">void</span>**&gt;(&amp;pDevice));</td>
      </tr>
      <tr>
        <td id="L1887" class="blob-num js-line-number" data-line-number="1887"></td>
        <td id="LC1887" class="blob-code blob-code-inner js-file-line">    pDevice-&gt;<span class="pl-c1">GetCopyableFootprints</span>(&amp;Desc, FirstSubresource, NumSubresources, <span class="pl-c1">0</span>, nullptr, nullptr, nullptr, &amp;RequiredSize);</td>
      </tr>
      <tr>
        <td id="L1888" class="blob-num js-line-number" data-line-number="1888"></td>
        <td id="LC1888" class="blob-code blob-code-inner js-file-line">    pDevice-&gt;<span class="pl-c1">Release</span>();</td>
      </tr>
      <tr>
        <td id="L1889" class="blob-num js-line-number" data-line-number="1889"></td>
        <td id="LC1889" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1890" class="blob-num js-line-number" data-line-number="1890"></td>
        <td id="LC1890" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> RequiredSize;</td>
      </tr>
      <tr>
        <td id="L1891" class="blob-num js-line-number" data-line-number="1891"></td>
        <td id="LC1891" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1892" class="blob-num js-line-number" data-line-number="1892"></td>
        <td id="LC1892" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1893" class="blob-num js-line-number" data-line-number="1893"></td>
        <td id="LC1893" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1894" class="blob-num js-line-number" data-line-number="1894"></td>
        <td id="LC1894" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> All arrays must be populated (e.g. by calling GetCopyableFootprints)</span></td>
      </tr>
      <tr>
        <td id="L1895" class="blob-num js-line-number" data-line-number="1895"></td>
        <td id="LC1895" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> UINT64 <span class="pl-en">UpdateSubresources</span>(</td>
      </tr>
      <tr>
        <td id="L1896" class="blob-num js-line-number" data-line-number="1896"></td>
        <td id="LC1896" class="blob-code blob-code-inner js-file-line">    _In_ ID3D12GraphicsCommandList* pCmdList,</td>
      </tr>
      <tr>
        <td id="L1897" class="blob-num js-line-number" data-line-number="1897"></td>
        <td id="LC1897" class="blob-code blob-code-inner js-file-line">    _In_ ID3D12Resource* pDestinationResource,</td>
      </tr>
      <tr>
        <td id="L1898" class="blob-num js-line-number" data-line-number="1898"></td>
        <td id="LC1898" class="blob-code blob-code-inner js-file-line">    _In_ ID3D12Resource* pIntermediate,</td>
      </tr>
      <tr>
        <td id="L1899" class="blob-num js-line-number" data-line-number="1899"></td>
        <td id="LC1899" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">_In_range_</span>(<span class="pl-c1">0</span>,D3D12_REQ_SUBRESOURCES) UINT FirstSubresource,</td>
      </tr>
      <tr>
        <td id="L1900" class="blob-num js-line-number" data-line-number="1900"></td>
        <td id="LC1900" class="blob-code blob-code-inner js-file-line">    _In_range_(<span class="pl-c1">0</span>,D3D12_REQ_SUBRESOURCES-FirstSubresource) UINT NumSubresources,</td>
      </tr>
      <tr>
        <td id="L1901" class="blob-num js-line-number" data-line-number="1901"></td>
        <td id="LC1901" class="blob-code blob-code-inner js-file-line">    UINT64 RequiredSize,</td>
      </tr>
      <tr>
        <td id="L1902" class="blob-num js-line-number" data-line-number="1902"></td>
        <td id="LC1902" class="blob-code blob-code-inner js-file-line">    _In_reads_(NumSubresources) <span class="pl-k">const</span> D3D12_PLACED_SUBRESOURCE_FOOTPRINT* pLayouts,</td>
      </tr>
      <tr>
        <td id="L1903" class="blob-num js-line-number" data-line-number="1903"></td>
        <td id="LC1903" class="blob-code blob-code-inner js-file-line">    _In_reads_(NumSubresources) <span class="pl-k">const</span> UINT* pNumRows,</td>
      </tr>
      <tr>
        <td id="L1904" class="blob-num js-line-number" data-line-number="1904"></td>
        <td id="LC1904" class="blob-code blob-code-inner js-file-line">    _In_reads_(NumSubresources) <span class="pl-k">const</span> UINT64* pRowSizesInBytes,</td>
      </tr>
      <tr>
        <td id="L1905" class="blob-num js-line-number" data-line-number="1905"></td>
        <td id="LC1905" class="blob-code blob-code-inner js-file-line">    _In_reads_(NumSubresources) <span class="pl-k">const</span> D3D12_SUBRESOURCE_DATA* pSrcData)</td>
      </tr>
      <tr>
        <td id="L1906" class="blob-num js-line-number" data-line-number="1906"></td>
        <td id="LC1906" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1907" class="blob-num js-line-number" data-line-number="1907"></td>
        <td id="LC1907" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Minor validation</span></td>
      </tr>
      <tr>
        <td id="L1908" class="blob-num js-line-number" data-line-number="1908"></td>
        <td id="LC1908" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">auto</span> IntermediateDesc = pIntermediate-&gt;<span class="pl-c1">GetDesc</span>();</td>
      </tr>
      <tr>
        <td id="L1909" class="blob-num js-line-number" data-line-number="1909"></td>
        <td id="LC1909" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">auto</span> DestinationDesc = pDestinationResource-&gt;<span class="pl-c1">GetDesc</span>();</td>
      </tr>
      <tr>
        <td id="L1910" class="blob-num js-line-number" data-line-number="1910"></td>
        <td id="LC1910" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (IntermediateDesc.<span class="pl-smi">Dimension</span> != D3D12_RESOURCE_DIMENSION_BUFFER || </td>
      </tr>
      <tr>
        <td id="L1911" class="blob-num js-line-number" data-line-number="1911"></td>
        <td id="LC1911" class="blob-code blob-code-inner js-file-line">        IntermediateDesc.<span class="pl-smi">Width</span> &lt; RequiredSize + pLayouts[<span class="pl-c1">0</span>].<span class="pl-smi">Offset</span> || </td>
      </tr>
      <tr>
        <td id="L1912" class="blob-num js-line-number" data-line-number="1912"></td>
        <td id="LC1912" class="blob-code blob-code-inner js-file-line">        RequiredSize &gt; <span class="pl-c1">SIZE_T</span>(-<span class="pl-c1">1</span>) || </td>
      </tr>
      <tr>
        <td id="L1913" class="blob-num js-line-number" data-line-number="1913"></td>
        <td id="LC1913" class="blob-code blob-code-inner js-file-line">        (DestinationDesc.<span class="pl-smi">Dimension</span> == D3D12_RESOURCE_DIMENSION_BUFFER &amp;&amp; </td>
      </tr>
      <tr>
        <td id="L1914" class="blob-num js-line-number" data-line-number="1914"></td>
        <td id="LC1914" class="blob-code blob-code-inner js-file-line">            (FirstSubresource != <span class="pl-c1">0</span> || NumSubresources != <span class="pl-c1">1</span>)))</td>
      </tr>
      <tr>
        <td id="L1915" class="blob-num js-line-number" data-line-number="1915"></td>
        <td id="LC1915" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1916" class="blob-num js-line-number" data-line-number="1916"></td>
        <td id="LC1916" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1917" class="blob-num js-line-number" data-line-number="1917"></td>
        <td id="LC1917" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1918" class="blob-num js-line-number" data-line-number="1918"></td>
        <td id="LC1918" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1919" class="blob-num js-line-number" data-line-number="1919"></td>
        <td id="LC1919" class="blob-code blob-code-inner js-file-line">    BYTE* pData;</td>
      </tr>
      <tr>
        <td id="L1920" class="blob-num js-line-number" data-line-number="1920"></td>
        <td id="LC1920" class="blob-code blob-code-inner js-file-line">    HRESULT hr = pIntermediate-&gt;<span class="pl-c1">Map</span>(<span class="pl-c1">0</span>, nullptr, reinterpret_cast&lt;<span class="pl-k">void</span>**&gt;(&amp;pData));</td>
      </tr>
      <tr>
        <td id="L1921" class="blob-num js-line-number" data-line-number="1921"></td>
        <td id="LC1921" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (<span class="pl-c1">FAILED</span>(hr))</td>
      </tr>
      <tr>
        <td id="L1922" class="blob-num js-line-number" data-line-number="1922"></td>
        <td id="LC1922" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1923" class="blob-num js-line-number" data-line-number="1923"></td>
        <td id="LC1923" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1924" class="blob-num js-line-number" data-line-number="1924"></td>
        <td id="LC1924" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1925" class="blob-num js-line-number" data-line-number="1925"></td>
        <td id="LC1925" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1926" class="blob-num js-line-number" data-line-number="1926"></td>
        <td id="LC1926" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (UINT i = <span class="pl-c1">0</span>; i &lt; NumSubresources; ++i)</td>
      </tr>
      <tr>
        <td id="L1927" class="blob-num js-line-number" data-line-number="1927"></td>
        <td id="LC1927" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1928" class="blob-num js-line-number" data-line-number="1928"></td>
        <td id="LC1928" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (pRowSizesInBytes[i] &gt; <span class="pl-c1">SIZE_T</span>(-<span class="pl-c1">1</span>)) <span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1929" class="blob-num js-line-number" data-line-number="1929"></td>
        <td id="LC1929" class="blob-code blob-code-inner js-file-line">        D3D12_MEMCPY_DEST DestData = { pData + pLayouts[i].<span class="pl-smi">Offset</span>, pLayouts[i].<span class="pl-smi">Footprint</span>.<span class="pl-smi">RowPitch</span>, <span class="pl-c1">SIZE_T</span>(pLayouts[i].<span class="pl-smi">Footprint</span>.<span class="pl-smi">RowPitch</span>) * <span class="pl-c1">SIZE_T</span>(pNumRows[i]) };</td>
      </tr>
      <tr>
        <td id="L1930" class="blob-num js-line-number" data-line-number="1930"></td>
        <td id="LC1930" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">MemcpySubresource</span>(&amp;DestData, &amp;pSrcData[i], static_cast&lt;SIZE_T&gt;(pRowSizesInBytes[i]), pNumRows[i], pLayouts[i].<span class="pl-smi">Footprint</span>.<span class="pl-smi">Depth</span>);</td>
      </tr>
      <tr>
        <td id="L1931" class="blob-num js-line-number" data-line-number="1931"></td>
        <td id="LC1931" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1932" class="blob-num js-line-number" data-line-number="1932"></td>
        <td id="LC1932" class="blob-code blob-code-inner js-file-line">    pIntermediate-&gt;<span class="pl-c1">Unmap</span>(<span class="pl-c1">0</span>, nullptr);</td>
      </tr>
      <tr>
        <td id="L1933" class="blob-num js-line-number" data-line-number="1933"></td>
        <td id="LC1933" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1934" class="blob-num js-line-number" data-line-number="1934"></td>
        <td id="LC1934" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (DestinationDesc.<span class="pl-smi">Dimension</span> == D3D12_RESOURCE_DIMENSION_BUFFER)</td>
      </tr>
      <tr>
        <td id="L1935" class="blob-num js-line-number" data-line-number="1935"></td>
        <td id="LC1935" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1936" class="blob-num js-line-number" data-line-number="1936"></td>
        <td id="LC1936" class="blob-code blob-code-inner js-file-line">        pCmdList-&gt;<span class="pl-c1">CopyBufferRegion</span>(</td>
      </tr>
      <tr>
        <td id="L1937" class="blob-num js-line-number" data-line-number="1937"></td>
        <td id="LC1937" class="blob-code blob-code-inner js-file-line">            pDestinationResource, <span class="pl-c1">0</span>, pIntermediate, pLayouts[<span class="pl-c1">0</span>].<span class="pl-smi">Offset</span>, pLayouts[<span class="pl-c1">0</span>].<span class="pl-smi">Footprint</span>.<span class="pl-smi">Width</span>);</td>
      </tr>
      <tr>
        <td id="L1938" class="blob-num js-line-number" data-line-number="1938"></td>
        <td id="LC1938" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1939" class="blob-num js-line-number" data-line-number="1939"></td>
        <td id="LC1939" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L1940" class="blob-num js-line-number" data-line-number="1940"></td>
        <td id="LC1940" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1941" class="blob-num js-line-number" data-line-number="1941"></td>
        <td id="LC1941" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (UINT i = <span class="pl-c1">0</span>; i &lt; NumSubresources; ++i)</td>
      </tr>
      <tr>
        <td id="L1942" class="blob-num js-line-number" data-line-number="1942"></td>
        <td id="LC1942" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L1943" class="blob-num js-line-number" data-line-number="1943"></td>
        <td id="LC1943" class="blob-code blob-code-inner js-file-line">            CD3DX12_TEXTURE_COPY_LOCATION <span class="pl-smi">Dst</span>(pDestinationResource, i + FirstSubresource);</td>
      </tr>
      <tr>
        <td id="L1944" class="blob-num js-line-number" data-line-number="1944"></td>
        <td id="LC1944" class="blob-code blob-code-inner js-file-line">            CD3DX12_TEXTURE_COPY_LOCATION <span class="pl-smi">Src</span>(pIntermediate, pLayouts[i]);</td>
      </tr>
      <tr>
        <td id="L1945" class="blob-num js-line-number" data-line-number="1945"></td>
        <td id="LC1945" class="blob-code blob-code-inner js-file-line">            pCmdList-&gt;<span class="pl-c1">CopyTextureRegion</span>(&amp;Dst, <span class="pl-c1">0</span>, <span class="pl-c1">0</span>, <span class="pl-c1">0</span>, &amp;Src, nullptr);</td>
      </tr>
      <tr>
        <td id="L1946" class="blob-num js-line-number" data-line-number="1946"></td>
        <td id="LC1946" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L1947" class="blob-num js-line-number" data-line-number="1947"></td>
        <td id="LC1947" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1948" class="blob-num js-line-number" data-line-number="1948"></td>
        <td id="LC1948" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> RequiredSize;</td>
      </tr>
      <tr>
        <td id="L1949" class="blob-num js-line-number" data-line-number="1949"></td>
        <td id="LC1949" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1950" class="blob-num js-line-number" data-line-number="1950"></td>
        <td id="LC1950" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1951" class="blob-num js-line-number" data-line-number="1951"></td>
        <td id="LC1951" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1952" class="blob-num js-line-number" data-line-number="1952"></td>
        <td id="LC1952" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Heap-allocating UpdateSubresources implementation</span></td>
      </tr>
      <tr>
        <td id="L1953" class="blob-num js-line-number" data-line-number="1953"></td>
        <td id="LC1953" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> UINT64 <span class="pl-en">UpdateSubresources</span>( </td>
      </tr>
      <tr>
        <td id="L1954" class="blob-num js-line-number" data-line-number="1954"></td>
        <td id="LC1954" class="blob-code blob-code-inner js-file-line">    _In_ ID3D12GraphicsCommandList* pCmdList,</td>
      </tr>
      <tr>
        <td id="L1955" class="blob-num js-line-number" data-line-number="1955"></td>
        <td id="LC1955" class="blob-code blob-code-inner js-file-line">    _In_ ID3D12Resource* pDestinationResource,</td>
      </tr>
      <tr>
        <td id="L1956" class="blob-num js-line-number" data-line-number="1956"></td>
        <td id="LC1956" class="blob-code blob-code-inner js-file-line">    _In_ ID3D12Resource* pIntermediate,</td>
      </tr>
      <tr>
        <td id="L1957" class="blob-num js-line-number" data-line-number="1957"></td>
        <td id="LC1957" class="blob-code blob-code-inner js-file-line">    UINT64 IntermediateOffset,</td>
      </tr>
      <tr>
        <td id="L1958" class="blob-num js-line-number" data-line-number="1958"></td>
        <td id="LC1958" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">_In_range_</span>(<span class="pl-c1">0</span>,D3D12_REQ_SUBRESOURCES) UINT FirstSubresource,</td>
      </tr>
      <tr>
        <td id="L1959" class="blob-num js-line-number" data-line-number="1959"></td>
        <td id="LC1959" class="blob-code blob-code-inner js-file-line">    _In_range_(<span class="pl-c1">0</span>,D3D12_REQ_SUBRESOURCES-FirstSubresource) UINT NumSubresources,</td>
      </tr>
      <tr>
        <td id="L1960" class="blob-num js-line-number" data-line-number="1960"></td>
        <td id="LC1960" class="blob-code blob-code-inner js-file-line">    _In_reads_(NumSubresources) D3D12_SUBRESOURCE_DATA* pSrcData)</td>
      </tr>
      <tr>
        <td id="L1961" class="blob-num js-line-number" data-line-number="1961"></td>
        <td id="LC1961" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1962" class="blob-num js-line-number" data-line-number="1962"></td>
        <td id="LC1962" class="blob-code blob-code-inner js-file-line">    UINT64 RequiredSize = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1963" class="blob-num js-line-number" data-line-number="1963"></td>
        <td id="LC1963" class="blob-code blob-code-inner js-file-line">    UINT64 MemToAlloc = static_cast&lt;UINT64&gt;(<span class="pl-k">sizeof</span>(D3D12_PLACED_SUBRESOURCE_FOOTPRINT) + <span class="pl-k">sizeof</span>(UINT) + <span class="pl-k">sizeof</span>(UINT64)) * NumSubresources;</td>
      </tr>
      <tr>
        <td id="L1964" class="blob-num js-line-number" data-line-number="1964"></td>
        <td id="LC1964" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (MemToAlloc &gt; SIZE_MAX)</td>
      </tr>
      <tr>
        <td id="L1965" class="blob-num js-line-number" data-line-number="1965"></td>
        <td id="LC1965" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1966" class="blob-num js-line-number" data-line-number="1966"></td>
        <td id="LC1966" class="blob-code blob-code-inner js-file-line">       <span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1967" class="blob-num js-line-number" data-line-number="1967"></td>
        <td id="LC1967" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1968" class="blob-num js-line-number" data-line-number="1968"></td>
        <td id="LC1968" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>* pMem = <span class="pl-c1">HeapAlloc</span>(<span class="pl-c1">GetProcessHeap</span>(), <span class="pl-c1">0</span>, static_cast&lt;SIZE_T&gt;(MemToAlloc));</td>
      </tr>
      <tr>
        <td id="L1969" class="blob-num js-line-number" data-line-number="1969"></td>
        <td id="LC1969" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (pMem == nullptr)</td>
      </tr>
      <tr>
        <td id="L1970" class="blob-num js-line-number" data-line-number="1970"></td>
        <td id="LC1970" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1971" class="blob-num js-line-number" data-line-number="1971"></td>
        <td id="LC1971" class="blob-code blob-code-inner js-file-line">       <span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1972" class="blob-num js-line-number" data-line-number="1972"></td>
        <td id="LC1972" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1973" class="blob-num js-line-number" data-line-number="1973"></td>
        <td id="LC1973" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">auto</span> pLayouts = reinterpret_cast&lt;D3D12_PLACED_SUBRESOURCE_FOOTPRINT*&gt;(pMem);</td>
      </tr>
      <tr>
        <td id="L1974" class="blob-num js-line-number" data-line-number="1974"></td>
        <td id="LC1974" class="blob-code blob-code-inner js-file-line">    UINT64* pRowSizesInBytes = reinterpret_cast&lt;UINT64*&gt;(pLayouts + NumSubresources);</td>
      </tr>
      <tr>
        <td id="L1975" class="blob-num js-line-number" data-line-number="1975"></td>
        <td id="LC1975" class="blob-code blob-code-inner js-file-line">    UINT* pNumRows = reinterpret_cast&lt;UINT*&gt;(pRowSizesInBytes + NumSubresources);</td>
      </tr>
      <tr>
        <td id="L1976" class="blob-num js-line-number" data-line-number="1976"></td>
        <td id="LC1976" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1977" class="blob-num js-line-number" data-line-number="1977"></td>
        <td id="LC1977" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">auto</span> Desc = pDestinationResource-&gt;<span class="pl-c1">GetDesc</span>();</td>
      </tr>
      <tr>
        <td id="L1978" class="blob-num js-line-number" data-line-number="1978"></td>
        <td id="LC1978" class="blob-code blob-code-inner js-file-line">    ID3D12Device* pDevice = nullptr;</td>
      </tr>
      <tr>
        <td id="L1979" class="blob-num js-line-number" data-line-number="1979"></td>
        <td id="LC1979" class="blob-code blob-code-inner js-file-line">    pDestinationResource-&gt;<span class="pl-c1">GetDevice</span>(IID_ID3D12Device, reinterpret_cast&lt;<span class="pl-k">void</span>**&gt;(&amp;pDevice));</td>
      </tr>
      <tr>
        <td id="L1980" class="blob-num js-line-number" data-line-number="1980"></td>
        <td id="LC1980" class="blob-code blob-code-inner js-file-line">    pDevice-&gt;<span class="pl-c1">GetCopyableFootprints</span>(&amp;Desc, FirstSubresource, NumSubresources, IntermediateOffset, pLayouts, pNumRows, pRowSizesInBytes, &amp;RequiredSize);</td>
      </tr>
      <tr>
        <td id="L1981" class="blob-num js-line-number" data-line-number="1981"></td>
        <td id="LC1981" class="blob-code blob-code-inner js-file-line">    pDevice-&gt;<span class="pl-c1">Release</span>();</td>
      </tr>
      <tr>
        <td id="L1982" class="blob-num js-line-number" data-line-number="1982"></td>
        <td id="LC1982" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1983" class="blob-num js-line-number" data-line-number="1983"></td>
        <td id="LC1983" class="blob-code blob-code-inner js-file-line">    UINT64 Result = <span class="pl-c1">UpdateSubresources</span>(pCmdList, pDestinationResource, pIntermediate, FirstSubresource, NumSubresources, RequiredSize, pLayouts, pNumRows, pRowSizesInBytes, pSrcData);</td>
      </tr>
      <tr>
        <td id="L1984" class="blob-num js-line-number" data-line-number="1984"></td>
        <td id="LC1984" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">HeapFree</span>(<span class="pl-c1">GetProcessHeap</span>(), <span class="pl-c1">0</span>, pMem);</td>
      </tr>
      <tr>
        <td id="L1985" class="blob-num js-line-number" data-line-number="1985"></td>
        <td id="LC1985" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> Result;</td>
      </tr>
      <tr>
        <td id="L1986" class="blob-num js-line-number" data-line-number="1986"></td>
        <td id="LC1986" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1987" class="blob-num js-line-number" data-line-number="1987"></td>
        <td id="LC1987" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1988" class="blob-num js-line-number" data-line-number="1988"></td>
        <td id="LC1988" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1989" class="blob-num js-line-number" data-line-number="1989"></td>
        <td id="LC1989" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Stack-allocating UpdateSubresources implementation</span></td>
      </tr>
      <tr>
        <td id="L1990" class="blob-num js-line-number" data-line-number="1990"></td>
        <td id="LC1990" class="blob-code blob-code-inner js-file-line">template &lt;UINT MaxSubresources&gt;</td>
      </tr>
      <tr>
        <td id="L1991" class="blob-num js-line-number" data-line-number="1991"></td>
        <td id="LC1991" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> UINT64 <span class="pl-en">UpdateSubresources</span>( </td>
      </tr>
      <tr>
        <td id="L1992" class="blob-num js-line-number" data-line-number="1992"></td>
        <td id="LC1992" class="blob-code blob-code-inner js-file-line">    _In_ ID3D12GraphicsCommandList* pCmdList,</td>
      </tr>
      <tr>
        <td id="L1993" class="blob-num js-line-number" data-line-number="1993"></td>
        <td id="LC1993" class="blob-code blob-code-inner js-file-line">    _In_ ID3D12Resource* pDestinationResource,</td>
      </tr>
      <tr>
        <td id="L1994" class="blob-num js-line-number" data-line-number="1994"></td>
        <td id="LC1994" class="blob-code blob-code-inner js-file-line">    _In_ ID3D12Resource* pIntermediate,</td>
      </tr>
      <tr>
        <td id="L1995" class="blob-num js-line-number" data-line-number="1995"></td>
        <td id="LC1995" class="blob-code blob-code-inner js-file-line">    UINT64 IntermediateOffset,</td>
      </tr>
      <tr>
        <td id="L1996" class="blob-num js-line-number" data-line-number="1996"></td>
        <td id="LC1996" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">_In_range_</span>(<span class="pl-c1">0</span>, MaxSubresources) UINT FirstSubresource,</td>
      </tr>
      <tr>
        <td id="L1997" class="blob-num js-line-number" data-line-number="1997"></td>
        <td id="LC1997" class="blob-code blob-code-inner js-file-line">    _In_range_(<span class="pl-c1">1</span>, MaxSubresources - FirstSubresource) UINT NumSubresources,</td>
      </tr>
      <tr>
        <td id="L1998" class="blob-num js-line-number" data-line-number="1998"></td>
        <td id="LC1998" class="blob-code blob-code-inner js-file-line">    _In_reads_(NumSubresources) D3D12_SUBRESOURCE_DATA* pSrcData)</td>
      </tr>
      <tr>
        <td id="L1999" class="blob-num js-line-number" data-line-number="1999"></td>
        <td id="LC1999" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2000" class="blob-num js-line-number" data-line-number="2000"></td>
        <td id="LC2000" class="blob-code blob-code-inner js-file-line">    UINT64 RequiredSize = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2001" class="blob-num js-line-number" data-line-number="2001"></td>
        <td id="LC2001" class="blob-code blob-code-inner js-file-line">    D3D12_PLACED_SUBRESOURCE_FOOTPRINT Layouts[MaxSubresources];</td>
      </tr>
      <tr>
        <td id="L2002" class="blob-num js-line-number" data-line-number="2002"></td>
        <td id="LC2002" class="blob-code blob-code-inner js-file-line">    UINT NumRows[MaxSubresources];</td>
      </tr>
      <tr>
        <td id="L2003" class="blob-num js-line-number" data-line-number="2003"></td>
        <td id="LC2003" class="blob-code blob-code-inner js-file-line">    UINT64 RowSizesInBytes[MaxSubresources];</td>
      </tr>
      <tr>
        <td id="L2004" class="blob-num js-line-number" data-line-number="2004"></td>
        <td id="LC2004" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2005" class="blob-num js-line-number" data-line-number="2005"></td>
        <td id="LC2005" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">auto</span> Desc = pDestinationResource-&gt;<span class="pl-c1">GetDesc</span>();</td>
      </tr>
      <tr>
        <td id="L2006" class="blob-num js-line-number" data-line-number="2006"></td>
        <td id="LC2006" class="blob-code blob-code-inner js-file-line">    ID3D12Device* pDevice = nullptr;</td>
      </tr>
      <tr>
        <td id="L2007" class="blob-num js-line-number" data-line-number="2007"></td>
        <td id="LC2007" class="blob-code blob-code-inner js-file-line">    pDestinationResource-&gt;<span class="pl-c1">GetDevice</span>(IID_ID3D12Device, reinterpret_cast&lt;<span class="pl-k">void</span>**&gt;(&amp;pDevice));</td>
      </tr>
      <tr>
        <td id="L2008" class="blob-num js-line-number" data-line-number="2008"></td>
        <td id="LC2008" class="blob-code blob-code-inner js-file-line">    pDevice-&gt;<span class="pl-c1">GetCopyableFootprints</span>(&amp;Desc, FirstSubresource, NumSubresources, IntermediateOffset, Layouts, NumRows, RowSizesInBytes, &amp;RequiredSize);</td>
      </tr>
      <tr>
        <td id="L2009" class="blob-num js-line-number" data-line-number="2009"></td>
        <td id="LC2009" class="blob-code blob-code-inner js-file-line">    pDevice-&gt;<span class="pl-c1">Release</span>();</td>
      </tr>
      <tr>
        <td id="L2010" class="blob-num js-line-number" data-line-number="2010"></td>
        <td id="LC2010" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2011" class="blob-num js-line-number" data-line-number="2011"></td>
        <td id="LC2011" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> <span class="pl-c1">UpdateSubresources</span>(pCmdList, pDestinationResource, pIntermediate, FirstSubresource, NumSubresources, RequiredSize, Layouts, NumRows, RowSizesInBytes, pSrcData);</td>
      </tr>
      <tr>
        <td id="L2012" class="blob-num js-line-number" data-line-number="2012"></td>
        <td id="LC2012" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2013" class="blob-num js-line-number" data-line-number="2013"></td>
        <td id="LC2013" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2014" class="blob-num js-line-number" data-line-number="2014"></td>
        <td id="LC2014" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L2015" class="blob-num js-line-number" data-line-number="2015"></td>
        <td id="LC2015" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">bool</span> <span class="pl-en">D3D12IsLayoutOpaque</span>( D3D12_TEXTURE_LAYOUT Layout )</td>
      </tr>
      <tr>
        <td id="L2016" class="blob-num js-line-number" data-line-number="2016"></td>
        <td id="LC2016" class="blob-code blob-code-inner js-file-line">{ <span class="pl-k">return</span> Layout == D3D12_TEXTURE_LAYOUT_UNKNOWN || Layout == D3D12_TEXTURE_LAYOUT_64KB_UNDEFINED_SWIZZLE; }</td>
      </tr>
      <tr>
        <td id="L2017" class="blob-num js-line-number" data-line-number="2017"></td>
        <td id="LC2017" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2018" class="blob-num js-line-number" data-line-number="2018"></td>
        <td id="LC2018" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L2019" class="blob-num js-line-number" data-line-number="2019"></td>
        <td id="LC2019" class="blob-code blob-code-inner js-file-line">template &lt;typename t_CommandListType&gt;</td>
      </tr>
      <tr>
        <td id="L2020" class="blob-num js-line-number" data-line-number="2020"></td>
        <td id="LC2020" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> ID3D12CommandList * <span class="pl-k">const</span> * <span class="pl-en">CommandListCast</span>(t_CommandListType * <span class="pl-k">const</span> * pp)</td>
      </tr>
      <tr>
        <td id="L2021" class="blob-num js-line-number" data-line-number="2021"></td>
        <td id="LC2021" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2022" class="blob-num js-line-number" data-line-number="2022"></td>
        <td id="LC2022" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> This cast is useful for passing strongly typed command list pointers into</span></td>
      </tr>
      <tr>
        <td id="L2023" class="blob-num js-line-number" data-line-number="2023"></td>
        <td id="LC2023" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> ExecuteCommandLists.</span></td>
      </tr>
      <tr>
        <td id="L2024" class="blob-num js-line-number" data-line-number="2024"></td>
        <td id="LC2024" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> This cast is valid as long as the const-ness is respected. D3D12 APIs do</span></td>
      </tr>
      <tr>
        <td id="L2025" class="blob-num js-line-number" data-line-number="2025"></td>
        <td id="LC2025" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> respect the const-ness of their arguments.</span></td>
      </tr>
      <tr>
        <td id="L2026" class="blob-num js-line-number" data-line-number="2026"></td>
        <td id="LC2026" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> reinterpret_cast&lt;ID3D12CommandList * <span class="pl-k">const</span> *&gt;(pp);</td>
      </tr>
      <tr>
        <td id="L2027" class="blob-num js-line-number" data-line-number="2027"></td>
        <td id="LC2027" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2028" class="blob-num js-line-number" data-line-number="2028"></td>
        <td id="LC2028" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2029" class="blob-num js-line-number" data-line-number="2029"></td>
        <td id="LC2029" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L2030" class="blob-num js-line-number" data-line-number="2030"></td>
        <td id="LC2030" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> D3D12 exports a new method for serializing root signatures in the Windows 10 Anniversary Update.</span></td>
      </tr>
      <tr>
        <td id="L2031" class="blob-num js-line-number" data-line-number="2031"></td>
        <td id="LC2031" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> To help enable root signature 1.1 features when they are available and not require maintaining</span></td>
      </tr>
      <tr>
        <td id="L2032" class="blob-num js-line-number" data-line-number="2032"></td>
        <td id="LC2032" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> two code paths for building root signatures, this helper method reconstructs a 1.0 signature when</span></td>
      </tr>
      <tr>
        <td id="L2033" class="blob-num js-line-number" data-line-number="2033"></td>
        <td id="LC2033" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> 1.1 is not supported.</span></td>
      </tr>
      <tr>
        <td id="L2034" class="blob-num js-line-number" data-line-number="2034"></td>
        <td id="LC2034" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> HRESULT <span class="pl-en">D3DX12SerializeVersionedRootSignature</span>(</td>
      </tr>
      <tr>
        <td id="L2035" class="blob-num js-line-number" data-line-number="2035"></td>
        <td id="LC2035" class="blob-code blob-code-inner js-file-line">    _In_ <span class="pl-k">const</span> D3D12_VERSIONED_ROOT_SIGNATURE_DESC* pRootSignatureDesc,</td>
      </tr>
      <tr>
        <td id="L2036" class="blob-num js-line-number" data-line-number="2036"></td>
        <td id="LC2036" class="blob-code blob-code-inner js-file-line">    D3D_ROOT_SIGNATURE_VERSION MaxVersion,</td>
      </tr>
      <tr>
        <td id="L2037" class="blob-num js-line-number" data-line-number="2037"></td>
        <td id="LC2037" class="blob-code blob-code-inner js-file-line">    _Outptr_ ID3DBlob** ppBlob,</td>
      </tr>
      <tr>
        <td id="L2038" class="blob-num js-line-number" data-line-number="2038"></td>
        <td id="LC2038" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">_Always_</span>(_Outptr_opt_result_maybenull_) ID3DBlob** ppErrorBlob)</td>
      </tr>
      <tr>
        <td id="L2039" class="blob-num js-line-number" data-line-number="2039"></td>
        <td id="LC2039" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2040" class="blob-num js-line-number" data-line-number="2040"></td>
        <td id="LC2040" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (ppErrorBlob != nullptr)</td>
      </tr>
      <tr>
        <td id="L2041" class="blob-num js-line-number" data-line-number="2041"></td>
        <td id="LC2041" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2042" class="blob-num js-line-number" data-line-number="2042"></td>
        <td id="LC2042" class="blob-code blob-code-inner js-file-line">        *ppErrorBlob = nullptr;</td>
      </tr>
      <tr>
        <td id="L2043" class="blob-num js-line-number" data-line-number="2043"></td>
        <td id="LC2043" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2044" class="blob-num js-line-number" data-line-number="2044"></td>
        <td id="LC2044" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2045" class="blob-num js-line-number" data-line-number="2045"></td>
        <td id="LC2045" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">switch</span> (MaxVersion)</td>
      </tr>
      <tr>
        <td id="L2046" class="blob-num js-line-number" data-line-number="2046"></td>
        <td id="LC2046" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2047" class="blob-num js-line-number" data-line-number="2047"></td>
        <td id="LC2047" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D_ROOT_SIGNATURE_VERSION_1_0:</td>
      </tr>
      <tr>
        <td id="L2048" class="blob-num js-line-number" data-line-number="2048"></td>
        <td id="LC2048" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">switch</span> (pRootSignatureDesc-&gt;<span class="pl-smi">Version</span>)</td>
      </tr>
      <tr>
        <td id="L2049" class="blob-num js-line-number" data-line-number="2049"></td>
        <td id="LC2049" class="blob-code blob-code-inner js-file-line">            {</td>
      </tr>
      <tr>
        <td id="L2050" class="blob-num js-line-number" data-line-number="2050"></td>
        <td id="LC2050" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">case</span> D3D_ROOT_SIGNATURE_VERSION_1_0:</td>
      </tr>
      <tr>
        <td id="L2051" class="blob-num js-line-number" data-line-number="2051"></td>
        <td id="LC2051" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">return</span> <span class="pl-c1">D3D12SerializeRootSignature</span>(&amp;pRootSignatureDesc-&gt;<span class="pl-smi">Desc_1_0</span>, D3D_ROOT_SIGNATURE_VERSION_1, ppBlob, ppErrorBlob);</td>
      </tr>
      <tr>
        <td id="L2052" class="blob-num js-line-number" data-line-number="2052"></td>
        <td id="LC2052" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2053" class="blob-num js-line-number" data-line-number="2053"></td>
        <td id="LC2053" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">case</span> D3D_ROOT_SIGNATURE_VERSION_1_1:</td>
      </tr>
      <tr>
        <td id="L2054" class="blob-num js-line-number" data-line-number="2054"></td>
        <td id="LC2054" class="blob-code blob-code-inner js-file-line">                {</td>
      </tr>
      <tr>
        <td id="L2055" class="blob-num js-line-number" data-line-number="2055"></td>
        <td id="LC2055" class="blob-code blob-code-inner js-file-line">                    HRESULT hr = S_OK;</td>
      </tr>
      <tr>
        <td id="L2056" class="blob-num js-line-number" data-line-number="2056"></td>
        <td id="LC2056" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">const</span> D3D12_ROOT_SIGNATURE_DESC1&amp; desc_1_1 = pRootSignatureDesc-&gt;<span class="pl-smi">Desc_1_1</span>;</td>
      </tr>
      <tr>
        <td id="L2057" class="blob-num js-line-number" data-line-number="2057"></td>
        <td id="LC2057" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2058" class="blob-num js-line-number" data-line-number="2058"></td>
        <td id="LC2058" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">const</span> SIZE_T ParametersSize = <span class="pl-k">sizeof</span>(D3D12_ROOT_PARAMETER) * desc_1_1.<span class="pl-smi">NumParameters</span>;</td>
      </tr>
      <tr>
        <td id="L2059" class="blob-num js-line-number" data-line-number="2059"></td>
        <td id="LC2059" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">void</span>* pParameters = (ParametersSize &gt; <span class="pl-c1">0</span>) ? <span class="pl-c1">HeapAlloc</span>(<span class="pl-c1">GetProcessHeap</span>(), <span class="pl-c1">0</span>, ParametersSize) : nullptr;</td>
      </tr>
      <tr>
        <td id="L2060" class="blob-num js-line-number" data-line-number="2060"></td>
        <td id="LC2060" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">if</span> (ParametersSize &gt; <span class="pl-c1">0</span> &amp;&amp; pParameters == nullptr)</td>
      </tr>
      <tr>
        <td id="L2061" class="blob-num js-line-number" data-line-number="2061"></td>
        <td id="LC2061" class="blob-code blob-code-inner js-file-line">                    {</td>
      </tr>
      <tr>
        <td id="L2062" class="blob-num js-line-number" data-line-number="2062"></td>
        <td id="LC2062" class="blob-code blob-code-inner js-file-line">                        hr = E_OUTOFMEMORY;</td>
      </tr>
      <tr>
        <td id="L2063" class="blob-num js-line-number" data-line-number="2063"></td>
        <td id="LC2063" class="blob-code blob-code-inner js-file-line">                    }</td>
      </tr>
      <tr>
        <td id="L2064" class="blob-num js-line-number" data-line-number="2064"></td>
        <td id="LC2064" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">auto</span> pParameters_1_0 = reinterpret_cast&lt;D3D12_ROOT_PARAMETER*&gt;(pParameters);</td>
      </tr>
      <tr>
        <td id="L2065" class="blob-num js-line-number" data-line-number="2065"></td>
        <td id="LC2065" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2066" class="blob-num js-line-number" data-line-number="2066"></td>
        <td id="LC2066" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">if</span> (<span class="pl-c1">SUCCEEDED</span>(hr))</td>
      </tr>
      <tr>
        <td id="L2067" class="blob-num js-line-number" data-line-number="2067"></td>
        <td id="LC2067" class="blob-code blob-code-inner js-file-line">                    {</td>
      </tr>
      <tr>
        <td id="L2068" class="blob-num js-line-number" data-line-number="2068"></td>
        <td id="LC2068" class="blob-code blob-code-inner js-file-line">                        <span class="pl-k">for</span> (UINT n = <span class="pl-c1">0</span>; n &lt; desc_1_1.<span class="pl-smi">NumParameters</span>; n++)</td>
      </tr>
      <tr>
        <td id="L2069" class="blob-num js-line-number" data-line-number="2069"></td>
        <td id="LC2069" class="blob-code blob-code-inner js-file-line">                        {</td>
      </tr>
      <tr>
        <td id="L2070" class="blob-num js-line-number" data-line-number="2070"></td>
        <td id="LC2070" class="blob-code blob-code-inner js-file-line">                            <span class="pl-c1">__analysis_assume</span>(ParametersSize == <span class="pl-k">sizeof</span>(D3D12_ROOT_PARAMETER) * desc_1_1.<span class="pl-smi">NumParameters</span>);</td>
      </tr>
      <tr>
        <td id="L2071" class="blob-num js-line-number" data-line-number="2071"></td>
        <td id="LC2071" class="blob-code blob-code-inner js-file-line">                            pParameters_1_0[n].<span class="pl-smi">ParameterType</span> = desc_1_1.<span class="pl-smi">pParameters</span>[n].<span class="pl-smi">ParameterType</span>;</td>
      </tr>
      <tr>
        <td id="L2072" class="blob-num js-line-number" data-line-number="2072"></td>
        <td id="LC2072" class="blob-code blob-code-inner js-file-line">                            pParameters_1_0[n].<span class="pl-smi">ShaderVisibility</span> = desc_1_1.<span class="pl-smi">pParameters</span>[n].<span class="pl-smi">ShaderVisibility</span>;</td>
      </tr>
      <tr>
        <td id="L2073" class="blob-num js-line-number" data-line-number="2073"></td>
        <td id="LC2073" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2074" class="blob-num js-line-number" data-line-number="2074"></td>
        <td id="LC2074" class="blob-code blob-code-inner js-file-line">                            <span class="pl-k">switch</span> (desc_1_1.<span class="pl-smi">pParameters</span>[n].<span class="pl-smi">ParameterType</span>)</td>
      </tr>
      <tr>
        <td id="L2075" class="blob-num js-line-number" data-line-number="2075"></td>
        <td id="LC2075" class="blob-code blob-code-inner js-file-line">                            {</td>
      </tr>
      <tr>
        <td id="L2076" class="blob-num js-line-number" data-line-number="2076"></td>
        <td id="LC2076" class="blob-code blob-code-inner js-file-line">                            <span class="pl-k">case</span> D3D12_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS:</td>
      </tr>
      <tr>
        <td id="L2077" class="blob-num js-line-number" data-line-number="2077"></td>
        <td id="LC2077" class="blob-code blob-code-inner js-file-line">                                pParameters_1_0[n].<span class="pl-smi">Constants</span>.<span class="pl-smi">Num32BitValues</span> = desc_1_1.<span class="pl-smi">pParameters</span>[n].<span class="pl-smi">Constants</span>.<span class="pl-smi">Num32BitValues</span>;</td>
      </tr>
      <tr>
        <td id="L2078" class="blob-num js-line-number" data-line-number="2078"></td>
        <td id="LC2078" class="blob-code blob-code-inner js-file-line">                                pParameters_1_0[n].<span class="pl-smi">Constants</span>.<span class="pl-smi">RegisterSpace</span> = desc_1_1.<span class="pl-smi">pParameters</span>[n].<span class="pl-smi">Constants</span>.<span class="pl-smi">RegisterSpace</span>;</td>
      </tr>
      <tr>
        <td id="L2079" class="blob-num js-line-number" data-line-number="2079"></td>
        <td id="LC2079" class="blob-code blob-code-inner js-file-line">                                pParameters_1_0[n].<span class="pl-smi">Constants</span>.<span class="pl-smi">ShaderRegister</span> = desc_1_1.<span class="pl-smi">pParameters</span>[n].<span class="pl-smi">Constants</span>.<span class="pl-smi">ShaderRegister</span>;</td>
      </tr>
      <tr>
        <td id="L2080" class="blob-num js-line-number" data-line-number="2080"></td>
        <td id="LC2080" class="blob-code blob-code-inner js-file-line">                                <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2081" class="blob-num js-line-number" data-line-number="2081"></td>
        <td id="LC2081" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2082" class="blob-num js-line-number" data-line-number="2082"></td>
        <td id="LC2082" class="blob-code blob-code-inner js-file-line">                            <span class="pl-k">case</span> D3D12_ROOT_PARAMETER_TYPE_CBV:</td>
      </tr>
      <tr>
        <td id="L2083" class="blob-num js-line-number" data-line-number="2083"></td>
        <td id="LC2083" class="blob-code blob-code-inner js-file-line">                            <span class="pl-k">case</span> D3D12_ROOT_PARAMETER_TYPE_SRV:</td>
      </tr>
      <tr>
        <td id="L2084" class="blob-num js-line-number" data-line-number="2084"></td>
        <td id="LC2084" class="blob-code blob-code-inner js-file-line">                            <span class="pl-k">case</span> D3D12_ROOT_PARAMETER_TYPE_UAV:</td>
      </tr>
      <tr>
        <td id="L2085" class="blob-num js-line-number" data-line-number="2085"></td>
        <td id="LC2085" class="blob-code blob-code-inner js-file-line">                                pParameters_1_0[n].<span class="pl-smi">Descriptor</span>.<span class="pl-smi">RegisterSpace</span> = desc_1_1.<span class="pl-smi">pParameters</span>[n].<span class="pl-smi">Descriptor</span>.<span class="pl-smi">RegisterSpace</span>;</td>
      </tr>
      <tr>
        <td id="L2086" class="blob-num js-line-number" data-line-number="2086"></td>
        <td id="LC2086" class="blob-code blob-code-inner js-file-line">                                pParameters_1_0[n].<span class="pl-smi">Descriptor</span>.<span class="pl-smi">ShaderRegister</span> = desc_1_1.<span class="pl-smi">pParameters</span>[n].<span class="pl-smi">Descriptor</span>.<span class="pl-smi">ShaderRegister</span>;</td>
      </tr>
      <tr>
        <td id="L2087" class="blob-num js-line-number" data-line-number="2087"></td>
        <td id="LC2087" class="blob-code blob-code-inner js-file-line">                                <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2088" class="blob-num js-line-number" data-line-number="2088"></td>
        <td id="LC2088" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2089" class="blob-num js-line-number" data-line-number="2089"></td>
        <td id="LC2089" class="blob-code blob-code-inner js-file-line">                            <span class="pl-k">case</span> D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE:</td>
      </tr>
      <tr>
        <td id="L2090" class="blob-num js-line-number" data-line-number="2090"></td>
        <td id="LC2090" class="blob-code blob-code-inner js-file-line">                                <span class="pl-k">const</span> D3D12_ROOT_DESCRIPTOR_TABLE1&amp; table_1_1 = desc_1_1.<span class="pl-smi">pParameters</span>[n].<span class="pl-smi">DescriptorTable</span>;</td>
      </tr>
      <tr>
        <td id="L2091" class="blob-num js-line-number" data-line-number="2091"></td>
        <td id="LC2091" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2092" class="blob-num js-line-number" data-line-number="2092"></td>
        <td id="LC2092" class="blob-code blob-code-inner js-file-line">                                <span class="pl-k">const</span> SIZE_T DescriptorRangesSize = <span class="pl-k">sizeof</span>(D3D12_DESCRIPTOR_RANGE) * table_1_1.<span class="pl-smi">NumDescriptorRanges</span>;</td>
      </tr>
      <tr>
        <td id="L2093" class="blob-num js-line-number" data-line-number="2093"></td>
        <td id="LC2093" class="blob-code blob-code-inner js-file-line">                                <span class="pl-k">void</span>* pDescriptorRanges = (DescriptorRangesSize &gt; <span class="pl-c1">0</span> &amp;&amp; <span class="pl-c1">SUCCEEDED</span>(hr)) ? <span class="pl-c1">HeapAlloc</span>(<span class="pl-c1">GetProcessHeap</span>(), <span class="pl-c1">0</span>, DescriptorRangesSize) : nullptr;</td>
      </tr>
      <tr>
        <td id="L2094" class="blob-num js-line-number" data-line-number="2094"></td>
        <td id="LC2094" class="blob-code blob-code-inner js-file-line">                                <span class="pl-k">if</span> (DescriptorRangesSize &gt; <span class="pl-c1">0</span> &amp;&amp; pDescriptorRanges == nullptr)</td>
      </tr>
      <tr>
        <td id="L2095" class="blob-num js-line-number" data-line-number="2095"></td>
        <td id="LC2095" class="blob-code blob-code-inner js-file-line">                                {</td>
      </tr>
      <tr>
        <td id="L2096" class="blob-num js-line-number" data-line-number="2096"></td>
        <td id="LC2096" class="blob-code blob-code-inner js-file-line">                                    hr = E_OUTOFMEMORY;</td>
      </tr>
      <tr>
        <td id="L2097" class="blob-num js-line-number" data-line-number="2097"></td>
        <td id="LC2097" class="blob-code blob-code-inner js-file-line">                                }</td>
      </tr>
      <tr>
        <td id="L2098" class="blob-num js-line-number" data-line-number="2098"></td>
        <td id="LC2098" class="blob-code blob-code-inner js-file-line">                                <span class="pl-k">auto</span> pDescriptorRanges_1_0 = reinterpret_cast&lt;D3D12_DESCRIPTOR_RANGE*&gt;(pDescriptorRanges);</td>
      </tr>
      <tr>
        <td id="L2099" class="blob-num js-line-number" data-line-number="2099"></td>
        <td id="LC2099" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2100" class="blob-num js-line-number" data-line-number="2100"></td>
        <td id="LC2100" class="blob-code blob-code-inner js-file-line">                                <span class="pl-k">if</span> (<span class="pl-c1">SUCCEEDED</span>(hr))</td>
      </tr>
      <tr>
        <td id="L2101" class="blob-num js-line-number" data-line-number="2101"></td>
        <td id="LC2101" class="blob-code blob-code-inner js-file-line">                                {</td>
      </tr>
      <tr>
        <td id="L2102" class="blob-num js-line-number" data-line-number="2102"></td>
        <td id="LC2102" class="blob-code blob-code-inner js-file-line">                                    <span class="pl-k">for</span> (UINT x = <span class="pl-c1">0</span>; x &lt; table_1_1.<span class="pl-smi">NumDescriptorRanges</span>; x++)</td>
      </tr>
      <tr>
        <td id="L2103" class="blob-num js-line-number" data-line-number="2103"></td>
        <td id="LC2103" class="blob-code blob-code-inner js-file-line">                                    {</td>
      </tr>
      <tr>
        <td id="L2104" class="blob-num js-line-number" data-line-number="2104"></td>
        <td id="LC2104" class="blob-code blob-code-inner js-file-line">                                        <span class="pl-c1">__analysis_assume</span>(DescriptorRangesSize == <span class="pl-k">sizeof</span>(D3D12_DESCRIPTOR_RANGE) * table_1_1.<span class="pl-smi">NumDescriptorRanges</span>);</td>
      </tr>
      <tr>
        <td id="L2105" class="blob-num js-line-number" data-line-number="2105"></td>
        <td id="LC2105" class="blob-code blob-code-inner js-file-line">                                        pDescriptorRanges_1_0[x].<span class="pl-smi">BaseShaderRegister</span> = table_1_1.<span class="pl-smi">pDescriptorRanges</span>[x].<span class="pl-smi">BaseShaderRegister</span>;</td>
      </tr>
      <tr>
        <td id="L2106" class="blob-num js-line-number" data-line-number="2106"></td>
        <td id="LC2106" class="blob-code blob-code-inner js-file-line">                                        pDescriptorRanges_1_0[x].<span class="pl-smi">NumDescriptors</span> = table_1_1.<span class="pl-smi">pDescriptorRanges</span>[x].<span class="pl-smi">NumDescriptors</span>;</td>
      </tr>
      <tr>
        <td id="L2107" class="blob-num js-line-number" data-line-number="2107"></td>
        <td id="LC2107" class="blob-code blob-code-inner js-file-line">                                        pDescriptorRanges_1_0[x].<span class="pl-smi">OffsetInDescriptorsFromTableStart</span> = table_1_1.<span class="pl-smi">pDescriptorRanges</span>[x].<span class="pl-smi">OffsetInDescriptorsFromTableStart</span>;</td>
      </tr>
      <tr>
        <td id="L2108" class="blob-num js-line-number" data-line-number="2108"></td>
        <td id="LC2108" class="blob-code blob-code-inner js-file-line">                                        pDescriptorRanges_1_0[x].<span class="pl-smi">RangeType</span> = table_1_1.<span class="pl-smi">pDescriptorRanges</span>[x].<span class="pl-smi">RangeType</span>;</td>
      </tr>
      <tr>
        <td id="L2109" class="blob-num js-line-number" data-line-number="2109"></td>
        <td id="LC2109" class="blob-code blob-code-inner js-file-line">                                        pDescriptorRanges_1_0[x].<span class="pl-smi">RegisterSpace</span> = table_1_1.<span class="pl-smi">pDescriptorRanges</span>[x].<span class="pl-smi">RegisterSpace</span>;</td>
      </tr>
      <tr>
        <td id="L2110" class="blob-num js-line-number" data-line-number="2110"></td>
        <td id="LC2110" class="blob-code blob-code-inner js-file-line">                                    }</td>
      </tr>
      <tr>
        <td id="L2111" class="blob-num js-line-number" data-line-number="2111"></td>
        <td id="LC2111" class="blob-code blob-code-inner js-file-line">                                }</td>
      </tr>
      <tr>
        <td id="L2112" class="blob-num js-line-number" data-line-number="2112"></td>
        <td id="LC2112" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2113" class="blob-num js-line-number" data-line-number="2113"></td>
        <td id="LC2113" class="blob-code blob-code-inner js-file-line">                                D3D12_ROOT_DESCRIPTOR_TABLE&amp; table_1_0 = pParameters_1_0[n].<span class="pl-smi">DescriptorTable</span>;</td>
      </tr>
      <tr>
        <td id="L2114" class="blob-num js-line-number" data-line-number="2114"></td>
        <td id="LC2114" class="blob-code blob-code-inner js-file-line">                                table_1_0.<span class="pl-smi">NumDescriptorRanges</span> = table_1_1.<span class="pl-smi">NumDescriptorRanges</span>;</td>
      </tr>
      <tr>
        <td id="L2115" class="blob-num js-line-number" data-line-number="2115"></td>
        <td id="LC2115" class="blob-code blob-code-inner js-file-line">                                table_1_0.<span class="pl-smi">pDescriptorRanges</span> = pDescriptorRanges_1_0;</td>
      </tr>
      <tr>
        <td id="L2116" class="blob-num js-line-number" data-line-number="2116"></td>
        <td id="LC2116" class="blob-code blob-code-inner js-file-line">                            }</td>
      </tr>
      <tr>
        <td id="L2117" class="blob-num js-line-number" data-line-number="2117"></td>
        <td id="LC2117" class="blob-code blob-code-inner js-file-line">                        }</td>
      </tr>
      <tr>
        <td id="L2118" class="blob-num js-line-number" data-line-number="2118"></td>
        <td id="LC2118" class="blob-code blob-code-inner js-file-line">                    }</td>
      </tr>
      <tr>
        <td id="L2119" class="blob-num js-line-number" data-line-number="2119"></td>
        <td id="LC2119" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2120" class="blob-num js-line-number" data-line-number="2120"></td>
        <td id="LC2120" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">if</span> (<span class="pl-c1">SUCCEEDED</span>(hr))</td>
      </tr>
      <tr>
        <td id="L2121" class="blob-num js-line-number" data-line-number="2121"></td>
        <td id="LC2121" class="blob-code blob-code-inner js-file-line">                    {</td>
      </tr>
      <tr>
        <td id="L2122" class="blob-num js-line-number" data-line-number="2122"></td>
        <td id="LC2122" class="blob-code blob-code-inner js-file-line">                        CD3DX12_ROOT_SIGNATURE_DESC <span class="pl-smi">desc_1_0</span>(desc_1_1.<span class="pl-smi">NumParameters</span>, pParameters_1_0, desc_1_1.<span class="pl-smi">NumStaticSamplers</span>, desc_1_1.<span class="pl-smi">pStaticSamplers</span>, desc_1_1.<span class="pl-smi">Flags</span>);</td>
      </tr>
      <tr>
        <td id="L2123" class="blob-num js-line-number" data-line-number="2123"></td>
        <td id="LC2123" class="blob-code blob-code-inner js-file-line">                        hr = <span class="pl-c1">D3D12SerializeRootSignature</span>(&amp;desc_1_0, D3D_ROOT_SIGNATURE_VERSION_1, ppBlob, ppErrorBlob);</td>
      </tr>
      <tr>
        <td id="L2124" class="blob-num js-line-number" data-line-number="2124"></td>
        <td id="LC2124" class="blob-code blob-code-inner js-file-line">                    }</td>
      </tr>
      <tr>
        <td id="L2125" class="blob-num js-line-number" data-line-number="2125"></td>
        <td id="LC2125" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2126" class="blob-num js-line-number" data-line-number="2126"></td>
        <td id="LC2126" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">if</span> (pParameters)</td>
      </tr>
      <tr>
        <td id="L2127" class="blob-num js-line-number" data-line-number="2127"></td>
        <td id="LC2127" class="blob-code blob-code-inner js-file-line">                    {</td>
      </tr>
      <tr>
        <td id="L2128" class="blob-num js-line-number" data-line-number="2128"></td>
        <td id="LC2128" class="blob-code blob-code-inner js-file-line">                        <span class="pl-k">for</span> (UINT n = <span class="pl-c1">0</span>; n &lt; desc_1_1.<span class="pl-smi">NumParameters</span>; n++)</td>
      </tr>
      <tr>
        <td id="L2129" class="blob-num js-line-number" data-line-number="2129"></td>
        <td id="LC2129" class="blob-code blob-code-inner js-file-line">                        {</td>
      </tr>
      <tr>
        <td id="L2130" class="blob-num js-line-number" data-line-number="2130"></td>
        <td id="LC2130" class="blob-code blob-code-inner js-file-line">                            <span class="pl-k">if</span> (desc_1_1.<span class="pl-smi">pParameters</span>[n].<span class="pl-smi">ParameterType</span> == D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE)</td>
      </tr>
      <tr>
        <td id="L2131" class="blob-num js-line-number" data-line-number="2131"></td>
        <td id="LC2131" class="blob-code blob-code-inner js-file-line">                            {</td>
      </tr>
      <tr>
        <td id="L2132" class="blob-num js-line-number" data-line-number="2132"></td>
        <td id="LC2132" class="blob-code blob-code-inner js-file-line">                                <span class="pl-c1">HeapFree</span>(<span class="pl-c1">GetProcessHeap</span>(), <span class="pl-c1">0</span>, reinterpret_cast&lt;<span class="pl-k">void</span>*&gt;(const_cast&lt;D3D12_DESCRIPTOR_RANGE*&gt;(pParameters_1_0[n].<span class="pl-smi">DescriptorTable</span>.<span class="pl-smi">pDescriptorRanges</span>)));</td>
      </tr>
      <tr>
        <td id="L2133" class="blob-num js-line-number" data-line-number="2133"></td>
        <td id="LC2133" class="blob-code blob-code-inner js-file-line">                            }</td>
      </tr>
      <tr>
        <td id="L2134" class="blob-num js-line-number" data-line-number="2134"></td>
        <td id="LC2134" class="blob-code blob-code-inner js-file-line">                        }</td>
      </tr>
      <tr>
        <td id="L2135" class="blob-num js-line-number" data-line-number="2135"></td>
        <td id="LC2135" class="blob-code blob-code-inner js-file-line">                        <span class="pl-c1">HeapFree</span>(<span class="pl-c1">GetProcessHeap</span>(), <span class="pl-c1">0</span>, pParameters);</td>
      </tr>
      <tr>
        <td id="L2136" class="blob-num js-line-number" data-line-number="2136"></td>
        <td id="LC2136" class="blob-code blob-code-inner js-file-line">                    }</td>
      </tr>
      <tr>
        <td id="L2137" class="blob-num js-line-number" data-line-number="2137"></td>
        <td id="LC2137" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">return</span> hr;</td>
      </tr>
      <tr>
        <td id="L2138" class="blob-num js-line-number" data-line-number="2138"></td>
        <td id="LC2138" class="blob-code blob-code-inner js-file-line">                }</td>
      </tr>
      <tr>
        <td id="L2139" class="blob-num js-line-number" data-line-number="2139"></td>
        <td id="LC2139" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L2140" class="blob-num js-line-number" data-line-number="2140"></td>
        <td id="LC2140" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2141" class="blob-num js-line-number" data-line-number="2141"></td>
        <td id="LC2141" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2142" class="blob-num js-line-number" data-line-number="2142"></td>
        <td id="LC2142" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D_ROOT_SIGNATURE_VERSION_1_1:</td>
      </tr>
      <tr>
        <td id="L2143" class="blob-num js-line-number" data-line-number="2143"></td>
        <td id="LC2143" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">return</span> <span class="pl-c1">D3D12SerializeVersionedRootSignature</span>(pRootSignatureDesc, ppBlob, ppErrorBlob);</td>
      </tr>
      <tr>
        <td id="L2144" class="blob-num js-line-number" data-line-number="2144"></td>
        <td id="LC2144" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2145" class="blob-num js-line-number" data-line-number="2145"></td>
        <td id="LC2145" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2146" class="blob-num js-line-number" data-line-number="2146"></td>
        <td id="LC2146" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> E_INVALIDARG;</td>
      </tr>
      <tr>
        <td id="L2147" class="blob-num js-line-number" data-line-number="2147"></td>
        <td id="LC2147" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2148" class="blob-num js-line-number" data-line-number="2148"></td>
        <td id="LC2148" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2149" class="blob-num js-line-number" data-line-number="2149"></td>
        <td id="LC2149" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L2150" class="blob-num js-line-number" data-line-number="2150"></td>
        <td id="LC2150" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_RT_FORMAT_ARRAY : public D3D12_RT_FORMAT_ARRAY</td>
      </tr>
      <tr>
        <td id="L2151" class="blob-num js-line-number" data-line-number="2151"></td>
        <td id="LC2151" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2152" class="blob-num js-line-number" data-line-number="2152"></td>
        <td id="LC2152" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_RT_FORMAT_ARRAY</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L2153" class="blob-num js-line-number" data-line-number="2153"></td>
        <td id="LC2153" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_RT_FORMAT_ARRAY</span>(<span class="pl-k">const</span> D3D12_RT_FORMAT_ARRAY&amp; o)</td>
      </tr>
      <tr>
        <td id="L2154" class="blob-num js-line-number" data-line-number="2154"></td>
        <td id="LC2154" class="blob-code blob-code-inner js-file-line">        : <span class="pl-c1">D3D12_RT_FORMAT_ARRAY</span>(o)</td>
      </tr>
      <tr>
        <td id="L2155" class="blob-num js-line-number" data-line-number="2155"></td>
        <td id="LC2155" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L2156" class="blob-num js-line-number" data-line-number="2156"></td>
        <td id="LC2156" class="blob-code blob-code-inner js-file-line">    explicit <span class="pl-smi">CD3DX12_RT_FORMAT_ARRAY</span>(<span class="pl-c1">_In_reads_</span>(NumFormats) <span class="pl-k">const</span> DXGI_FORMAT* pFormats, UINT NumFormats)</td>
      </tr>
      <tr>
        <td id="L2157" class="blob-num js-line-number" data-line-number="2157"></td>
        <td id="LC2157" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2158" class="blob-num js-line-number" data-line-number="2158"></td>
        <td id="LC2158" class="blob-code blob-code-inner js-file-line">        NumRenderTargets = NumFormats;</td>
      </tr>
      <tr>
        <td id="L2159" class="blob-num js-line-number" data-line-number="2159"></td>
        <td id="LC2159" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">memcpy</span>(RTFormats, pFormats, <span class="pl-k">sizeof</span>(RTFormats));</td>
      </tr>
      <tr>
        <td id="L2160" class="blob-num js-line-number" data-line-number="2160"></td>
        <td id="LC2160" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span> assumes ARRAY_SIZE(pFormats) == ARRAY_SIZE(RTFormats)</span></td>
      </tr>
      <tr>
        <td id="L2161" class="blob-num js-line-number" data-line-number="2161"></td>
        <td id="LC2161" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2162" class="blob-num js-line-number" data-line-number="2162"></td>
        <td id="LC2162" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2163" class="blob-num js-line-number" data-line-number="2163"></td>
        <td id="LC2163" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2164" class="blob-num js-line-number" data-line-number="2164"></td>
        <td id="LC2164" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L2165" class="blob-num js-line-number" data-line-number="2165"></td>
        <td id="LC2165" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Pipeline State Stream Helpers</span></td>
      </tr>
      <tr>
        <td id="L2166" class="blob-num js-line-number" data-line-number="2166"></td>
        <td id="LC2166" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L2167" class="blob-num js-line-number" data-line-number="2167"></td>
        <td id="LC2167" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2168" class="blob-num js-line-number" data-line-number="2168"></td>
        <td id="LC2168" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L2169" class="blob-num js-line-number" data-line-number="2169"></td>
        <td id="LC2169" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Stream Subobjects, i.e. elements of a stream</span></td>
      </tr>
      <tr>
        <td id="L2170" class="blob-num js-line-number" data-line-number="2170"></td>
        <td id="LC2170" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2171" class="blob-num js-line-number" data-line-number="2171"></td>
        <td id="LC2171" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> DefaultSampleMask { operator <span class="pl-smi">UINT</span>() { <span class="pl-k">return</span> UINT_MAX; } };</td>
      </tr>
      <tr>
        <td id="L2172" class="blob-num js-line-number" data-line-number="2172"></td>
        <td id="LC2172" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> DefaultSampleDesc { operator <span class="pl-smi">DXGI_SAMPLE_DESC</span>() { <span class="pl-k">return</span> DXGI_SAMPLE_DESC{<span class="pl-c1">1</span>, <span class="pl-c1">0</span>}; } };</td>
      </tr>
      <tr>
        <td id="L2173" class="blob-num js-line-number" data-line-number="2173"></td>
        <td id="LC2173" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2174" class="blob-num js-line-number" data-line-number="2174"></td>
        <td id="LC2174" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">pragma</span> warning(push)</td>
      </tr>
      <tr>
        <td id="L2175" class="blob-num js-line-number" data-line-number="2175"></td>
        <td id="LC2175" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">pragma</span> warning(disable : 4324)</td>
      </tr>
      <tr>
        <td id="L2176" class="blob-num js-line-number" data-line-number="2176"></td>
        <td id="LC2176" class="blob-code blob-code-inner js-file-line">template &lt;typename InnerStructType, D3D12_PIPELINE_STATE_SUBOBJECT_TYPE Type, typename DefaultArg = InnerStructType&gt;</td>
      </tr>
      <tr>
        <td id="L2177" class="blob-num js-line-number" data-line-number="2177"></td>
        <td id="LC2177" class="blob-code blob-code-inner js-file-line">class <span class="pl-en">alignas</span>(<span class="pl-k">void</span>*) CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT</td>
      </tr>
      <tr>
        <td id="L2178" class="blob-num js-line-number" data-line-number="2178"></td>
        <td id="LC2178" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2179" class="blob-num js-line-number" data-line-number="2179"></td>
        <td id="LC2179" class="blob-code blob-code-inner js-file-line">private:</td>
      </tr>
      <tr>
        <td id="L2180" class="blob-num js-line-number" data-line-number="2180"></td>
        <td id="LC2180" class="blob-code blob-code-inner js-file-line">    D3D12_PIPELINE_STATE_SUBOBJECT_TYPE _Type;</td>
      </tr>
      <tr>
        <td id="L2181" class="blob-num js-line-number" data-line-number="2181"></td>
        <td id="LC2181" class="blob-code blob-code-inner js-file-line">    InnerStructType _Inner;</td>
      </tr>
      <tr>
        <td id="L2182" class="blob-num js-line-number" data-line-number="2182"></td>
        <td id="LC2182" class="blob-code blob-code-inner js-file-line">public:</td>
      </tr>
      <tr>
        <td id="L2183" class="blob-num js-line-number" data-line-number="2183"></td>
        <td id="LC2183" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT</span>() noexcept : <span class="pl-c1">_Type</span>(Type), <span class="pl-c1">_Inner</span>(<span class="pl-c1">DefaultArg</span>()) {}</td>
      </tr>
      <tr>
        <td id="L2184" class="blob-num js-line-number" data-line-number="2184"></td>
        <td id="LC2184" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT</span>(InnerStructType <span class="pl-k">const</span>&amp; i) : <span class="pl-c1">_Type</span>(Type), <span class="pl-c1">_Inner</span>(i) {}</td>
      </tr>
      <tr>
        <td id="L2185" class="blob-num js-line-number" data-line-number="2185"></td>
        <td id="LC2185" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&amp; operator=(InnerStructType <span class="pl-k">const</span>&amp; i) { _Inner = i; <span class="pl-k">return</span> *this; }</td>
      </tr>
      <tr>
        <td id="L2186" class="blob-num js-line-number" data-line-number="2186"></td>
        <td id="LC2186" class="blob-code blob-code-inner js-file-line">    operator InnerStructType <span class="pl-k">const</span>&amp;() <span class="pl-k">const</span> { <span class="pl-k">return</span> _Inner; }</td>
      </tr>
      <tr>
        <td id="L2187" class="blob-num js-line-number" data-line-number="2187"></td>
        <td id="LC2187" class="blob-code blob-code-inner js-file-line">    operator InnerStructType&amp;() { <span class="pl-k">return</span> _Inner; }</td>
      </tr>
      <tr>
        <td id="L2188" class="blob-num js-line-number" data-line-number="2188"></td>
        <td id="LC2188" class="blob-code blob-code-inner js-file-line">    InnerStructType* operator&amp;() { <span class="pl-k">return</span> &amp;_Inner; }</td>
      </tr>
      <tr>
        <td id="L2189" class="blob-num js-line-number" data-line-number="2189"></td>
        <td id="LC2189" class="blob-code blob-code-inner js-file-line">    InnerStructType <span class="pl-k">const</span>* operator&amp;() <span class="pl-k">const</span> { <span class="pl-k">return</span> &amp;_Inner; }</td>
      </tr>
      <tr>
        <td id="L2190" class="blob-num js-line-number" data-line-number="2190"></td>
        <td id="LC2190" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2191" class="blob-num js-line-number" data-line-number="2191"></td>
        <td id="LC2191" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">pragma</span> warning(pop)</td>
      </tr>
      <tr>
        <td id="L2192" class="blob-num js-line-number" data-line-number="2192"></td>
        <td id="LC2192" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; D3D12_PIPELINE_STATE_FLAGS,         D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_FLAGS&gt;                             CD3DX12_PIPELINE_STATE_STREAM_FLAGS;</td>
      </tr>
      <tr>
        <td id="L2193" class="blob-num js-line-number" data-line-number="2193"></td>
        <td id="LC2193" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; UINT,                               D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_NODE_MASK&gt;                         CD3DX12_PIPELINE_STATE_STREAM_NODE_MASK;</td>
      </tr>
      <tr>
        <td id="L2194" class="blob-num js-line-number" data-line-number="2194"></td>
        <td id="LC2194" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; ID3D12RootSignature*,               D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_ROOT_SIGNATURE&gt;                    CD3DX12_PIPELINE_STATE_STREAM_ROOT_SIGNATURE;</td>
      </tr>
      <tr>
        <td id="L2195" class="blob-num js-line-number" data-line-number="2195"></td>
        <td id="LC2195" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; D3D12_INPUT_LAYOUT_DESC,            D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_INPUT_LAYOUT&gt;                      CD3DX12_PIPELINE_STATE_STREAM_INPUT_LAYOUT;</td>
      </tr>
      <tr>
        <td id="L2196" class="blob-num js-line-number" data-line-number="2196"></td>
        <td id="LC2196" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; D3D12_INDEX_BUFFER_STRIP_CUT_VALUE, D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_IB_STRIP_CUT_VALUE&gt;                CD3DX12_PIPELINE_STATE_STREAM_IB_STRIP_CUT_VALUE;</td>
      </tr>
      <tr>
        <td id="L2197" class="blob-num js-line-number" data-line-number="2197"></td>
        <td id="LC2197" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; D3D12_PRIMITIVE_TOPOLOGY_TYPE,      D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_PRIMITIVE_TOPOLOGY&gt;                CD3DX12_PIPELINE_STATE_STREAM_PRIMITIVE_TOPOLOGY;</td>
      </tr>
      <tr>
        <td id="L2198" class="blob-num js-line-number" data-line-number="2198"></td>
        <td id="LC2198" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; D3D12_SHADER_BYTECODE,              D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_VS&gt;                                CD3DX12_PIPELINE_STATE_STREAM_VS;</td>
      </tr>
      <tr>
        <td id="L2199" class="blob-num js-line-number" data-line-number="2199"></td>
        <td id="LC2199" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; D3D12_SHADER_BYTECODE,              D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_GS&gt;                                CD3DX12_PIPELINE_STATE_STREAM_GS;</td>
      </tr>
      <tr>
        <td id="L2200" class="blob-num js-line-number" data-line-number="2200"></td>
        <td id="LC2200" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; D3D12_STREAM_OUTPUT_DESC,           D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_STREAM_OUTPUT&gt;                     CD3DX12_PIPELINE_STATE_STREAM_STREAM_OUTPUT;</td>
      </tr>
      <tr>
        <td id="L2201" class="blob-num js-line-number" data-line-number="2201"></td>
        <td id="LC2201" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; D3D12_SHADER_BYTECODE,              D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_HS&gt;                                CD3DX12_PIPELINE_STATE_STREAM_HS;</td>
      </tr>
      <tr>
        <td id="L2202" class="blob-num js-line-number" data-line-number="2202"></td>
        <td id="LC2202" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; D3D12_SHADER_BYTECODE,              D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DS&gt;                                CD3DX12_PIPELINE_STATE_STREAM_DS;</td>
      </tr>
      <tr>
        <td id="L2203" class="blob-num js-line-number" data-line-number="2203"></td>
        <td id="LC2203" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; D3D12_SHADER_BYTECODE,              D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_PS&gt;                                CD3DX12_PIPELINE_STATE_STREAM_PS;</td>
      </tr>
      <tr>
        <td id="L2204" class="blob-num js-line-number" data-line-number="2204"></td>
        <td id="LC2204" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; D3D12_SHADER_BYTECODE,              D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_CS&gt;                                CD3DX12_PIPELINE_STATE_STREAM_CS;</td>
      </tr>
      <tr>
        <td id="L2205" class="blob-num js-line-number" data-line-number="2205"></td>
        <td id="LC2205" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; CD3DX12_BLEND_DESC,                 D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_BLEND,          CD3DX12_DEFAULT&gt;   CD3DX12_PIPELINE_STATE_STREAM_BLEND_DESC;</td>
      </tr>
      <tr>
        <td id="L2206" class="blob-num js-line-number" data-line-number="2206"></td>
        <td id="LC2206" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; CD3DX12_DEPTH_STENCIL_DESC,         D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DEPTH_STENCIL,  CD3DX12_DEFAULT&gt;   CD3DX12_PIPELINE_STATE_STREAM_DEPTH_STENCIL;</td>
      </tr>
      <tr>
        <td id="L2207" class="blob-num js-line-number" data-line-number="2207"></td>
        <td id="LC2207" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; CD3DX12_DEPTH_STENCIL_DESC1,        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DEPTH_STENCIL1, CD3DX12_DEFAULT&gt;   CD3DX12_PIPELINE_STATE_STREAM_DEPTH_STENCIL1;</td>
      </tr>
      <tr>
        <td id="L2208" class="blob-num js-line-number" data-line-number="2208"></td>
        <td id="LC2208" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; DXGI_FORMAT,                        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DEPTH_STENCIL_FORMAT&gt;              CD3DX12_PIPELINE_STATE_STREAM_DEPTH_STENCIL_FORMAT;</td>
      </tr>
      <tr>
        <td id="L2209" class="blob-num js-line-number" data-line-number="2209"></td>
        <td id="LC2209" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; CD3DX12_RASTERIZER_DESC,            D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_RASTERIZER,     CD3DX12_DEFAULT&gt;   CD3DX12_PIPELINE_STATE_STREAM_RASTERIZER;</td>
      </tr>
      <tr>
        <td id="L2210" class="blob-num js-line-number" data-line-number="2210"></td>
        <td id="LC2210" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; D3D12_RT_FORMAT_ARRAY,              D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_RENDER_TARGET_FORMATS&gt;             CD3DX12_PIPELINE_STATE_STREAM_RENDER_TARGET_FORMATS;</td>
      </tr>
      <tr>
        <td id="L2211" class="blob-num js-line-number" data-line-number="2211"></td>
        <td id="LC2211" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; DXGI_SAMPLE_DESC,                   D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_SAMPLE_DESC,    DefaultSampleDesc&gt; CD3DX12_PIPELINE_STATE_STREAM_SAMPLE_DESC;</td>
      </tr>
      <tr>
        <td id="L2212" class="blob-num js-line-number" data-line-number="2212"></td>
        <td id="LC2212" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; UINT,                               D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_SAMPLE_MASK,    DefaultSampleMask&gt; CD3DX12_PIPELINE_STATE_STREAM_SAMPLE_MASK;</td>
      </tr>
      <tr>
        <td id="L2213" class="blob-num js-line-number" data-line-number="2213"></td>
        <td id="LC2213" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; D3D12_CACHED_PIPELINE_STATE,        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_CACHED_PSO&gt;                        CD3DX12_PIPELINE_STATE_STREAM_CACHED_PSO;</td>
      </tr>
      <tr>
        <td id="L2214" class="blob-num js-line-number" data-line-number="2214"></td>
        <td id="LC2214" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT&lt; CD3DX12_VIEW_INSTANCING_DESC,       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_VIEW_INSTANCING, CD3DX12_DEFAULT&gt;  CD3DX12_PIPELINE_STATE_STREAM_VIEW_INSTANCING;</td>
      </tr>
      <tr>
        <td id="L2215" class="blob-num js-line-number" data-line-number="2215"></td>
        <td id="LC2215" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2216" class="blob-num js-line-number" data-line-number="2216"></td>
        <td id="LC2216" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L2217" class="blob-num js-line-number" data-line-number="2217"></td>
        <td id="LC2217" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Stream Parser Helpers</span></td>
      </tr>
      <tr>
        <td id="L2218" class="blob-num js-line-number" data-line-number="2218"></td>
        <td id="LC2218" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2219" class="blob-num js-line-number" data-line-number="2219"></td>
        <td id="LC2219" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> ID3DX12PipelineParserCallbacks</td>
      </tr>
      <tr>
        <td id="L2220" class="blob-num js-line-number" data-line-number="2220"></td>
        <td id="LC2220" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2221" class="blob-num js-line-number" data-line-number="2221"></td>
        <td id="LC2221" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Subobject Callbacks</span></td>
      </tr>
      <tr>
        <td id="L2222" class="blob-num js-line-number" data-line-number="2222"></td>
        <td id="LC2222" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">FlagsCb</span>(D3D12_PIPELINE_STATE_FLAGS) {}</td>
      </tr>
      <tr>
        <td id="L2223" class="blob-num js-line-number" data-line-number="2223"></td>
        <td id="LC2223" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">NodeMaskCb</span>(UINT) {}</td>
      </tr>
      <tr>
        <td id="L2224" class="blob-num js-line-number" data-line-number="2224"></td>
        <td id="LC2224" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">RootSignatureCb</span>(ID3D12RootSignature*) {}</td>
      </tr>
      <tr>
        <td id="L2225" class="blob-num js-line-number" data-line-number="2225"></td>
        <td id="LC2225" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">InputLayoutCb</span>(<span class="pl-k">const</span> D3D12_INPUT_LAYOUT_DESC&amp;) {}</td>
      </tr>
      <tr>
        <td id="L2226" class="blob-num js-line-number" data-line-number="2226"></td>
        <td id="LC2226" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">IBStripCutValueCb</span>(D3D12_INDEX_BUFFER_STRIP_CUT_VALUE) {}</td>
      </tr>
      <tr>
        <td id="L2227" class="blob-num js-line-number" data-line-number="2227"></td>
        <td id="LC2227" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">PrimitiveTopologyTypeCb</span>(D3D12_PRIMITIVE_TOPOLOGY_TYPE) {}</td>
      </tr>
      <tr>
        <td id="L2228" class="blob-num js-line-number" data-line-number="2228"></td>
        <td id="LC2228" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">VSCb</span>(<span class="pl-k">const</span> D3D12_SHADER_BYTECODE&amp;) {}</td>
      </tr>
      <tr>
        <td id="L2229" class="blob-num js-line-number" data-line-number="2229"></td>
        <td id="LC2229" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">GSCb</span>(<span class="pl-k">const</span> D3D12_SHADER_BYTECODE&amp;) {}</td>
      </tr>
      <tr>
        <td id="L2230" class="blob-num js-line-number" data-line-number="2230"></td>
        <td id="LC2230" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">StreamOutputCb</span>(<span class="pl-k">const</span> D3D12_STREAM_OUTPUT_DESC&amp;) {}</td>
      </tr>
      <tr>
        <td id="L2231" class="blob-num js-line-number" data-line-number="2231"></td>
        <td id="LC2231" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">HSCb</span>(<span class="pl-k">const</span> D3D12_SHADER_BYTECODE&amp;) {}</td>
      </tr>
      <tr>
        <td id="L2232" class="blob-num js-line-number" data-line-number="2232"></td>
        <td id="LC2232" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">DSCb</span>(<span class="pl-k">const</span> D3D12_SHADER_BYTECODE&amp;) {}</td>
      </tr>
      <tr>
        <td id="L2233" class="blob-num js-line-number" data-line-number="2233"></td>
        <td id="LC2233" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">PSCb</span>(<span class="pl-k">const</span> D3D12_SHADER_BYTECODE&amp;) {}</td>
      </tr>
      <tr>
        <td id="L2234" class="blob-num js-line-number" data-line-number="2234"></td>
        <td id="LC2234" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">CSCb</span>(<span class="pl-k">const</span> D3D12_SHADER_BYTECODE&amp;) {}</td>
      </tr>
      <tr>
        <td id="L2235" class="blob-num js-line-number" data-line-number="2235"></td>
        <td id="LC2235" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">BlendStateCb</span>(<span class="pl-k">const</span> D3D12_BLEND_DESC&amp;) {}</td>
      </tr>
      <tr>
        <td id="L2236" class="blob-num js-line-number" data-line-number="2236"></td>
        <td id="LC2236" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">DepthStencilStateCb</span>(<span class="pl-k">const</span> D3D12_DEPTH_STENCIL_DESC&amp;) {}</td>
      </tr>
      <tr>
        <td id="L2237" class="blob-num js-line-number" data-line-number="2237"></td>
        <td id="LC2237" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">DepthStencilState1Cb</span>(<span class="pl-k">const</span> D3D12_DEPTH_STENCIL_DESC1&amp;) {}</td>
      </tr>
      <tr>
        <td id="L2238" class="blob-num js-line-number" data-line-number="2238"></td>
        <td id="LC2238" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">DSVFormatCb</span>(DXGI_FORMAT) {}</td>
      </tr>
      <tr>
        <td id="L2239" class="blob-num js-line-number" data-line-number="2239"></td>
        <td id="LC2239" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">RasterizerStateCb</span>(<span class="pl-k">const</span> D3D12_RASTERIZER_DESC&amp;) {}</td>
      </tr>
      <tr>
        <td id="L2240" class="blob-num js-line-number" data-line-number="2240"></td>
        <td id="LC2240" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">RTVFormatsCb</span>(<span class="pl-k">const</span> D3D12_RT_FORMAT_ARRAY&amp;) {}</td>
      </tr>
      <tr>
        <td id="L2241" class="blob-num js-line-number" data-line-number="2241"></td>
        <td id="LC2241" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">SampleDescCb</span>(<span class="pl-k">const</span> DXGI_SAMPLE_DESC&amp;) {}</td>
      </tr>
      <tr>
        <td id="L2242" class="blob-num js-line-number" data-line-number="2242"></td>
        <td id="LC2242" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">SampleMaskCb</span>(UINT) {}</td>
      </tr>
      <tr>
        <td id="L2243" class="blob-num js-line-number" data-line-number="2243"></td>
        <td id="LC2243" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">ViewInstancingCb</span>(<span class="pl-k">const</span> D3D12_VIEW_INSTANCING_DESC&amp;) {}</td>
      </tr>
      <tr>
        <td id="L2244" class="blob-num js-line-number" data-line-number="2244"></td>
        <td id="LC2244" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">CachedPSOCb</span>(<span class="pl-k">const</span> D3D12_CACHED_PIPELINE_STATE&amp;) {}</td>
      </tr>
      <tr>
        <td id="L2245" class="blob-num js-line-number" data-line-number="2245"></td>
        <td id="LC2245" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2246" class="blob-num js-line-number" data-line-number="2246"></td>
        <td id="LC2246" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Error Callbacks</span></td>
      </tr>
      <tr>
        <td id="L2247" class="blob-num js-line-number" data-line-number="2247"></td>
        <td id="LC2247" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">ErrorBadInputParameter</span>(UINT <span class="pl-c"><span class="pl-c">/*</span>ParameterIndex<span class="pl-c">*/</span></span>) {}</td>
      </tr>
      <tr>
        <td id="L2248" class="blob-num js-line-number" data-line-number="2248"></td>
        <td id="LC2248" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">ErrorDuplicateSubobject</span>(D3D12_PIPELINE_STATE_SUBOBJECT_TYPE <span class="pl-c"><span class="pl-c">/*</span>DuplicateType<span class="pl-c">*/</span></span>) {}</td>
      </tr>
      <tr>
        <td id="L2249" class="blob-num js-line-number" data-line-number="2249"></td>
        <td id="LC2249" class="blob-code blob-code-inner js-file-line">    virtual <span class="pl-k">void</span> <span class="pl-smi">ErrorUnknownSubobject</span>(UINT <span class="pl-c"><span class="pl-c">/*</span>UnknownTypeValue<span class="pl-c">*/</span></span>) {}</td>
      </tr>
      <tr>
        <td id="L2250" class="blob-num js-line-number" data-line-number="2250"></td>
        <td id="LC2250" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2251" class="blob-num js-line-number" data-line-number="2251"></td>
        <td id="LC2251" class="blob-code blob-code-inner js-file-line">    virtual ~<span class="pl-c1">ID3DX12PipelineParserCallbacks</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L2252" class="blob-num js-line-number" data-line-number="2252"></td>
        <td id="LC2252" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2253" class="blob-num js-line-number" data-line-number="2253"></td>
        <td id="LC2253" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2254" class="blob-num js-line-number" data-line-number="2254"></td>
        <td id="LC2254" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> CD3DX12_PIPELINE_STATE_STREAM1 Works on RS3+ (where there is a new view instancing subobject).  </span></td>
      </tr>
      <tr>
        <td id="L2255" class="blob-num js-line-number" data-line-number="2255"></td>
        <td id="LC2255" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Use CD3DX12_PIPELINE_STATE_STREAM for RS2+ support.</span></td>
      </tr>
      <tr>
        <td id="L2256" class="blob-num js-line-number" data-line-number="2256"></td>
        <td id="LC2256" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_PIPELINE_STATE_STREAM1</td>
      </tr>
      <tr>
        <td id="L2257" class="blob-num js-line-number" data-line-number="2257"></td>
        <td id="LC2257" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2258" class="blob-num js-line-number" data-line-number="2258"></td>
        <td id="LC2258" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_PIPELINE_STATE_STREAM1</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L2259" class="blob-num js-line-number" data-line-number="2259"></td>
        <td id="LC2259" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_PIPELINE_STATE_STREAM1</span>(<span class="pl-k">const</span> D3D12_GRAPHICS_PIPELINE_STATE_DESC&amp; Desc)</td>
      </tr>
      <tr>
        <td id="L2260" class="blob-num js-line-number" data-line-number="2260"></td>
        <td id="LC2260" class="blob-code blob-code-inner js-file-line">        : <span class="pl-c1">Flags</span>(Desc.<span class="pl-smi">Flags</span>)</td>
      </tr>
      <tr>
        <td id="L2261" class="blob-num js-line-number" data-line-number="2261"></td>
        <td id="LC2261" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">NodeMask</span>(Desc.<span class="pl-smi">NodeMask</span>)</td>
      </tr>
      <tr>
        <td id="L2262" class="blob-num js-line-number" data-line-number="2262"></td>
        <td id="LC2262" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">pRootSignature</span>(Desc.<span class="pl-smi">pRootSignature</span>)</td>
      </tr>
      <tr>
        <td id="L2263" class="blob-num js-line-number" data-line-number="2263"></td>
        <td id="LC2263" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">InputLayout</span>(Desc.<span class="pl-smi">InputLayout</span>)</td>
      </tr>
      <tr>
        <td id="L2264" class="blob-num js-line-number" data-line-number="2264"></td>
        <td id="LC2264" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">IBStripCutValue</span>(Desc.<span class="pl-smi">IBStripCutValue</span>)</td>
      </tr>
      <tr>
        <td id="L2265" class="blob-num js-line-number" data-line-number="2265"></td>
        <td id="LC2265" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">PrimitiveTopologyType</span>(Desc.<span class="pl-smi">PrimitiveTopologyType</span>)</td>
      </tr>
      <tr>
        <td id="L2266" class="blob-num js-line-number" data-line-number="2266"></td>
        <td id="LC2266" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">VS</span>(Desc.<span class="pl-smi">VS</span>)</td>
      </tr>
      <tr>
        <td id="L2267" class="blob-num js-line-number" data-line-number="2267"></td>
        <td id="LC2267" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">GS</span>(Desc.<span class="pl-smi">GS</span>)</td>
      </tr>
      <tr>
        <td id="L2268" class="blob-num js-line-number" data-line-number="2268"></td>
        <td id="LC2268" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">StreamOutput</span>(Desc.<span class="pl-smi">StreamOutput</span>)</td>
      </tr>
      <tr>
        <td id="L2269" class="blob-num js-line-number" data-line-number="2269"></td>
        <td id="LC2269" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">HS</span>(Desc.<span class="pl-smi">HS</span>)</td>
      </tr>
      <tr>
        <td id="L2270" class="blob-num js-line-number" data-line-number="2270"></td>
        <td id="LC2270" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">DS</span>(Desc.<span class="pl-smi">DS</span>)</td>
      </tr>
      <tr>
        <td id="L2271" class="blob-num js-line-number" data-line-number="2271"></td>
        <td id="LC2271" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">PS</span>(Desc.<span class="pl-smi">PS</span>)</td>
      </tr>
      <tr>
        <td id="L2272" class="blob-num js-line-number" data-line-number="2272"></td>
        <td id="LC2272" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">BlendState</span>(<span class="pl-c1">CD3DX12_BLEND_DESC</span>(Desc.<span class="pl-smi">BlendState</span>))</td>
      </tr>
      <tr>
        <td id="L2273" class="blob-num js-line-number" data-line-number="2273"></td>
        <td id="LC2273" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">DepthStencilState</span>(<span class="pl-c1">CD3DX12_DEPTH_STENCIL_DESC1</span>(Desc.<span class="pl-smi">DepthStencilState</span>))</td>
      </tr>
      <tr>
        <td id="L2274" class="blob-num js-line-number" data-line-number="2274"></td>
        <td id="LC2274" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">DSVFormat</span>(Desc.<span class="pl-smi">DSVFormat</span>)</td>
      </tr>
      <tr>
        <td id="L2275" class="blob-num js-line-number" data-line-number="2275"></td>
        <td id="LC2275" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">RasterizerState</span>(<span class="pl-c1">CD3DX12_RASTERIZER_DESC</span>(Desc.<span class="pl-smi">RasterizerState</span>))</td>
      </tr>
      <tr>
        <td id="L2276" class="blob-num js-line-number" data-line-number="2276"></td>
        <td id="LC2276" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">RTVFormats</span>(<span class="pl-c1">CD3DX12_RT_FORMAT_ARRAY</span>(Desc.<span class="pl-smi">RTVFormats</span>, Desc.<span class="pl-smi">NumRenderTargets</span>))</td>
      </tr>
      <tr>
        <td id="L2277" class="blob-num js-line-number" data-line-number="2277"></td>
        <td id="LC2277" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">SampleDesc</span>(Desc.<span class="pl-smi">SampleDesc</span>)</td>
      </tr>
      <tr>
        <td id="L2278" class="blob-num js-line-number" data-line-number="2278"></td>
        <td id="LC2278" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">SampleMask</span>(Desc.<span class="pl-smi">SampleMask</span>)</td>
      </tr>
      <tr>
        <td id="L2279" class="blob-num js-line-number" data-line-number="2279"></td>
        <td id="LC2279" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">CachedPSO</span>(Desc.<span class="pl-smi">CachedPSO</span>)</td>
      </tr>
      <tr>
        <td id="L2280" class="blob-num js-line-number" data-line-number="2280"></td>
        <td id="LC2280" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">ViewInstancingDesc</span>(<span class="pl-c1">CD3DX12_VIEW_INSTANCING_DESC</span>(<span class="pl-c1">CD3DX12_DEFAULT</span>()))</td>
      </tr>
      <tr>
        <td id="L2281" class="blob-num js-line-number" data-line-number="2281"></td>
        <td id="LC2281" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L2282" class="blob-num js-line-number" data-line-number="2282"></td>
        <td id="LC2282" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_PIPELINE_STATE_STREAM1</span>(<span class="pl-k">const</span> D3D12_COMPUTE_PIPELINE_STATE_DESC&amp; Desc)</td>
      </tr>
      <tr>
        <td id="L2283" class="blob-num js-line-number" data-line-number="2283"></td>
        <td id="LC2283" class="blob-code blob-code-inner js-file-line">        : <span class="pl-c1">Flags</span>(Desc.<span class="pl-smi">Flags</span>)</td>
      </tr>
      <tr>
        <td id="L2284" class="blob-num js-line-number" data-line-number="2284"></td>
        <td id="LC2284" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">NodeMask</span>(Desc.<span class="pl-smi">NodeMask</span>)</td>
      </tr>
      <tr>
        <td id="L2285" class="blob-num js-line-number" data-line-number="2285"></td>
        <td id="LC2285" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">pRootSignature</span>(Desc.<span class="pl-smi">pRootSignature</span>)</td>
      </tr>
      <tr>
        <td id="L2286" class="blob-num js-line-number" data-line-number="2286"></td>
        <td id="LC2286" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">CS</span>(<span class="pl-c1">CD3DX12_SHADER_BYTECODE</span>(Desc.<span class="pl-smi">CS</span>))</td>
      </tr>
      <tr>
        <td id="L2287" class="blob-num js-line-number" data-line-number="2287"></td>
        <td id="LC2287" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">CachedPSO</span>(Desc.<span class="pl-smi">CachedPSO</span>)</td>
      </tr>
      <tr>
        <td id="L2288" class="blob-num js-line-number" data-line-number="2288"></td>
        <td id="LC2288" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2289" class="blob-num js-line-number" data-line-number="2289"></td>
        <td id="LC2289" class="blob-code blob-code-inner js-file-line">        static_cast&lt;D3D12_DEPTH_STENCIL_DESC1&amp;&gt;(DepthStencilState).<span class="pl-smi">DepthEnable</span> = <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2290" class="blob-num js-line-number" data-line-number="2290"></td>
        <td id="LC2290" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2291" class="blob-num js-line-number" data-line-number="2291"></td>
        <td id="LC2291" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_FLAGS Flags;</td>
      </tr>
      <tr>
        <td id="L2292" class="blob-num js-line-number" data-line-number="2292"></td>
        <td id="LC2292" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_NODE_MASK NodeMask;</td>
      </tr>
      <tr>
        <td id="L2293" class="blob-num js-line-number" data-line-number="2293"></td>
        <td id="LC2293" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_ROOT_SIGNATURE pRootSignature;</td>
      </tr>
      <tr>
        <td id="L2294" class="blob-num js-line-number" data-line-number="2294"></td>
        <td id="LC2294" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_INPUT_LAYOUT InputLayout;</td>
      </tr>
      <tr>
        <td id="L2295" class="blob-num js-line-number" data-line-number="2295"></td>
        <td id="LC2295" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_IB_STRIP_CUT_VALUE IBStripCutValue;</td>
      </tr>
      <tr>
        <td id="L2296" class="blob-num js-line-number" data-line-number="2296"></td>
        <td id="LC2296" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_PRIMITIVE_TOPOLOGY PrimitiveTopologyType;</td>
      </tr>
      <tr>
        <td id="L2297" class="blob-num js-line-number" data-line-number="2297"></td>
        <td id="LC2297" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_VS VS;</td>
      </tr>
      <tr>
        <td id="L2298" class="blob-num js-line-number" data-line-number="2298"></td>
        <td id="LC2298" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_GS GS;</td>
      </tr>
      <tr>
        <td id="L2299" class="blob-num js-line-number" data-line-number="2299"></td>
        <td id="LC2299" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_STREAM_OUTPUT StreamOutput;</td>
      </tr>
      <tr>
        <td id="L2300" class="blob-num js-line-number" data-line-number="2300"></td>
        <td id="LC2300" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_HS HS;</td>
      </tr>
      <tr>
        <td id="L2301" class="blob-num js-line-number" data-line-number="2301"></td>
        <td id="LC2301" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_DS DS;</td>
      </tr>
      <tr>
        <td id="L2302" class="blob-num js-line-number" data-line-number="2302"></td>
        <td id="LC2302" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_PS PS;</td>
      </tr>
      <tr>
        <td id="L2303" class="blob-num js-line-number" data-line-number="2303"></td>
        <td id="LC2303" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_CS CS;</td>
      </tr>
      <tr>
        <td id="L2304" class="blob-num js-line-number" data-line-number="2304"></td>
        <td id="LC2304" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_BLEND_DESC BlendState;</td>
      </tr>
      <tr>
        <td id="L2305" class="blob-num js-line-number" data-line-number="2305"></td>
        <td id="LC2305" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_DEPTH_STENCIL1 DepthStencilState;</td>
      </tr>
      <tr>
        <td id="L2306" class="blob-num js-line-number" data-line-number="2306"></td>
        <td id="LC2306" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_DEPTH_STENCIL_FORMAT DSVFormat;</td>
      </tr>
      <tr>
        <td id="L2307" class="blob-num js-line-number" data-line-number="2307"></td>
        <td id="LC2307" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_RASTERIZER RasterizerState;</td>
      </tr>
      <tr>
        <td id="L2308" class="blob-num js-line-number" data-line-number="2308"></td>
        <td id="LC2308" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_RENDER_TARGET_FORMATS RTVFormats;</td>
      </tr>
      <tr>
        <td id="L2309" class="blob-num js-line-number" data-line-number="2309"></td>
        <td id="LC2309" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_SAMPLE_DESC SampleDesc;</td>
      </tr>
      <tr>
        <td id="L2310" class="blob-num js-line-number" data-line-number="2310"></td>
        <td id="LC2310" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_SAMPLE_MASK SampleMask;</td>
      </tr>
      <tr>
        <td id="L2311" class="blob-num js-line-number" data-line-number="2311"></td>
        <td id="LC2311" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_CACHED_PSO CachedPSO;</td>
      </tr>
      <tr>
        <td id="L2312" class="blob-num js-line-number" data-line-number="2312"></td>
        <td id="LC2312" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_VIEW_INSTANCING ViewInstancingDesc;</td>
      </tr>
      <tr>
        <td id="L2313" class="blob-num js-line-number" data-line-number="2313"></td>
        <td id="LC2313" class="blob-code blob-code-inner js-file-line">    D3D12_GRAPHICS_PIPELINE_STATE_DESC <span class="pl-smi">GraphicsDescV0</span>() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L2314" class="blob-num js-line-number" data-line-number="2314"></td>
        <td id="LC2314" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2315" class="blob-num js-line-number" data-line-number="2315"></td>
        <td id="LC2315" class="blob-code blob-code-inner js-file-line">        D3D12_GRAPHICS_PIPELINE_STATE_DESC D;</td>
      </tr>
      <tr>
        <td id="L2316" class="blob-num js-line-number" data-line-number="2316"></td>
        <td id="LC2316" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">Flags</span>                 = this-&gt;<span class="pl-smi">Flags</span>;</td>
      </tr>
      <tr>
        <td id="L2317" class="blob-num js-line-number" data-line-number="2317"></td>
        <td id="LC2317" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">NodeMask</span>              = this-&gt;<span class="pl-smi">NodeMask</span>;</td>
      </tr>
      <tr>
        <td id="L2318" class="blob-num js-line-number" data-line-number="2318"></td>
        <td id="LC2318" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">pRootSignature</span>        = this-&gt;<span class="pl-smi">pRootSignature</span>;</td>
      </tr>
      <tr>
        <td id="L2319" class="blob-num js-line-number" data-line-number="2319"></td>
        <td id="LC2319" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">InputLayout</span>           = this-&gt;<span class="pl-smi">InputLayout</span>;</td>
      </tr>
      <tr>
        <td id="L2320" class="blob-num js-line-number" data-line-number="2320"></td>
        <td id="LC2320" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">IBStripCutValue</span>       = this-&gt;<span class="pl-smi">IBStripCutValue</span>;</td>
      </tr>
      <tr>
        <td id="L2321" class="blob-num js-line-number" data-line-number="2321"></td>
        <td id="LC2321" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">PrimitiveTopologyType</span> = this-&gt;<span class="pl-smi">PrimitiveTopologyType</span>;</td>
      </tr>
      <tr>
        <td id="L2322" class="blob-num js-line-number" data-line-number="2322"></td>
        <td id="LC2322" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">VS</span>                    = this-&gt;<span class="pl-smi">VS</span>;</td>
      </tr>
      <tr>
        <td id="L2323" class="blob-num js-line-number" data-line-number="2323"></td>
        <td id="LC2323" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">GS</span>                    = this-&gt;<span class="pl-smi">GS</span>;</td>
      </tr>
      <tr>
        <td id="L2324" class="blob-num js-line-number" data-line-number="2324"></td>
        <td id="LC2324" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">StreamOutput</span>          = this-&gt;<span class="pl-smi">StreamOutput</span>;</td>
      </tr>
      <tr>
        <td id="L2325" class="blob-num js-line-number" data-line-number="2325"></td>
        <td id="LC2325" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">HS</span>                    = this-&gt;<span class="pl-smi">HS</span>;</td>
      </tr>
      <tr>
        <td id="L2326" class="blob-num js-line-number" data-line-number="2326"></td>
        <td id="LC2326" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">DS</span>                    = this-&gt;<span class="pl-smi">DS</span>;</td>
      </tr>
      <tr>
        <td id="L2327" class="blob-num js-line-number" data-line-number="2327"></td>
        <td id="LC2327" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">PS</span>                    = this-&gt;<span class="pl-smi">PS</span>;</td>
      </tr>
      <tr>
        <td id="L2328" class="blob-num js-line-number" data-line-number="2328"></td>
        <td id="LC2328" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">BlendState</span>            = this-&gt;<span class="pl-smi">BlendState</span>;</td>
      </tr>
      <tr>
        <td id="L2329" class="blob-num js-line-number" data-line-number="2329"></td>
        <td id="LC2329" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">DepthStencilState</span>     = <span class="pl-c1">CD3DX12_DEPTH_STENCIL_DESC1</span>(<span class="pl-c1">D3D12_DEPTH_STENCIL_DESC1</span>(this-&gt;<span class="pl-smi">DepthStencilState</span>));</td>
      </tr>
      <tr>
        <td id="L2330" class="blob-num js-line-number" data-line-number="2330"></td>
        <td id="LC2330" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">DSVFormat</span>             = this-&gt;<span class="pl-smi">DSVFormat</span>;</td>
      </tr>
      <tr>
        <td id="L2331" class="blob-num js-line-number" data-line-number="2331"></td>
        <td id="LC2331" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">RasterizerState</span>       = this-&gt;<span class="pl-smi">RasterizerState</span>;</td>
      </tr>
      <tr>
        <td id="L2332" class="blob-num js-line-number" data-line-number="2332"></td>
        <td id="LC2332" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">NumRenderTargets</span>      = <span class="pl-c1">D3D12_RT_FORMAT_ARRAY</span>(this-&gt;<span class="pl-smi">RTVFormats</span>).<span class="pl-smi">NumRenderTargets</span>;</td>
      </tr>
      <tr>
        <td id="L2333" class="blob-num js-line-number" data-line-number="2333"></td>
        <td id="LC2333" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">memcpy</span>(D.<span class="pl-smi">RTVFormats</span>, <span class="pl-c1">D3D12_RT_FORMAT_ARRAY</span>(this-&gt;<span class="pl-smi">RTVFormats</span>).<span class="pl-smi">RTFormats</span>, <span class="pl-k">sizeof</span>(D.<span class="pl-smi">RTVFormats</span>));</td>
      </tr>
      <tr>
        <td id="L2334" class="blob-num js-line-number" data-line-number="2334"></td>
        <td id="LC2334" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">SampleDesc</span>            = this-&gt;<span class="pl-smi">SampleDesc</span>;</td>
      </tr>
      <tr>
        <td id="L2335" class="blob-num js-line-number" data-line-number="2335"></td>
        <td id="LC2335" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">SampleMask</span>            = this-&gt;<span class="pl-smi">SampleMask</span>;</td>
      </tr>
      <tr>
        <td id="L2336" class="blob-num js-line-number" data-line-number="2336"></td>
        <td id="LC2336" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">CachedPSO</span>             = this-&gt;<span class="pl-smi">CachedPSO</span>;</td>
      </tr>
      <tr>
        <td id="L2337" class="blob-num js-line-number" data-line-number="2337"></td>
        <td id="LC2337" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> D;</td>
      </tr>
      <tr>
        <td id="L2338" class="blob-num js-line-number" data-line-number="2338"></td>
        <td id="LC2338" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2339" class="blob-num js-line-number" data-line-number="2339"></td>
        <td id="LC2339" class="blob-code blob-code-inner js-file-line">    D3D12_COMPUTE_PIPELINE_STATE_DESC <span class="pl-smi">ComputeDescV0</span>() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L2340" class="blob-num js-line-number" data-line-number="2340"></td>
        <td id="LC2340" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2341" class="blob-num js-line-number" data-line-number="2341"></td>
        <td id="LC2341" class="blob-code blob-code-inner js-file-line">        D3D12_COMPUTE_PIPELINE_STATE_DESC D;</td>
      </tr>
      <tr>
        <td id="L2342" class="blob-num js-line-number" data-line-number="2342"></td>
        <td id="LC2342" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">Flags</span>                 = this-&gt;<span class="pl-smi">Flags</span>;</td>
      </tr>
      <tr>
        <td id="L2343" class="blob-num js-line-number" data-line-number="2343"></td>
        <td id="LC2343" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">NodeMask</span>              = this-&gt;<span class="pl-smi">NodeMask</span>;</td>
      </tr>
      <tr>
        <td id="L2344" class="blob-num js-line-number" data-line-number="2344"></td>
        <td id="LC2344" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">pRootSignature</span>        = this-&gt;<span class="pl-smi">pRootSignature</span>;</td>
      </tr>
      <tr>
        <td id="L2345" class="blob-num js-line-number" data-line-number="2345"></td>
        <td id="LC2345" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">CS</span>                    = this-&gt;<span class="pl-smi">CS</span>;</td>
      </tr>
      <tr>
        <td id="L2346" class="blob-num js-line-number" data-line-number="2346"></td>
        <td id="LC2346" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">CachedPSO</span>             = this-&gt;<span class="pl-smi">CachedPSO</span>;</td>
      </tr>
      <tr>
        <td id="L2347" class="blob-num js-line-number" data-line-number="2347"></td>
        <td id="LC2347" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> D;</td>
      </tr>
      <tr>
        <td id="L2348" class="blob-num js-line-number" data-line-number="2348"></td>
        <td id="LC2348" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2349" class="blob-num js-line-number" data-line-number="2349"></td>
        <td id="LC2349" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2350" class="blob-num js-line-number" data-line-number="2350"></td>
        <td id="LC2350" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2351" class="blob-num js-line-number" data-line-number="2351"></td>
        <td id="LC2351" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> CD3DX12_PIPELINE_STATE_STREAM works on RS2+ but does not support new subobject(s) added in RS3+.</span></td>
      </tr>
      <tr>
        <td id="L2352" class="blob-num js-line-number" data-line-number="2352"></td>
        <td id="LC2352" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> See CD3DX12_PIPELINE_STATE_STREAM1 for instance.</span></td>
      </tr>
      <tr>
        <td id="L2353" class="blob-num js-line-number" data-line-number="2353"></td>
        <td id="LC2353" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_PIPELINE_STATE_STREAM</td>
      </tr>
      <tr>
        <td id="L2354" class="blob-num js-line-number" data-line-number="2354"></td>
        <td id="LC2354" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2355" class="blob-num js-line-number" data-line-number="2355"></td>
        <td id="LC2355" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_PIPELINE_STATE_STREAM</span>() = <span class="pl-k">default</span>;</td>
      </tr>
      <tr>
        <td id="L2356" class="blob-num js-line-number" data-line-number="2356"></td>
        <td id="LC2356" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_PIPELINE_STATE_STREAM</span>(<span class="pl-k">const</span> D3D12_GRAPHICS_PIPELINE_STATE_DESC&amp; Desc)</td>
      </tr>
      <tr>
        <td id="L2357" class="blob-num js-line-number" data-line-number="2357"></td>
        <td id="LC2357" class="blob-code blob-code-inner js-file-line">        : <span class="pl-c1">Flags</span>(Desc.<span class="pl-smi">Flags</span>)</td>
      </tr>
      <tr>
        <td id="L2358" class="blob-num js-line-number" data-line-number="2358"></td>
        <td id="LC2358" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">NodeMask</span>(Desc.<span class="pl-smi">NodeMask</span>)</td>
      </tr>
      <tr>
        <td id="L2359" class="blob-num js-line-number" data-line-number="2359"></td>
        <td id="LC2359" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">pRootSignature</span>(Desc.<span class="pl-smi">pRootSignature</span>)</td>
      </tr>
      <tr>
        <td id="L2360" class="blob-num js-line-number" data-line-number="2360"></td>
        <td id="LC2360" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">InputLayout</span>(Desc.<span class="pl-smi">InputLayout</span>)</td>
      </tr>
      <tr>
        <td id="L2361" class="blob-num js-line-number" data-line-number="2361"></td>
        <td id="LC2361" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">IBStripCutValue</span>(Desc.<span class="pl-smi">IBStripCutValue</span>)</td>
      </tr>
      <tr>
        <td id="L2362" class="blob-num js-line-number" data-line-number="2362"></td>
        <td id="LC2362" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">PrimitiveTopologyType</span>(Desc.<span class="pl-smi">PrimitiveTopologyType</span>)</td>
      </tr>
      <tr>
        <td id="L2363" class="blob-num js-line-number" data-line-number="2363"></td>
        <td id="LC2363" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">VS</span>(Desc.<span class="pl-smi">VS</span>)</td>
      </tr>
      <tr>
        <td id="L2364" class="blob-num js-line-number" data-line-number="2364"></td>
        <td id="LC2364" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">GS</span>(Desc.<span class="pl-smi">GS</span>)</td>
      </tr>
      <tr>
        <td id="L2365" class="blob-num js-line-number" data-line-number="2365"></td>
        <td id="LC2365" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">StreamOutput</span>(Desc.<span class="pl-smi">StreamOutput</span>)</td>
      </tr>
      <tr>
        <td id="L2366" class="blob-num js-line-number" data-line-number="2366"></td>
        <td id="LC2366" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">HS</span>(Desc.<span class="pl-smi">HS</span>)</td>
      </tr>
      <tr>
        <td id="L2367" class="blob-num js-line-number" data-line-number="2367"></td>
        <td id="LC2367" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">DS</span>(Desc.<span class="pl-smi">DS</span>)</td>
      </tr>
      <tr>
        <td id="L2368" class="blob-num js-line-number" data-line-number="2368"></td>
        <td id="LC2368" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">PS</span>(Desc.<span class="pl-smi">PS</span>)</td>
      </tr>
      <tr>
        <td id="L2369" class="blob-num js-line-number" data-line-number="2369"></td>
        <td id="LC2369" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">BlendState</span>(<span class="pl-c1">CD3DX12_BLEND_DESC</span>(Desc.<span class="pl-smi">BlendState</span>))</td>
      </tr>
      <tr>
        <td id="L2370" class="blob-num js-line-number" data-line-number="2370"></td>
        <td id="LC2370" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">DepthStencilState</span>(<span class="pl-c1">CD3DX12_DEPTH_STENCIL_DESC1</span>(Desc.<span class="pl-smi">DepthStencilState</span>))</td>
      </tr>
      <tr>
        <td id="L2371" class="blob-num js-line-number" data-line-number="2371"></td>
        <td id="LC2371" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">DSVFormat</span>(Desc.<span class="pl-smi">DSVFormat</span>)</td>
      </tr>
      <tr>
        <td id="L2372" class="blob-num js-line-number" data-line-number="2372"></td>
        <td id="LC2372" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">RasterizerState</span>(<span class="pl-c1">CD3DX12_RASTERIZER_DESC</span>(Desc.<span class="pl-smi">RasterizerState</span>))</td>
      </tr>
      <tr>
        <td id="L2373" class="blob-num js-line-number" data-line-number="2373"></td>
        <td id="LC2373" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">RTVFormats</span>(<span class="pl-c1">CD3DX12_RT_FORMAT_ARRAY</span>(Desc.<span class="pl-smi">RTVFormats</span>, Desc.<span class="pl-smi">NumRenderTargets</span>))</td>
      </tr>
      <tr>
        <td id="L2374" class="blob-num js-line-number" data-line-number="2374"></td>
        <td id="LC2374" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">SampleDesc</span>(Desc.<span class="pl-smi">SampleDesc</span>)</td>
      </tr>
      <tr>
        <td id="L2375" class="blob-num js-line-number" data-line-number="2375"></td>
        <td id="LC2375" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">SampleMask</span>(Desc.<span class="pl-smi">SampleMask</span>)</td>
      </tr>
      <tr>
        <td id="L2376" class="blob-num js-line-number" data-line-number="2376"></td>
        <td id="LC2376" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">CachedPSO</span>(Desc.<span class="pl-smi">CachedPSO</span>)</td>
      </tr>
      <tr>
        <td id="L2377" class="blob-num js-line-number" data-line-number="2377"></td>
        <td id="LC2377" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L2378" class="blob-num js-line-number" data-line-number="2378"></td>
        <td id="LC2378" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_PIPELINE_STATE_STREAM</span>(<span class="pl-k">const</span> D3D12_COMPUTE_PIPELINE_STATE_DESC&amp; Desc)</td>
      </tr>
      <tr>
        <td id="L2379" class="blob-num js-line-number" data-line-number="2379"></td>
        <td id="LC2379" class="blob-code blob-code-inner js-file-line">        : <span class="pl-c1">Flags</span>(Desc.<span class="pl-smi">Flags</span>)</td>
      </tr>
      <tr>
        <td id="L2380" class="blob-num js-line-number" data-line-number="2380"></td>
        <td id="LC2380" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">NodeMask</span>(Desc.<span class="pl-smi">NodeMask</span>)</td>
      </tr>
      <tr>
        <td id="L2381" class="blob-num js-line-number" data-line-number="2381"></td>
        <td id="LC2381" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">pRootSignature</span>(Desc.<span class="pl-smi">pRootSignature</span>)</td>
      </tr>
      <tr>
        <td id="L2382" class="blob-num js-line-number" data-line-number="2382"></td>
        <td id="LC2382" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">CS</span>(<span class="pl-c1">CD3DX12_SHADER_BYTECODE</span>(Desc.<span class="pl-smi">CS</span>))</td>
      </tr>
      <tr>
        <td id="L2383" class="blob-num js-line-number" data-line-number="2383"></td>
        <td id="LC2383" class="blob-code blob-code-inner js-file-line">        , <span class="pl-c1">CachedPSO</span>(Desc.<span class="pl-smi">CachedPSO</span>)</td>
      </tr>
      <tr>
        <td id="L2384" class="blob-num js-line-number" data-line-number="2384"></td>
        <td id="LC2384" class="blob-code blob-code-inner js-file-line">    {}</td>
      </tr>
      <tr>
        <td id="L2385" class="blob-num js-line-number" data-line-number="2385"></td>
        <td id="LC2385" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_FLAGS Flags;</td>
      </tr>
      <tr>
        <td id="L2386" class="blob-num js-line-number" data-line-number="2386"></td>
        <td id="LC2386" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_NODE_MASK NodeMask;</td>
      </tr>
      <tr>
        <td id="L2387" class="blob-num js-line-number" data-line-number="2387"></td>
        <td id="LC2387" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_ROOT_SIGNATURE pRootSignature;</td>
      </tr>
      <tr>
        <td id="L2388" class="blob-num js-line-number" data-line-number="2388"></td>
        <td id="LC2388" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_INPUT_LAYOUT InputLayout;</td>
      </tr>
      <tr>
        <td id="L2389" class="blob-num js-line-number" data-line-number="2389"></td>
        <td id="LC2389" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_IB_STRIP_CUT_VALUE IBStripCutValue;</td>
      </tr>
      <tr>
        <td id="L2390" class="blob-num js-line-number" data-line-number="2390"></td>
        <td id="LC2390" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_PRIMITIVE_TOPOLOGY PrimitiveTopologyType;</td>
      </tr>
      <tr>
        <td id="L2391" class="blob-num js-line-number" data-line-number="2391"></td>
        <td id="LC2391" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_VS VS;</td>
      </tr>
      <tr>
        <td id="L2392" class="blob-num js-line-number" data-line-number="2392"></td>
        <td id="LC2392" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_GS GS;</td>
      </tr>
      <tr>
        <td id="L2393" class="blob-num js-line-number" data-line-number="2393"></td>
        <td id="LC2393" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_STREAM_OUTPUT StreamOutput;</td>
      </tr>
      <tr>
        <td id="L2394" class="blob-num js-line-number" data-line-number="2394"></td>
        <td id="LC2394" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_HS HS;</td>
      </tr>
      <tr>
        <td id="L2395" class="blob-num js-line-number" data-line-number="2395"></td>
        <td id="LC2395" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_DS DS;</td>
      </tr>
      <tr>
        <td id="L2396" class="blob-num js-line-number" data-line-number="2396"></td>
        <td id="LC2396" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_PS PS;</td>
      </tr>
      <tr>
        <td id="L2397" class="blob-num js-line-number" data-line-number="2397"></td>
        <td id="LC2397" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_CS CS;</td>
      </tr>
      <tr>
        <td id="L2398" class="blob-num js-line-number" data-line-number="2398"></td>
        <td id="LC2398" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_BLEND_DESC BlendState;</td>
      </tr>
      <tr>
        <td id="L2399" class="blob-num js-line-number" data-line-number="2399"></td>
        <td id="LC2399" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_DEPTH_STENCIL1 DepthStencilState;</td>
      </tr>
      <tr>
        <td id="L2400" class="blob-num js-line-number" data-line-number="2400"></td>
        <td id="LC2400" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_DEPTH_STENCIL_FORMAT DSVFormat;</td>
      </tr>
      <tr>
        <td id="L2401" class="blob-num js-line-number" data-line-number="2401"></td>
        <td id="LC2401" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_RASTERIZER RasterizerState;</td>
      </tr>
      <tr>
        <td id="L2402" class="blob-num js-line-number" data-line-number="2402"></td>
        <td id="LC2402" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_RENDER_TARGET_FORMATS RTVFormats;</td>
      </tr>
      <tr>
        <td id="L2403" class="blob-num js-line-number" data-line-number="2403"></td>
        <td id="LC2403" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_SAMPLE_DESC SampleDesc;</td>
      </tr>
      <tr>
        <td id="L2404" class="blob-num js-line-number" data-line-number="2404"></td>
        <td id="LC2404" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_SAMPLE_MASK SampleMask;</td>
      </tr>
      <tr>
        <td id="L2405" class="blob-num js-line-number" data-line-number="2405"></td>
        <td id="LC2405" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM_CACHED_PSO CachedPSO;</td>
      </tr>
      <tr>
        <td id="L2406" class="blob-num js-line-number" data-line-number="2406"></td>
        <td id="LC2406" class="blob-code blob-code-inner js-file-line">    D3D12_GRAPHICS_PIPELINE_STATE_DESC <span class="pl-smi">GraphicsDescV0</span>() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L2407" class="blob-num js-line-number" data-line-number="2407"></td>
        <td id="LC2407" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2408" class="blob-num js-line-number" data-line-number="2408"></td>
        <td id="LC2408" class="blob-code blob-code-inner js-file-line">        D3D12_GRAPHICS_PIPELINE_STATE_DESC D;</td>
      </tr>
      <tr>
        <td id="L2409" class="blob-num js-line-number" data-line-number="2409"></td>
        <td id="LC2409" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">Flags</span>                 = this-&gt;<span class="pl-smi">Flags</span>;</td>
      </tr>
      <tr>
        <td id="L2410" class="blob-num js-line-number" data-line-number="2410"></td>
        <td id="LC2410" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">NodeMask</span>              = this-&gt;<span class="pl-smi">NodeMask</span>;</td>
      </tr>
      <tr>
        <td id="L2411" class="blob-num js-line-number" data-line-number="2411"></td>
        <td id="LC2411" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">pRootSignature</span>        = this-&gt;<span class="pl-smi">pRootSignature</span>;</td>
      </tr>
      <tr>
        <td id="L2412" class="blob-num js-line-number" data-line-number="2412"></td>
        <td id="LC2412" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">InputLayout</span>           = this-&gt;<span class="pl-smi">InputLayout</span>;</td>
      </tr>
      <tr>
        <td id="L2413" class="blob-num js-line-number" data-line-number="2413"></td>
        <td id="LC2413" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">IBStripCutValue</span>       = this-&gt;<span class="pl-smi">IBStripCutValue</span>;</td>
      </tr>
      <tr>
        <td id="L2414" class="blob-num js-line-number" data-line-number="2414"></td>
        <td id="LC2414" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">PrimitiveTopologyType</span> = this-&gt;<span class="pl-smi">PrimitiveTopologyType</span>;</td>
      </tr>
      <tr>
        <td id="L2415" class="blob-num js-line-number" data-line-number="2415"></td>
        <td id="LC2415" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">VS</span>                    = this-&gt;<span class="pl-smi">VS</span>;</td>
      </tr>
      <tr>
        <td id="L2416" class="blob-num js-line-number" data-line-number="2416"></td>
        <td id="LC2416" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">GS</span>                    = this-&gt;<span class="pl-smi">GS</span>;</td>
      </tr>
      <tr>
        <td id="L2417" class="blob-num js-line-number" data-line-number="2417"></td>
        <td id="LC2417" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">StreamOutput</span>          = this-&gt;<span class="pl-smi">StreamOutput</span>;</td>
      </tr>
      <tr>
        <td id="L2418" class="blob-num js-line-number" data-line-number="2418"></td>
        <td id="LC2418" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">HS</span>                    = this-&gt;<span class="pl-smi">HS</span>;</td>
      </tr>
      <tr>
        <td id="L2419" class="blob-num js-line-number" data-line-number="2419"></td>
        <td id="LC2419" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">DS</span>                    = this-&gt;<span class="pl-smi">DS</span>;</td>
      </tr>
      <tr>
        <td id="L2420" class="blob-num js-line-number" data-line-number="2420"></td>
        <td id="LC2420" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">PS</span>                    = this-&gt;<span class="pl-smi">PS</span>;</td>
      </tr>
      <tr>
        <td id="L2421" class="blob-num js-line-number" data-line-number="2421"></td>
        <td id="LC2421" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">BlendState</span>            = this-&gt;<span class="pl-smi">BlendState</span>;</td>
      </tr>
      <tr>
        <td id="L2422" class="blob-num js-line-number" data-line-number="2422"></td>
        <td id="LC2422" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">DepthStencilState</span>     = <span class="pl-c1">CD3DX12_DEPTH_STENCIL_DESC1</span>(<span class="pl-c1">D3D12_DEPTH_STENCIL_DESC1</span>(this-&gt;<span class="pl-smi">DepthStencilState</span>));</td>
      </tr>
      <tr>
        <td id="L2423" class="blob-num js-line-number" data-line-number="2423"></td>
        <td id="LC2423" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">DSVFormat</span>             = this-&gt;<span class="pl-smi">DSVFormat</span>;</td>
      </tr>
      <tr>
        <td id="L2424" class="blob-num js-line-number" data-line-number="2424"></td>
        <td id="LC2424" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">RasterizerState</span>       = this-&gt;<span class="pl-smi">RasterizerState</span>;</td>
      </tr>
      <tr>
        <td id="L2425" class="blob-num js-line-number" data-line-number="2425"></td>
        <td id="LC2425" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">NumRenderTargets</span>      = <span class="pl-c1">D3D12_RT_FORMAT_ARRAY</span>(this-&gt;<span class="pl-smi">RTVFormats</span>).<span class="pl-smi">NumRenderTargets</span>;</td>
      </tr>
      <tr>
        <td id="L2426" class="blob-num js-line-number" data-line-number="2426"></td>
        <td id="LC2426" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">memcpy</span>(D.<span class="pl-smi">RTVFormats</span>, <span class="pl-c1">D3D12_RT_FORMAT_ARRAY</span>(this-&gt;<span class="pl-smi">RTVFormats</span>).<span class="pl-smi">RTFormats</span>, <span class="pl-k">sizeof</span>(D.<span class="pl-smi">RTVFormats</span>));</td>
      </tr>
      <tr>
        <td id="L2427" class="blob-num js-line-number" data-line-number="2427"></td>
        <td id="LC2427" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">SampleDesc</span>            = this-&gt;<span class="pl-smi">SampleDesc</span>;</td>
      </tr>
      <tr>
        <td id="L2428" class="blob-num js-line-number" data-line-number="2428"></td>
        <td id="LC2428" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">SampleMask</span>            = this-&gt;<span class="pl-smi">SampleMask</span>;</td>
      </tr>
      <tr>
        <td id="L2429" class="blob-num js-line-number" data-line-number="2429"></td>
        <td id="LC2429" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">CachedPSO</span>             = this-&gt;<span class="pl-smi">CachedPSO</span>;</td>
      </tr>
      <tr>
        <td id="L2430" class="blob-num js-line-number" data-line-number="2430"></td>
        <td id="LC2430" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> D;</td>
      </tr>
      <tr>
        <td id="L2431" class="blob-num js-line-number" data-line-number="2431"></td>
        <td id="LC2431" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2432" class="blob-num js-line-number" data-line-number="2432"></td>
        <td id="LC2432" class="blob-code blob-code-inner js-file-line">    D3D12_COMPUTE_PIPELINE_STATE_DESC <span class="pl-smi">ComputeDescV0</span>() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L2433" class="blob-num js-line-number" data-line-number="2433"></td>
        <td id="LC2433" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2434" class="blob-num js-line-number" data-line-number="2434"></td>
        <td id="LC2434" class="blob-code blob-code-inner js-file-line">        D3D12_COMPUTE_PIPELINE_STATE_DESC D;</td>
      </tr>
      <tr>
        <td id="L2435" class="blob-num js-line-number" data-line-number="2435"></td>
        <td id="LC2435" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">Flags</span>                 = this-&gt;<span class="pl-smi">Flags</span>;</td>
      </tr>
      <tr>
        <td id="L2436" class="blob-num js-line-number" data-line-number="2436"></td>
        <td id="LC2436" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">NodeMask</span>              = this-&gt;<span class="pl-smi">NodeMask</span>;</td>
      </tr>
      <tr>
        <td id="L2437" class="blob-num js-line-number" data-line-number="2437"></td>
        <td id="LC2437" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">pRootSignature</span>        = this-&gt;<span class="pl-smi">pRootSignature</span>;</td>
      </tr>
      <tr>
        <td id="L2438" class="blob-num js-line-number" data-line-number="2438"></td>
        <td id="LC2438" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">CS</span>                    = this-&gt;<span class="pl-smi">CS</span>;</td>
      </tr>
      <tr>
        <td id="L2439" class="blob-num js-line-number" data-line-number="2439"></td>
        <td id="LC2439" class="blob-code blob-code-inner js-file-line">        D.<span class="pl-smi">CachedPSO</span>             = this-&gt;<span class="pl-smi">CachedPSO</span>;</td>
      </tr>
      <tr>
        <td id="L2440" class="blob-num js-line-number" data-line-number="2440"></td>
        <td id="LC2440" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> D;</td>
      </tr>
      <tr>
        <td id="L2441" class="blob-num js-line-number" data-line-number="2441"></td>
        <td id="LC2441" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2442" class="blob-num js-line-number" data-line-number="2442"></td>
        <td id="LC2442" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2443" class="blob-num js-line-number" data-line-number="2443"></td>
        <td id="LC2443" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2444" class="blob-num js-line-number" data-line-number="2444"></td>
        <td id="LC2444" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> CD3DX12_PIPELINE_STATE_STREAM_PARSE_HELPER : public ID3DX12PipelineParserCallbacks</td>
      </tr>
      <tr>
        <td id="L2445" class="blob-num js-line-number" data-line-number="2445"></td>
        <td id="LC2445" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2446" class="blob-num js-line-number" data-line-number="2446"></td>
        <td id="LC2446" class="blob-code blob-code-inner js-file-line">    CD3DX12_PIPELINE_STATE_STREAM1 PipelineStream;</td>
      </tr>
      <tr>
        <td id="L2447" class="blob-num js-line-number" data-line-number="2447"></td>
        <td id="LC2447" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_PIPELINE_STATE_STREAM_PARSE_HELPER</span>() noexcept</td>
      </tr>
      <tr>
        <td id="L2448" class="blob-num js-line-number" data-line-number="2448"></td>
        <td id="LC2448" class="blob-code blob-code-inner js-file-line">        : <span class="pl-c1">SeenDSS</span>(<span class="pl-c1">false</span>)</td>
      </tr>
      <tr>
        <td id="L2449" class="blob-num js-line-number" data-line-number="2449"></td>
        <td id="LC2449" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2450" class="blob-num js-line-number" data-line-number="2450"></td>
        <td id="LC2450" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span> Adjust defaults to account for absent members.</span></td>
      </tr>
      <tr>
        <td id="L2451" class="blob-num js-line-number" data-line-number="2451"></td>
        <td id="LC2451" class="blob-code blob-code-inner js-file-line">        PipelineStream.<span class="pl-smi">PrimitiveTopologyType</span> = D3D12_PRIMITIVE_TOPOLOGY_TYPE_TRIANGLE;</td>
      </tr>
      <tr>
        <td id="L2452" class="blob-num js-line-number" data-line-number="2452"></td>
        <td id="LC2452" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2453" class="blob-num js-line-number" data-line-number="2453"></td>
        <td id="LC2453" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span> Depth disabled if no DSV format specified.</span></td>
      </tr>
      <tr>
        <td id="L2454" class="blob-num js-line-number" data-line-number="2454"></td>
        <td id="LC2454" class="blob-code blob-code-inner js-file-line">        static_cast&lt;D3D12_DEPTH_STENCIL_DESC1&amp;&gt;(PipelineStream.<span class="pl-smi">DepthStencilState</span>).<span class="pl-smi">DepthEnable</span> = <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2455" class="blob-num js-line-number" data-line-number="2455"></td>
        <td id="LC2455" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2456" class="blob-num js-line-number" data-line-number="2456"></td>
        <td id="LC2456" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2457" class="blob-num js-line-number" data-line-number="2457"></td>
        <td id="LC2457" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> ID3DX12PipelineParserCallbacks</span></td>
      </tr>
      <tr>
        <td id="L2458" class="blob-num js-line-number" data-line-number="2458"></td>
        <td id="LC2458" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">FlagsCb</span>(D3D12_PIPELINE_STATE_FLAGS Flags) override {PipelineStream.<span class="pl-smi">Flags</span> = Flags;}</td>
      </tr>
      <tr>
        <td id="L2459" class="blob-num js-line-number" data-line-number="2459"></td>
        <td id="LC2459" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">NodeMaskCb</span>(UINT NodeMask) override {PipelineStream.<span class="pl-smi">NodeMask</span> = NodeMask;}</td>
      </tr>
      <tr>
        <td id="L2460" class="blob-num js-line-number" data-line-number="2460"></td>
        <td id="LC2460" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">RootSignatureCb</span>(ID3D12RootSignature* pRootSignature) override {PipelineStream.<span class="pl-smi">pRootSignature</span> = pRootSignature;}</td>
      </tr>
      <tr>
        <td id="L2461" class="blob-num js-line-number" data-line-number="2461"></td>
        <td id="LC2461" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">InputLayoutCb</span>(<span class="pl-k">const</span> D3D12_INPUT_LAYOUT_DESC&amp; InputLayout) override {PipelineStream.<span class="pl-smi">InputLayout</span> = InputLayout;}</td>
      </tr>
      <tr>
        <td id="L2462" class="blob-num js-line-number" data-line-number="2462"></td>
        <td id="LC2462" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">IBStripCutValueCb</span>(D3D12_INDEX_BUFFER_STRIP_CUT_VALUE IBStripCutValue) override {PipelineStream.<span class="pl-smi">IBStripCutValue</span> = IBStripCutValue;}</td>
      </tr>
      <tr>
        <td id="L2463" class="blob-num js-line-number" data-line-number="2463"></td>
        <td id="LC2463" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">PrimitiveTopologyTypeCb</span>(D3D12_PRIMITIVE_TOPOLOGY_TYPE PrimitiveTopologyType) override {PipelineStream.<span class="pl-smi">PrimitiveTopologyType</span> = PrimitiveTopologyType;}</td>
      </tr>
      <tr>
        <td id="L2464" class="blob-num js-line-number" data-line-number="2464"></td>
        <td id="LC2464" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">VSCb</span>(<span class="pl-k">const</span> D3D12_SHADER_BYTECODE&amp; VS) override {PipelineStream.<span class="pl-smi">VS</span> = VS;}</td>
      </tr>
      <tr>
        <td id="L2465" class="blob-num js-line-number" data-line-number="2465"></td>
        <td id="LC2465" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">GSCb</span>(<span class="pl-k">const</span> D3D12_SHADER_BYTECODE&amp; GS) override {PipelineStream.<span class="pl-smi">GS</span> = GS;}</td>
      </tr>
      <tr>
        <td id="L2466" class="blob-num js-line-number" data-line-number="2466"></td>
        <td id="LC2466" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">StreamOutputCb</span>(<span class="pl-k">const</span> D3D12_STREAM_OUTPUT_DESC&amp; StreamOutput) override {PipelineStream.<span class="pl-smi">StreamOutput</span> = StreamOutput;}</td>
      </tr>
      <tr>
        <td id="L2467" class="blob-num js-line-number" data-line-number="2467"></td>
        <td id="LC2467" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">HSCb</span>(<span class="pl-k">const</span> D3D12_SHADER_BYTECODE&amp; HS) override {PipelineStream.<span class="pl-smi">HS</span> = HS;}</td>
      </tr>
      <tr>
        <td id="L2468" class="blob-num js-line-number" data-line-number="2468"></td>
        <td id="LC2468" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">DSCb</span>(<span class="pl-k">const</span> D3D12_SHADER_BYTECODE&amp; DS) override {PipelineStream.<span class="pl-smi">DS</span> = DS;}</td>
      </tr>
      <tr>
        <td id="L2469" class="blob-num js-line-number" data-line-number="2469"></td>
        <td id="LC2469" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">PSCb</span>(<span class="pl-k">const</span> D3D12_SHADER_BYTECODE&amp; PS) override {PipelineStream.<span class="pl-smi">PS</span> = PS;}</td>
      </tr>
      <tr>
        <td id="L2470" class="blob-num js-line-number" data-line-number="2470"></td>
        <td id="LC2470" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">CSCb</span>(<span class="pl-k">const</span> D3D12_SHADER_BYTECODE&amp; CS) override {PipelineStream.<span class="pl-smi">CS</span> = CS;}</td>
      </tr>
      <tr>
        <td id="L2471" class="blob-num js-line-number" data-line-number="2471"></td>
        <td id="LC2471" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">BlendStateCb</span>(<span class="pl-k">const</span> D3D12_BLEND_DESC&amp; BlendState) override {PipelineStream.<span class="pl-smi">BlendState</span> = <span class="pl-c1">CD3DX12_BLEND_DESC</span>(BlendState);}</td>
      </tr>
      <tr>
        <td id="L2472" class="blob-num js-line-number" data-line-number="2472"></td>
        <td id="LC2472" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">DepthStencilStateCb</span>(<span class="pl-k">const</span> D3D12_DEPTH_STENCIL_DESC&amp; DepthStencilState) override</td>
      </tr>
      <tr>
        <td id="L2473" class="blob-num js-line-number" data-line-number="2473"></td>
        <td id="LC2473" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2474" class="blob-num js-line-number" data-line-number="2474"></td>
        <td id="LC2474" class="blob-code blob-code-inner js-file-line">        PipelineStream.<span class="pl-smi">DepthStencilState</span> = <span class="pl-c1">CD3DX12_DEPTH_STENCIL_DESC1</span>(DepthStencilState);</td>
      </tr>
      <tr>
        <td id="L2475" class="blob-num js-line-number" data-line-number="2475"></td>
        <td id="LC2475" class="blob-code blob-code-inner js-file-line">        SeenDSS = <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L2476" class="blob-num js-line-number" data-line-number="2476"></td>
        <td id="LC2476" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2477" class="blob-num js-line-number" data-line-number="2477"></td>
        <td id="LC2477" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">DepthStencilState1Cb</span>(<span class="pl-k">const</span> D3D12_DEPTH_STENCIL_DESC1&amp; DepthStencilState) override</td>
      </tr>
      <tr>
        <td id="L2478" class="blob-num js-line-number" data-line-number="2478"></td>
        <td id="LC2478" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2479" class="blob-num js-line-number" data-line-number="2479"></td>
        <td id="LC2479" class="blob-code blob-code-inner js-file-line">        PipelineStream.<span class="pl-smi">DepthStencilState</span> = <span class="pl-c1">CD3DX12_DEPTH_STENCIL_DESC1</span>(DepthStencilState);</td>
      </tr>
      <tr>
        <td id="L2480" class="blob-num js-line-number" data-line-number="2480"></td>
        <td id="LC2480" class="blob-code blob-code-inner js-file-line">        SeenDSS = <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L2481" class="blob-num js-line-number" data-line-number="2481"></td>
        <td id="LC2481" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2482" class="blob-num js-line-number" data-line-number="2482"></td>
        <td id="LC2482" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">DSVFormatCb</span>(DXGI_FORMAT DSVFormat) override</td>
      </tr>
      <tr>
        <td id="L2483" class="blob-num js-line-number" data-line-number="2483"></td>
        <td id="LC2483" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2484" class="blob-num js-line-number" data-line-number="2484"></td>
        <td id="LC2484" class="blob-code blob-code-inner js-file-line">        PipelineStream.<span class="pl-smi">DSVFormat</span> = DSVFormat;</td>
      </tr>
      <tr>
        <td id="L2485" class="blob-num js-line-number" data-line-number="2485"></td>
        <td id="LC2485" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (!SeenDSS &amp;&amp; DSVFormat != DXGI_FORMAT_UNKNOWN)</td>
      </tr>
      <tr>
        <td id="L2486" class="blob-num js-line-number" data-line-number="2486"></td>
        <td id="LC2486" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L2487" class="blob-num js-line-number" data-line-number="2487"></td>
        <td id="LC2487" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">//</span> Re-enable depth for the default state.</span></td>
      </tr>
      <tr>
        <td id="L2488" class="blob-num js-line-number" data-line-number="2488"></td>
        <td id="LC2488" class="blob-code blob-code-inner js-file-line">            static_cast&lt;D3D12_DEPTH_STENCIL_DESC1&amp;&gt;(PipelineStream.<span class="pl-smi">DepthStencilState</span>).<span class="pl-smi">DepthEnable</span> = <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L2489" class="blob-num js-line-number" data-line-number="2489"></td>
        <td id="LC2489" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2490" class="blob-num js-line-number" data-line-number="2490"></td>
        <td id="LC2490" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2491" class="blob-num js-line-number" data-line-number="2491"></td>
        <td id="LC2491" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">RasterizerStateCb</span>(<span class="pl-k">const</span> D3D12_RASTERIZER_DESC&amp; RasterizerState) override {PipelineStream.<span class="pl-smi">RasterizerState</span> = <span class="pl-c1">CD3DX12_RASTERIZER_DESC</span>(RasterizerState);}</td>
      </tr>
      <tr>
        <td id="L2492" class="blob-num js-line-number" data-line-number="2492"></td>
        <td id="LC2492" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">RTVFormatsCb</span>(<span class="pl-k">const</span> D3D12_RT_FORMAT_ARRAY&amp; RTVFormats) override {PipelineStream.<span class="pl-smi">RTVFormats</span> = RTVFormats;}</td>
      </tr>
      <tr>
        <td id="L2493" class="blob-num js-line-number" data-line-number="2493"></td>
        <td id="LC2493" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">SampleDescCb</span>(<span class="pl-k">const</span> DXGI_SAMPLE_DESC&amp; SampleDesc) override {PipelineStream.<span class="pl-smi">SampleDesc</span> = SampleDesc;}</td>
      </tr>
      <tr>
        <td id="L2494" class="blob-num js-line-number" data-line-number="2494"></td>
        <td id="LC2494" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">SampleMaskCb</span>(UINT SampleMask) override {PipelineStream.<span class="pl-smi">SampleMask</span> = SampleMask;}</td>
      </tr>
      <tr>
        <td id="L2495" class="blob-num js-line-number" data-line-number="2495"></td>
        <td id="LC2495" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">ViewInstancingCb</span>(<span class="pl-k">const</span> D3D12_VIEW_INSTANCING_DESC&amp; ViewInstancingDesc) override {PipelineStream.<span class="pl-smi">ViewInstancingDesc</span> = <span class="pl-c1">CD3DX12_VIEW_INSTANCING_DESC</span>(ViewInstancingDesc);}</td>
      </tr>
      <tr>
        <td id="L2496" class="blob-num js-line-number" data-line-number="2496"></td>
        <td id="LC2496" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">CachedPSOCb</span>(<span class="pl-k">const</span> D3D12_CACHED_PIPELINE_STATE&amp; CachedPSO) override {PipelineStream.<span class="pl-smi">CachedPSO</span> = CachedPSO;}</td>
      </tr>
      <tr>
        <td id="L2497" class="blob-num js-line-number" data-line-number="2497"></td>
        <td id="LC2497" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2498" class="blob-num js-line-number" data-line-number="2498"></td>
        <td id="LC2498" class="blob-code blob-code-inner js-file-line">private:</td>
      </tr>
      <tr>
        <td id="L2499" class="blob-num js-line-number" data-line-number="2499"></td>
        <td id="LC2499" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span> SeenDSS;</td>
      </tr>
      <tr>
        <td id="L2500" class="blob-num js-line-number" data-line-number="2500"></td>
        <td id="LC2500" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2501" class="blob-num js-line-number" data-line-number="2501"></td>
        <td id="LC2501" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2502" class="blob-num js-line-number" data-line-number="2502"></td>
        <td id="LC2502" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE <span class="pl-en">D3DX12GetBaseSubobjectType</span>(D3D12_PIPELINE_STATE_SUBOBJECT_TYPE SubobjectType)</td>
      </tr>
      <tr>
        <td id="L2503" class="blob-num js-line-number" data-line-number="2503"></td>
        <td id="LC2503" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2504" class="blob-num js-line-number" data-line-number="2504"></td>
        <td id="LC2504" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">switch</span> (SubobjectType)</td>
      </tr>
      <tr>
        <td id="L2505" class="blob-num js-line-number" data-line-number="2505"></td>
        <td id="LC2505" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2506" class="blob-num js-line-number" data-line-number="2506"></td>
        <td id="LC2506" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DEPTH_STENCIL1: </td>
      </tr>
      <tr>
        <td id="L2507" class="blob-num js-line-number" data-line-number="2507"></td>
        <td id="LC2507" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DEPTH_STENCIL;</td>
      </tr>
      <tr>
        <td id="L2508" class="blob-num js-line-number" data-line-number="2508"></td>
        <td id="LC2508" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">default</span>:</td>
      </tr>
      <tr>
        <td id="L2509" class="blob-num js-line-number" data-line-number="2509"></td>
        <td id="LC2509" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> SubobjectType;</td>
      </tr>
      <tr>
        <td id="L2510" class="blob-num js-line-number" data-line-number="2510"></td>
        <td id="LC2510" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2511" class="blob-num js-line-number" data-line-number="2511"></td>
        <td id="LC2511" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2512" class="blob-num js-line-number" data-line-number="2512"></td>
        <td id="LC2512" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2513" class="blob-num js-line-number" data-line-number="2513"></td>
        <td id="LC2513" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> HRESULT <span class="pl-en">D3DX12ParsePipelineStream</span>(<span class="pl-k">const</span> D3D12_PIPELINE_STATE_STREAM_DESC&amp; Desc, ID3DX12PipelineParserCallbacks* pCallbacks)</td>
      </tr>
      <tr>
        <td id="L2514" class="blob-num js-line-number" data-line-number="2514"></td>
        <td id="LC2514" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2515" class="blob-num js-line-number" data-line-number="2515"></td>
        <td id="LC2515" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (pCallbacks == nullptr)</td>
      </tr>
      <tr>
        <td id="L2516" class="blob-num js-line-number" data-line-number="2516"></td>
        <td id="LC2516" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2517" class="blob-num js-line-number" data-line-number="2517"></td>
        <td id="LC2517" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> E_INVALIDARG;</td>
      </tr>
      <tr>
        <td id="L2518" class="blob-num js-line-number" data-line-number="2518"></td>
        <td id="LC2518" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2519" class="blob-num js-line-number" data-line-number="2519"></td>
        <td id="LC2519" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2520" class="blob-num js-line-number" data-line-number="2520"></td>
        <td id="LC2520" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (Desc.<span class="pl-smi">SizeInBytes</span> == <span class="pl-c1">0</span> || Desc.<span class="pl-smi">pPipelineStateSubobjectStream</span> == nullptr)</td>
      </tr>
      <tr>
        <td id="L2521" class="blob-num js-line-number" data-line-number="2521"></td>
        <td id="LC2521" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2522" class="blob-num js-line-number" data-line-number="2522"></td>
        <td id="LC2522" class="blob-code blob-code-inner js-file-line">        pCallbacks-&gt;<span class="pl-c1">ErrorBadInputParameter</span>(<span class="pl-c1">1</span>); <span class="pl-c"><span class="pl-c">//</span> first parameter issue</span></td>
      </tr>
      <tr>
        <td id="L2523" class="blob-num js-line-number" data-line-number="2523"></td>
        <td id="LC2523" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> E_INVALIDARG;</td>
      </tr>
      <tr>
        <td id="L2524" class="blob-num js-line-number" data-line-number="2524"></td>
        <td id="LC2524" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2525" class="blob-num js-line-number" data-line-number="2525"></td>
        <td id="LC2525" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2526" class="blob-num js-line-number" data-line-number="2526"></td>
        <td id="LC2526" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span> SubobjectSeen[D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_MAX_VALID] = {};</td>
      </tr>
      <tr>
        <td id="L2527" class="blob-num js-line-number" data-line-number="2527"></td>
        <td id="LC2527" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (SIZE_T CurOffset = <span class="pl-c1">0</span>, SizeOfSubobject = <span class="pl-c1">0</span>; CurOffset &lt; Desc.<span class="pl-smi">SizeInBytes</span>; CurOffset += SizeOfSubobject)</td>
      </tr>
      <tr>
        <td id="L2528" class="blob-num js-line-number" data-line-number="2528"></td>
        <td id="LC2528" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2529" class="blob-num js-line-number" data-line-number="2529"></td>
        <td id="LC2529" class="blob-code blob-code-inner js-file-line">        BYTE* pStream = static_cast&lt;BYTE*&gt;(Desc.<span class="pl-smi">pPipelineStateSubobjectStream</span>)+CurOffset;</td>
      </tr>
      <tr>
        <td id="L2530" class="blob-num js-line-number" data-line-number="2530"></td>
        <td id="LC2530" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">auto</span> SubobjectType = *reinterpret_cast&lt;D3D12_PIPELINE_STATE_SUBOBJECT_TYPE*&gt;(pStream);</td>
      </tr>
      <tr>
        <td id="L2531" class="blob-num js-line-number" data-line-number="2531"></td>
        <td id="LC2531" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (SubobjectType &lt; <span class="pl-c1">0</span> || SubobjectType &gt;= D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_MAX_VALID)</td>
      </tr>
      <tr>
        <td id="L2532" class="blob-num js-line-number" data-line-number="2532"></td>
        <td id="LC2532" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L2533" class="blob-num js-line-number" data-line-number="2533"></td>
        <td id="LC2533" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">ErrorUnknownSubobject</span>(SubobjectType);</td>
      </tr>
      <tr>
        <td id="L2534" class="blob-num js-line-number" data-line-number="2534"></td>
        <td id="LC2534" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">return</span> E_INVALIDARG;</td>
      </tr>
      <tr>
        <td id="L2535" class="blob-num js-line-number" data-line-number="2535"></td>
        <td id="LC2535" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2536" class="blob-num js-line-number" data-line-number="2536"></td>
        <td id="LC2536" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (SubobjectSeen[<span class="pl-c1">D3DX12GetBaseSubobjectType</span>(SubobjectType)])</td>
      </tr>
      <tr>
        <td id="L2537" class="blob-num js-line-number" data-line-number="2537"></td>
        <td id="LC2537" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L2538" class="blob-num js-line-number" data-line-number="2538"></td>
        <td id="LC2538" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">ErrorDuplicateSubobject</span>(SubobjectType);</td>
      </tr>
      <tr>
        <td id="L2539" class="blob-num js-line-number" data-line-number="2539"></td>
        <td id="LC2539" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">return</span> E_INVALIDARG; <span class="pl-c"><span class="pl-c">//</span> disallow subobject duplicates in a stream</span></td>
      </tr>
      <tr>
        <td id="L2540" class="blob-num js-line-number" data-line-number="2540"></td>
        <td id="LC2540" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2541" class="blob-num js-line-number" data-line-number="2541"></td>
        <td id="LC2541" class="blob-code blob-code-inner js-file-line">        SubobjectSeen[SubobjectType] = <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L2542" class="blob-num js-line-number" data-line-number="2542"></td>
        <td id="LC2542" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">switch</span> (SubobjectType)</td>
      </tr>
      <tr>
        <td id="L2543" class="blob-num js-line-number" data-line-number="2543"></td>
        <td id="LC2543" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L2544" class="blob-num js-line-number" data-line-number="2544"></td>
        <td id="LC2544" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_ROOT_SIGNATURE: </td>
      </tr>
      <tr>
        <td id="L2545" class="blob-num js-line-number" data-line-number="2545"></td>
        <td id="LC2545" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">RootSignatureCb</span>(*reinterpret_cast&lt;<span class="pl-c1">decltype</span>(CD3DX12_PIPELINE_STATE_STREAM::pRootSignature)*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2546" class="blob-num js-line-number" data-line-number="2546"></td>
        <td id="LC2546" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM::pRootSignature);</td>
      </tr>
      <tr>
        <td id="L2547" class="blob-num js-line-number" data-line-number="2547"></td>
        <td id="LC2547" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2548" class="blob-num js-line-number" data-line-number="2548"></td>
        <td id="LC2548" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_VS:</td>
      </tr>
      <tr>
        <td id="L2549" class="blob-num js-line-number" data-line-number="2549"></td>
        <td id="LC2549" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">VSCb</span>(*reinterpret_cast&lt;<span class="pl-c1">decltype</span>(CD3DX12_PIPELINE_STATE_STREAM::VS)*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2550" class="blob-num js-line-number" data-line-number="2550"></td>
        <td id="LC2550" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM::VS);</td>
      </tr>
      <tr>
        <td id="L2551" class="blob-num js-line-number" data-line-number="2551"></td>
        <td id="LC2551" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2552" class="blob-num js-line-number" data-line-number="2552"></td>
        <td id="LC2552" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_PS: </td>
      </tr>
      <tr>
        <td id="L2553" class="blob-num js-line-number" data-line-number="2553"></td>
        <td id="LC2553" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">PSCb</span>(*reinterpret_cast&lt;<span class="pl-c1">decltype</span>(CD3DX12_PIPELINE_STATE_STREAM::PS)*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2554" class="blob-num js-line-number" data-line-number="2554"></td>
        <td id="LC2554" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM::PS);</td>
      </tr>
      <tr>
        <td id="L2555" class="blob-num js-line-number" data-line-number="2555"></td>
        <td id="LC2555" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2556" class="blob-num js-line-number" data-line-number="2556"></td>
        <td id="LC2556" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DS: </td>
      </tr>
      <tr>
        <td id="L2557" class="blob-num js-line-number" data-line-number="2557"></td>
        <td id="LC2557" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">DSCb</span>(*reinterpret_cast&lt;<span class="pl-c1">decltype</span>(CD3DX12_PIPELINE_STATE_STREAM::DS)*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2558" class="blob-num js-line-number" data-line-number="2558"></td>
        <td id="LC2558" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM::DS);</td>
      </tr>
      <tr>
        <td id="L2559" class="blob-num js-line-number" data-line-number="2559"></td>
        <td id="LC2559" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2560" class="blob-num js-line-number" data-line-number="2560"></td>
        <td id="LC2560" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_HS: </td>
      </tr>
      <tr>
        <td id="L2561" class="blob-num js-line-number" data-line-number="2561"></td>
        <td id="LC2561" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">HSCb</span>(*reinterpret_cast&lt;<span class="pl-c1">decltype</span>(CD3DX12_PIPELINE_STATE_STREAM::HS)*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2562" class="blob-num js-line-number" data-line-number="2562"></td>
        <td id="LC2562" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM::HS);</td>
      </tr>
      <tr>
        <td id="L2563" class="blob-num js-line-number" data-line-number="2563"></td>
        <td id="LC2563" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2564" class="blob-num js-line-number" data-line-number="2564"></td>
        <td id="LC2564" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_GS: </td>
      </tr>
      <tr>
        <td id="L2565" class="blob-num js-line-number" data-line-number="2565"></td>
        <td id="LC2565" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">GSCb</span>(*reinterpret_cast&lt;<span class="pl-c1">decltype</span>(CD3DX12_PIPELINE_STATE_STREAM::GS)*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2566" class="blob-num js-line-number" data-line-number="2566"></td>
        <td id="LC2566" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM::GS);</td>
      </tr>
      <tr>
        <td id="L2567" class="blob-num js-line-number" data-line-number="2567"></td>
        <td id="LC2567" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2568" class="blob-num js-line-number" data-line-number="2568"></td>
        <td id="LC2568" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_CS:</td>
      </tr>
      <tr>
        <td id="L2569" class="blob-num js-line-number" data-line-number="2569"></td>
        <td id="LC2569" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">CSCb</span>(*reinterpret_cast&lt;<span class="pl-c1">decltype</span>(CD3DX12_PIPELINE_STATE_STREAM::CS)*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2570" class="blob-num js-line-number" data-line-number="2570"></td>
        <td id="LC2570" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM::CS);</td>
      </tr>
      <tr>
        <td id="L2571" class="blob-num js-line-number" data-line-number="2571"></td>
        <td id="LC2571" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2572" class="blob-num js-line-number" data-line-number="2572"></td>
        <td id="LC2572" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_STREAM_OUTPUT: </td>
      </tr>
      <tr>
        <td id="L2573" class="blob-num js-line-number" data-line-number="2573"></td>
        <td id="LC2573" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">StreamOutputCb</span>(*reinterpret_cast&lt;<span class="pl-c1">decltype</span>(CD3DX12_PIPELINE_STATE_STREAM::StreamOutput)*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2574" class="blob-num js-line-number" data-line-number="2574"></td>
        <td id="LC2574" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM::StreamOutput);</td>
      </tr>
      <tr>
        <td id="L2575" class="blob-num js-line-number" data-line-number="2575"></td>
        <td id="LC2575" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2576" class="blob-num js-line-number" data-line-number="2576"></td>
        <td id="LC2576" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_BLEND: </td>
      </tr>
      <tr>
        <td id="L2577" class="blob-num js-line-number" data-line-number="2577"></td>
        <td id="LC2577" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">BlendStateCb</span>(*reinterpret_cast&lt;<span class="pl-c1">decltype</span>(CD3DX12_PIPELINE_STATE_STREAM::BlendState)*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2578" class="blob-num js-line-number" data-line-number="2578"></td>
        <td id="LC2578" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM::BlendState);</td>
      </tr>
      <tr>
        <td id="L2579" class="blob-num js-line-number" data-line-number="2579"></td>
        <td id="LC2579" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2580" class="blob-num js-line-number" data-line-number="2580"></td>
        <td id="LC2580" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_SAMPLE_MASK: </td>
      </tr>
      <tr>
        <td id="L2581" class="blob-num js-line-number" data-line-number="2581"></td>
        <td id="LC2581" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">SampleMaskCb</span>(*reinterpret_cast&lt;<span class="pl-c1">decltype</span>(CD3DX12_PIPELINE_STATE_STREAM::SampleMask)*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2582" class="blob-num js-line-number" data-line-number="2582"></td>
        <td id="LC2582" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM::SampleMask);</td>
      </tr>
      <tr>
        <td id="L2583" class="blob-num js-line-number" data-line-number="2583"></td>
        <td id="LC2583" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2584" class="blob-num js-line-number" data-line-number="2584"></td>
        <td id="LC2584" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_RASTERIZER: </td>
      </tr>
      <tr>
        <td id="L2585" class="blob-num js-line-number" data-line-number="2585"></td>
        <td id="LC2585" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">RasterizerStateCb</span>(*reinterpret_cast&lt;<span class="pl-c1">decltype</span>(CD3DX12_PIPELINE_STATE_STREAM::RasterizerState)*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2586" class="blob-num js-line-number" data-line-number="2586"></td>
        <td id="LC2586" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM::RasterizerState);</td>
      </tr>
      <tr>
        <td id="L2587" class="blob-num js-line-number" data-line-number="2587"></td>
        <td id="LC2587" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2588" class="blob-num js-line-number" data-line-number="2588"></td>
        <td id="LC2588" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DEPTH_STENCIL: </td>
      </tr>
      <tr>
        <td id="L2589" class="blob-num js-line-number" data-line-number="2589"></td>
        <td id="LC2589" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">DepthStencilStateCb</span>(*reinterpret_cast&lt;CD3DX12_PIPELINE_STATE_STREAM_DEPTH_STENCIL*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2590" class="blob-num js-line-number" data-line-number="2590"></td>
        <td id="LC2590" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM_DEPTH_STENCIL);</td>
      </tr>
      <tr>
        <td id="L2591" class="blob-num js-line-number" data-line-number="2591"></td>
        <td id="LC2591" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2592" class="blob-num js-line-number" data-line-number="2592"></td>
        <td id="LC2592" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DEPTH_STENCIL1: </td>
      </tr>
      <tr>
        <td id="L2593" class="blob-num js-line-number" data-line-number="2593"></td>
        <td id="LC2593" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">DepthStencilState1Cb</span>(*reinterpret_cast&lt;<span class="pl-c1">decltype</span>(CD3DX12_PIPELINE_STATE_STREAM::DepthStencilState)*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2594" class="blob-num js-line-number" data-line-number="2594"></td>
        <td id="LC2594" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM::DepthStencilState);</td>
      </tr>
      <tr>
        <td id="L2595" class="blob-num js-line-number" data-line-number="2595"></td>
        <td id="LC2595" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2596" class="blob-num js-line-number" data-line-number="2596"></td>
        <td id="LC2596" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_INPUT_LAYOUT: </td>
      </tr>
      <tr>
        <td id="L2597" class="blob-num js-line-number" data-line-number="2597"></td>
        <td id="LC2597" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">InputLayoutCb</span>(*reinterpret_cast&lt;<span class="pl-c1">decltype</span>(CD3DX12_PIPELINE_STATE_STREAM::InputLayout)*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2598" class="blob-num js-line-number" data-line-number="2598"></td>
        <td id="LC2598" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM::InputLayout);</td>
      </tr>
      <tr>
        <td id="L2599" class="blob-num js-line-number" data-line-number="2599"></td>
        <td id="LC2599" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2600" class="blob-num js-line-number" data-line-number="2600"></td>
        <td id="LC2600" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_IB_STRIP_CUT_VALUE: </td>
      </tr>
      <tr>
        <td id="L2601" class="blob-num js-line-number" data-line-number="2601"></td>
        <td id="LC2601" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">IBStripCutValueCb</span>(*reinterpret_cast&lt;<span class="pl-c1">decltype</span>(CD3DX12_PIPELINE_STATE_STREAM::IBStripCutValue)*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2602" class="blob-num js-line-number" data-line-number="2602"></td>
        <td id="LC2602" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM::IBStripCutValue);</td>
      </tr>
      <tr>
        <td id="L2603" class="blob-num js-line-number" data-line-number="2603"></td>
        <td id="LC2603" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2604" class="blob-num js-line-number" data-line-number="2604"></td>
        <td id="LC2604" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_PRIMITIVE_TOPOLOGY: </td>
      </tr>
      <tr>
        <td id="L2605" class="blob-num js-line-number" data-line-number="2605"></td>
        <td id="LC2605" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">PrimitiveTopologyTypeCb</span>(*reinterpret_cast&lt;<span class="pl-c1">decltype</span>(CD3DX12_PIPELINE_STATE_STREAM::PrimitiveTopologyType)*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2606" class="blob-num js-line-number" data-line-number="2606"></td>
        <td id="LC2606" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM::PrimitiveTopologyType);</td>
      </tr>
      <tr>
        <td id="L2607" class="blob-num js-line-number" data-line-number="2607"></td>
        <td id="LC2607" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2608" class="blob-num js-line-number" data-line-number="2608"></td>
        <td id="LC2608" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_RENDER_TARGET_FORMATS: </td>
      </tr>
      <tr>
        <td id="L2609" class="blob-num js-line-number" data-line-number="2609"></td>
        <td id="LC2609" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">RTVFormatsCb</span>(*reinterpret_cast&lt;<span class="pl-c1">decltype</span>(CD3DX12_PIPELINE_STATE_STREAM::RTVFormats)*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2610" class="blob-num js-line-number" data-line-number="2610"></td>
        <td id="LC2610" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM::RTVFormats);</td>
      </tr>
      <tr>
        <td id="L2611" class="blob-num js-line-number" data-line-number="2611"></td>
        <td id="LC2611" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2612" class="blob-num js-line-number" data-line-number="2612"></td>
        <td id="LC2612" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DEPTH_STENCIL_FORMAT: </td>
      </tr>
      <tr>
        <td id="L2613" class="blob-num js-line-number" data-line-number="2613"></td>
        <td id="LC2613" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">DSVFormatCb</span>(*reinterpret_cast&lt;<span class="pl-c1">decltype</span>(CD3DX12_PIPELINE_STATE_STREAM::DSVFormat)*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2614" class="blob-num js-line-number" data-line-number="2614"></td>
        <td id="LC2614" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM::DSVFormat);</td>
      </tr>
      <tr>
        <td id="L2615" class="blob-num js-line-number" data-line-number="2615"></td>
        <td id="LC2615" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2616" class="blob-num js-line-number" data-line-number="2616"></td>
        <td id="LC2616" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_SAMPLE_DESC: </td>
      </tr>
      <tr>
        <td id="L2617" class="blob-num js-line-number" data-line-number="2617"></td>
        <td id="LC2617" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">SampleDescCb</span>(*reinterpret_cast&lt;<span class="pl-c1">decltype</span>(CD3DX12_PIPELINE_STATE_STREAM::SampleDesc)*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2618" class="blob-num js-line-number" data-line-number="2618"></td>
        <td id="LC2618" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM::SampleDesc);</td>
      </tr>
      <tr>
        <td id="L2619" class="blob-num js-line-number" data-line-number="2619"></td>
        <td id="LC2619" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2620" class="blob-num js-line-number" data-line-number="2620"></td>
        <td id="LC2620" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_NODE_MASK: </td>
      </tr>
      <tr>
        <td id="L2621" class="blob-num js-line-number" data-line-number="2621"></td>
        <td id="LC2621" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">NodeMaskCb</span>(*reinterpret_cast&lt;<span class="pl-c1">decltype</span>(CD3DX12_PIPELINE_STATE_STREAM::NodeMask)*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2622" class="blob-num js-line-number" data-line-number="2622"></td>
        <td id="LC2622" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM::NodeMask);</td>
      </tr>
      <tr>
        <td id="L2623" class="blob-num js-line-number" data-line-number="2623"></td>
        <td id="LC2623" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2624" class="blob-num js-line-number" data-line-number="2624"></td>
        <td id="LC2624" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_CACHED_PSO: </td>
      </tr>
      <tr>
        <td id="L2625" class="blob-num js-line-number" data-line-number="2625"></td>
        <td id="LC2625" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">CachedPSOCb</span>(*reinterpret_cast&lt;<span class="pl-c1">decltype</span>(CD3DX12_PIPELINE_STATE_STREAM::CachedPSO)*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2626" class="blob-num js-line-number" data-line-number="2626"></td>
        <td id="LC2626" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM::CachedPSO);</td>
      </tr>
      <tr>
        <td id="L2627" class="blob-num js-line-number" data-line-number="2627"></td>
        <td id="LC2627" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2628" class="blob-num js-line-number" data-line-number="2628"></td>
        <td id="LC2628" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_FLAGS:</td>
      </tr>
      <tr>
        <td id="L2629" class="blob-num js-line-number" data-line-number="2629"></td>
        <td id="LC2629" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">FlagsCb</span>(*reinterpret_cast&lt;<span class="pl-c1">decltype</span>(CD3DX12_PIPELINE_STATE_STREAM::Flags)*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2630" class="blob-num js-line-number" data-line-number="2630"></td>
        <td id="LC2630" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM::Flags);</td>
      </tr>
      <tr>
        <td id="L2631" class="blob-num js-line-number" data-line-number="2631"></td>
        <td id="LC2631" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2632" class="blob-num js-line-number" data-line-number="2632"></td>
        <td id="LC2632" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">case</span> D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_VIEW_INSTANCING:</td>
      </tr>
      <tr>
        <td id="L2633" class="blob-num js-line-number" data-line-number="2633"></td>
        <td id="LC2633" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">ViewInstancingCb</span>(*reinterpret_cast&lt;<span class="pl-c1">decltype</span>(CD3DX12_PIPELINE_STATE_STREAM1::ViewInstancingDesc)*&gt;(pStream));</td>
      </tr>
      <tr>
        <td id="L2634" class="blob-num js-line-number" data-line-number="2634"></td>
        <td id="LC2634" class="blob-code blob-code-inner js-file-line">            SizeOfSubobject = <span class="pl-k">sizeof</span>(CD3DX12_PIPELINE_STATE_STREAM1::ViewInstancingDesc);</td>
      </tr>
      <tr>
        <td id="L2635" class="blob-num js-line-number" data-line-number="2635"></td>
        <td id="LC2635" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2636" class="blob-num js-line-number" data-line-number="2636"></td>
        <td id="LC2636" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">default</span>:</td>
      </tr>
      <tr>
        <td id="L2637" class="blob-num js-line-number" data-line-number="2637"></td>
        <td id="LC2637" class="blob-code blob-code-inner js-file-line">            pCallbacks-&gt;<span class="pl-c1">ErrorUnknownSubobject</span>(SubobjectType);</td>
      </tr>
      <tr>
        <td id="L2638" class="blob-num js-line-number" data-line-number="2638"></td>
        <td id="LC2638" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">return</span> E_INVALIDARG;</td>
      </tr>
      <tr>
        <td id="L2639" class="blob-num js-line-number" data-line-number="2639"></td>
        <td id="LC2639" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2640" class="blob-num js-line-number" data-line-number="2640"></td>
        <td id="LC2640" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2641" class="blob-num js-line-number" data-line-number="2641"></td>
        <td id="LC2641" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2642" class="blob-num js-line-number" data-line-number="2642"></td>
        <td id="LC2642" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2643" class="blob-num js-line-number" data-line-number="2643"></td>
        <td id="LC2643" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> S_OK;</td>
      </tr>
      <tr>
        <td id="L2644" class="blob-num js-line-number" data-line-number="2644"></td>
        <td id="LC2644" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2645" class="blob-num js-line-number" data-line-number="2645"></td>
        <td id="LC2645" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2646" class="blob-num js-line-number" data-line-number="2646"></td>
        <td id="LC2646" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L2647" class="blob-num js-line-number" data-line-number="2647"></td>
        <td id="LC2647" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">bool</span> operator==( <span class="pl-k">const</span> D3D12_CLEAR_VALUE &amp;a, <span class="pl-k">const</span> D3D12_CLEAR_VALUE &amp;b)</td>
      </tr>
      <tr>
        <td id="L2648" class="blob-num js-line-number" data-line-number="2648"></td>
        <td id="LC2648" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2649" class="blob-num js-line-number" data-line-number="2649"></td>
        <td id="LC2649" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (a.<span class="pl-smi">Format</span> != b.<span class="pl-smi">Format</span>) <span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2650" class="blob-num js-line-number" data-line-number="2650"></td>
        <td id="LC2650" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (a.<span class="pl-smi">Format</span> == DXGI_FORMAT_D24_UNORM_S8_UINT</td>
      </tr>
      <tr>
        <td id="L2651" class="blob-num js-line-number" data-line-number="2651"></td>
        <td id="LC2651" class="blob-code blob-code-inner js-file-line">     || a.<span class="pl-smi">Format</span> == DXGI_FORMAT_D16_UNORM</td>
      </tr>
      <tr>
        <td id="L2652" class="blob-num js-line-number" data-line-number="2652"></td>
        <td id="LC2652" class="blob-code blob-code-inner js-file-line">     || a.<span class="pl-smi">Format</span> == DXGI_FORMAT_D32_FLOAT</td>
      </tr>
      <tr>
        <td id="L2653" class="blob-num js-line-number" data-line-number="2653"></td>
        <td id="LC2653" class="blob-code blob-code-inner js-file-line">     || a.<span class="pl-smi">Format</span> == DXGI_FORMAT_D32_FLOAT_S8X24_UINT)</td>
      </tr>
      <tr>
        <td id="L2654" class="blob-num js-line-number" data-line-number="2654"></td>
        <td id="LC2654" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2655" class="blob-num js-line-number" data-line-number="2655"></td>
        <td id="LC2655" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> (a.<span class="pl-smi">DepthStencil</span>.<span class="pl-smi">Depth</span> == b.<span class="pl-smi">DepthStencil</span>.<span class="pl-smi">Depth</span>) &amp;&amp; </td>
      </tr>
      <tr>
        <td id="L2656" class="blob-num js-line-number" data-line-number="2656"></td>
        <td id="LC2656" class="blob-code blob-code-inner js-file-line">          (a.<span class="pl-smi">DepthStencil</span>.<span class="pl-smi">Stencil</span> == b.<span class="pl-smi">DepthStencil</span>.<span class="pl-smi">Stencil</span>);</td>
      </tr>
      <tr>
        <td id="L2657" class="blob-num js-line-number" data-line-number="2657"></td>
        <td id="LC2657" class="blob-code blob-code-inner js-file-line">    } <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L2658" class="blob-num js-line-number" data-line-number="2658"></td>
        <td id="LC2658" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> (a.<span class="pl-smi">Color</span>[<span class="pl-c1">0</span>] == b.<span class="pl-smi">Color</span>[<span class="pl-c1">0</span>]) &amp;&amp; </td>
      </tr>
      <tr>
        <td id="L2659" class="blob-num js-line-number" data-line-number="2659"></td>
        <td id="LC2659" class="blob-code blob-code-inner js-file-line">               (a.<span class="pl-smi">Color</span>[<span class="pl-c1">1</span>] == b.<span class="pl-smi">Color</span>[<span class="pl-c1">1</span>]) &amp;&amp; </td>
      </tr>
      <tr>
        <td id="L2660" class="blob-num js-line-number" data-line-number="2660"></td>
        <td id="LC2660" class="blob-code blob-code-inner js-file-line">               (a.<span class="pl-smi">Color</span>[<span class="pl-c1">2</span>] == b.<span class="pl-smi">Color</span>[<span class="pl-c1">2</span>]) &amp;&amp; </td>
      </tr>
      <tr>
        <td id="L2661" class="blob-num js-line-number" data-line-number="2661"></td>
        <td id="LC2661" class="blob-code blob-code-inner js-file-line">               (a.<span class="pl-smi">Color</span>[<span class="pl-c1">3</span>] == b.<span class="pl-smi">Color</span>[<span class="pl-c1">3</span>]);</td>
      </tr>
      <tr>
        <td id="L2662" class="blob-num js-line-number" data-line-number="2662"></td>
        <td id="LC2662" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2663" class="blob-num js-line-number" data-line-number="2663"></td>
        <td id="LC2663" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2664" class="blob-num js-line-number" data-line-number="2664"></td>
        <td id="LC2664" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">bool</span> operator==( <span class="pl-k">const</span> D3D12_RENDER_PASS_BEGINNING_ACCESS_CLEAR_PARAMETERS &amp;a, <span class="pl-k">const</span> D3D12_RENDER_PASS_BEGINNING_ACCESS_CLEAR_PARAMETERS &amp;b)</td>
      </tr>
      <tr>
        <td id="L2665" class="blob-num js-line-number" data-line-number="2665"></td>
        <td id="LC2665" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2666" class="blob-num js-line-number" data-line-number="2666"></td>
        <td id="LC2666" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> a.<span class="pl-smi">ClearValue</span> == b.<span class="pl-smi">ClearValue</span>;</td>
      </tr>
      <tr>
        <td id="L2667" class="blob-num js-line-number" data-line-number="2667"></td>
        <td id="LC2667" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2668" class="blob-num js-line-number" data-line-number="2668"></td>
        <td id="LC2668" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">bool</span> operator==( <span class="pl-k">const</span> D3D12_RENDER_PASS_ENDING_ACCESS_RESOLVE_PARAMETERS &amp;a, <span class="pl-k">const</span> D3D12_RENDER_PASS_ENDING_ACCESS_RESOLVE_PARAMETERS &amp;b)</td>
      </tr>
      <tr>
        <td id="L2669" class="blob-num js-line-number" data-line-number="2669"></td>
        <td id="LC2669" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2670" class="blob-num js-line-number" data-line-number="2670"></td>
        <td id="LC2670" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (a.<span class="pl-smi">pSrcResource</span> != b.<span class="pl-smi">pSrcResource</span>) <span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2671" class="blob-num js-line-number" data-line-number="2671"></td>
        <td id="LC2671" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (a.<span class="pl-smi">pDstResource</span> != b.<span class="pl-smi">pDstResource</span>) <span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2672" class="blob-num js-line-number" data-line-number="2672"></td>
        <td id="LC2672" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (a.<span class="pl-smi">SubresourceCount</span> != b.<span class="pl-smi">SubresourceCount</span>) <span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2673" class="blob-num js-line-number" data-line-number="2673"></td>
        <td id="LC2673" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (a.<span class="pl-smi">Format</span> != b.<span class="pl-smi">Format</span>) <span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2674" class="blob-num js-line-number" data-line-number="2674"></td>
        <td id="LC2674" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (a.<span class="pl-smi">ResolveMode</span> != b.<span class="pl-smi">ResolveMode</span>) <span class="pl-k">return</span> <span class="pl-c1">false</span>; </td>
      </tr>
      <tr>
        <td id="L2675" class="blob-num js-line-number" data-line-number="2675"></td>
        <td id="LC2675" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (a.<span class="pl-smi">PreserveResolveSource</span> != b.<span class="pl-smi">PreserveResolveSource</span>) <span class="pl-k">return</span> <span class="pl-c1">false</span>; </td>
      </tr>
      <tr>
        <td id="L2676" class="blob-num js-line-number" data-line-number="2676"></td>
        <td id="LC2676" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L2677" class="blob-num js-line-number" data-line-number="2677"></td>
        <td id="LC2677" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2678" class="blob-num js-line-number" data-line-number="2678"></td>
        <td id="LC2678" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">bool</span> operator==( <span class="pl-k">const</span> D3D12_RENDER_PASS_BEGINNING_ACCESS &amp;a, <span class="pl-k">const</span> D3D12_RENDER_PASS_BEGINNING_ACCESS &amp;b)</td>
      </tr>
      <tr>
        <td id="L2679" class="blob-num js-line-number" data-line-number="2679"></td>
        <td id="LC2679" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2680" class="blob-num js-line-number" data-line-number="2680"></td>
        <td id="LC2680" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (a.<span class="pl-smi">Type</span> != b.<span class="pl-smi">Type</span>) <span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2681" class="blob-num js-line-number" data-line-number="2681"></td>
        <td id="LC2681" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (a.<span class="pl-smi">Type</span> == D3D12_RENDER_PASS_BEGINNING_ACCESS_TYPE_CLEAR &amp;&amp; !(a.<span class="pl-smi">Clear</span> == b.<span class="pl-smi">Clear</span>)) <span class="pl-k">return</span> <span class="pl-c1">false</span>; </td>
      </tr>
      <tr>
        <td id="L2682" class="blob-num js-line-number" data-line-number="2682"></td>
        <td id="LC2682" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L2683" class="blob-num js-line-number" data-line-number="2683"></td>
        <td id="LC2683" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2684" class="blob-num js-line-number" data-line-number="2684"></td>
        <td id="LC2684" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">bool</span> operator==( <span class="pl-k">const</span> D3D12_RENDER_PASS_ENDING_ACCESS &amp;a, <span class="pl-k">const</span> D3D12_RENDER_PASS_ENDING_ACCESS &amp;b)</td>
      </tr>
      <tr>
        <td id="L2685" class="blob-num js-line-number" data-line-number="2685"></td>
        <td id="LC2685" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2686" class="blob-num js-line-number" data-line-number="2686"></td>
        <td id="LC2686" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (a.<span class="pl-smi">Type</span> != b.<span class="pl-smi">Type</span>) <span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2687" class="blob-num js-line-number" data-line-number="2687"></td>
        <td id="LC2687" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (a.<span class="pl-smi">Type</span> == D3D12_RENDER_PASS_ENDING_ACCESS_TYPE_RESOLVE &amp;&amp; !(a.<span class="pl-smi">Resolve</span> == b.<span class="pl-smi">Resolve</span>)) <span class="pl-k">return</span> <span class="pl-c1">false</span>; </td>
      </tr>
      <tr>
        <td id="L2688" class="blob-num js-line-number" data-line-number="2688"></td>
        <td id="LC2688" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L2689" class="blob-num js-line-number" data-line-number="2689"></td>
        <td id="LC2689" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2690" class="blob-num js-line-number" data-line-number="2690"></td>
        <td id="LC2690" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">bool</span> operator==( <span class="pl-k">const</span> D3D12_RENDER_PASS_RENDER_TARGET_DESC &amp;a, <span class="pl-k">const</span> D3D12_RENDER_PASS_RENDER_TARGET_DESC &amp;b)</td>
      </tr>
      <tr>
        <td id="L2691" class="blob-num js-line-number" data-line-number="2691"></td>
        <td id="LC2691" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2692" class="blob-num js-line-number" data-line-number="2692"></td>
        <td id="LC2692" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (a.<span class="pl-smi">cpuDescriptor</span>.<span class="pl-smi">ptr</span> != b.<span class="pl-smi">cpuDescriptor</span>.<span class="pl-smi">ptr</span>) <span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2693" class="blob-num js-line-number" data-line-number="2693"></td>
        <td id="LC2693" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (!(a.<span class="pl-smi">BeginningAccess</span> == b.<span class="pl-smi">BeginningAccess</span>)) <span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2694" class="blob-num js-line-number" data-line-number="2694"></td>
        <td id="LC2694" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (!(a.<span class="pl-smi">EndingAccess</span> == b.<span class="pl-smi">EndingAccess</span>)) <span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2695" class="blob-num js-line-number" data-line-number="2695"></td>
        <td id="LC2695" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L2696" class="blob-num js-line-number" data-line-number="2696"></td>
        <td id="LC2696" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2697" class="blob-num js-line-number" data-line-number="2697"></td>
        <td id="LC2697" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">bool</span> operator==( <span class="pl-k">const</span> D3D12_RENDER_PASS_DEPTH_STENCIL_DESC &amp;a, <span class="pl-k">const</span> D3D12_RENDER_PASS_DEPTH_STENCIL_DESC &amp;b)</td>
      </tr>
      <tr>
        <td id="L2698" class="blob-num js-line-number" data-line-number="2698"></td>
        <td id="LC2698" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2699" class="blob-num js-line-number" data-line-number="2699"></td>
        <td id="LC2699" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (a.<span class="pl-smi">cpuDescriptor</span>.<span class="pl-smi">ptr</span> != b.<span class="pl-smi">cpuDescriptor</span>.<span class="pl-smi">ptr</span>) <span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2700" class="blob-num js-line-number" data-line-number="2700"></td>
        <td id="LC2700" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (!(a.<span class="pl-smi">DepthBeginningAccess</span> == b.<span class="pl-smi">DepthBeginningAccess</span>)) <span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2701" class="blob-num js-line-number" data-line-number="2701"></td>
        <td id="LC2701" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (!(a.<span class="pl-smi">StencilBeginningAccess</span> == b.<span class="pl-smi">StencilBeginningAccess</span>)) <span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2702" class="blob-num js-line-number" data-line-number="2702"></td>
        <td id="LC2702" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (!(a.<span class="pl-smi">DepthEndingAccess</span> == b.<span class="pl-smi">DepthEndingAccess</span>)) <span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2703" class="blob-num js-line-number" data-line-number="2703"></td>
        <td id="LC2703" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (!(a.<span class="pl-smi">StencilEndingAccess</span> == b.<span class="pl-smi">StencilEndingAccess</span>)) <span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2704" class="blob-num js-line-number" data-line-number="2704"></td>
        <td id="LC2704" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L2705" class="blob-num js-line-number" data-line-number="2705"></td>
        <td id="LC2705" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2706" class="blob-num js-line-number" data-line-number="2706"></td>
        <td id="LC2706" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2707" class="blob-num js-line-number" data-line-number="2707"></td>
        <td id="LC2707" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2708" class="blob-num js-line-number" data-line-number="2708"></td>
        <td id="LC2708" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifndef</span> D3DX12_NO_STATE_OBJECT_HELPERS</td>
      </tr>
      <tr>
        <td id="L2709" class="blob-num js-line-number" data-line-number="2709"></td>
        <td id="LC2709" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2710" class="blob-num js-line-number" data-line-number="2710"></td>
        <td id="LC2710" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>================================================================================================</span></td>
      </tr>
      <tr>
        <td id="L2711" class="blob-num js-line-number" data-line-number="2711"></td>
        <td id="LC2711" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> D3DX12 State Object Creation Helpers</span></td>
      </tr>
      <tr>
        <td id="L2712" class="blob-num js-line-number" data-line-number="2712"></td>
        <td id="LC2712" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> </span></td>
      </tr>
      <tr>
        <td id="L2713" class="blob-num js-line-number" data-line-number="2713"></td>
        <td id="LC2713" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Helper classes for creating new style state objects out of an arbitrary set of subobjects.</span></td>
      </tr>
      <tr>
        <td id="L2714" class="blob-num js-line-number" data-line-number="2714"></td>
        <td id="LC2714" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Uses STL</span></td>
      </tr>
      <tr>
        <td id="L2715" class="blob-num js-line-number" data-line-number="2715"></td>
        <td id="LC2715" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span></span></td>
      </tr>
      <tr>
        <td id="L2716" class="blob-num js-line-number" data-line-number="2716"></td>
        <td id="LC2716" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Start by instantiating CD3DX12_STATE_OBJECT_DESC (see it&#39;s public methods).</span></td>
      </tr>
      <tr>
        <td id="L2717" class="blob-num js-line-number" data-line-number="2717"></td>
        <td id="LC2717" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> One of its methods is CreateSubobject(), which has a comment showing a couple of options for</span></td>
      </tr>
      <tr>
        <td id="L2718" class="blob-num js-line-number" data-line-number="2718"></td>
        <td id="LC2718" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> defining subobjects using the helper classes for each subobject (CD3DX12_DXIL_LIBRARY_SUBOBJECT </span></td>
      </tr>
      <tr>
        <td id="L2719" class="blob-num js-line-number" data-line-number="2719"></td>
        <td id="LC2719" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> etc.). The subobject helpers each have methods specific to the subobject for configuring it&#39;s </span></td>
      </tr>
      <tr>
        <td id="L2720" class="blob-num js-line-number" data-line-number="2720"></td>
        <td id="LC2720" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> contents.</span></td>
      </tr>
      <tr>
        <td id="L2721" class="blob-num js-line-number" data-line-number="2721"></td>
        <td id="LC2721" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> </span></td>
      </tr>
      <tr>
        <td id="L2722" class="blob-num js-line-number" data-line-number="2722"></td>
        <td id="LC2722" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>================================================================================================</span></td>
      </tr>
      <tr>
        <td id="L2723" class="blob-num js-line-number" data-line-number="2723"></td>
        <td id="LC2723" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>list<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L2724" class="blob-num js-line-number" data-line-number="2724"></td>
        <td id="LC2724" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>vector<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L2725" class="blob-num js-line-number" data-line-number="2725"></td>
        <td id="LC2725" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>string<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L2726" class="blob-num js-line-number" data-line-number="2726"></td>
        <td id="LC2726" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>memory<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L2727" class="blob-num js-line-number" data-line-number="2727"></td>
        <td id="LC2727" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>wrl/client.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L2728" class="blob-num js-line-number" data-line-number="2728"></td>
        <td id="LC2728" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2729" class="blob-num js-line-number" data-line-number="2729"></td>
        <td id="LC2729" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L2730" class="blob-num js-line-number" data-line-number="2730"></td>
        <td id="LC2730" class="blob-code blob-code-inner js-file-line">class CD3DX12_STATE_OBJECT_DESC</td>
      </tr>
      <tr>
        <td id="L2731" class="blob-num js-line-number" data-line-number="2731"></td>
        <td id="LC2731" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2732" class="blob-num js-line-number" data-line-number="2732"></td>
        <td id="LC2732" class="blob-code blob-code-inner js-file-line">public:</td>
      </tr>
      <tr>
        <td id="L2733" class="blob-num js-line-number" data-line-number="2733"></td>
        <td id="LC2733" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_STATE_OBJECT_DESC</span>()</td>
      </tr>
      <tr>
        <td id="L2734" class="blob-num js-line-number" data-line-number="2734"></td>
        <td id="LC2734" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2735" class="blob-num js-line-number" data-line-number="2735"></td>
        <td id="LC2735" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>(D3D12_STATE_OBJECT_TYPE_COLLECTION);</td>
      </tr>
      <tr>
        <td id="L2736" class="blob-num js-line-number" data-line-number="2736"></td>
        <td id="LC2736" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2737" class="blob-num js-line-number" data-line-number="2737"></td>
        <td id="LC2737" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_STATE_OBJECT_DESC</span>(D3D12_STATE_OBJECT_TYPE Type)</td>
      </tr>
      <tr>
        <td id="L2738" class="blob-num js-line-number" data-line-number="2738"></td>
        <td id="LC2738" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2739" class="blob-num js-line-number" data-line-number="2739"></td>
        <td id="LC2739" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>(Type);</td>
      </tr>
      <tr>
        <td id="L2740" class="blob-num js-line-number" data-line-number="2740"></td>
        <td id="LC2740" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2741" class="blob-num js-line-number" data-line-number="2741"></td>
        <td id="LC2741" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">SetStateObjectType</span>(D3D12_STATE_OBJECT_TYPE Type) { m_Desc.<span class="pl-smi">Type</span> = Type; }</td>
      </tr>
      <tr>
        <td id="L2742" class="blob-num js-line-number" data-line-number="2742"></td>
        <td id="LC2742" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-k">const</span> D3D12_STATE_OBJECT_DESC&amp;()</td>
      </tr>
      <tr>
        <td id="L2743" class="blob-num js-line-number" data-line-number="2743"></td>
        <td id="LC2743" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2744" class="blob-num js-line-number" data-line-number="2744"></td>
        <td id="LC2744" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span> Do final preparation work</span></td>
      </tr>
      <tr>
        <td id="L2745" class="blob-num js-line-number" data-line-number="2745"></td>
        <td id="LC2745" class="blob-code blob-code-inner js-file-line">        m_RepointedAssociations.<span class="pl-c1">clear</span>();</td>
      </tr>
      <tr>
        <td id="L2746" class="blob-num js-line-number" data-line-number="2746"></td>
        <td id="LC2746" class="blob-code blob-code-inner js-file-line">        m_SubobjectArray.<span class="pl-c1">clear</span>();</td>
      </tr>
      <tr>
        <td id="L2747" class="blob-num js-line-number" data-line-number="2747"></td>
        <td id="LC2747" class="blob-code blob-code-inner js-file-line">        m_SubobjectArray.<span class="pl-c1">reserve</span>(m_Desc.<span class="pl-smi">NumSubobjects</span>);</td>
      </tr>
      <tr>
        <td id="L2748" class="blob-num js-line-number" data-line-number="2748"></td>
        <td id="LC2748" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span> Flatten subobjects into an array (each flattened subobject still has a </span></td>
      </tr>
      <tr>
        <td id="L2749" class="blob-num js-line-number" data-line-number="2749"></td>
        <td id="LC2749" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span> member that&#39;s a pointer to it&#39;s desc that&#39;s not flattened)</span></td>
      </tr>
      <tr>
        <td id="L2750" class="blob-num js-line-number" data-line-number="2750"></td>
        <td id="LC2750" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (<span class="pl-k">auto</span> Iter = m_SubobjectList.<span class="pl-c1">begin</span>();</td>
      </tr>
      <tr>
        <td id="L2751" class="blob-num js-line-number" data-line-number="2751"></td>
        <td id="LC2751" class="blob-code blob-code-inner js-file-line">            Iter != m_SubobjectList.<span class="pl-c1">end</span>(); Iter++)</td>
      </tr>
      <tr>
        <td id="L2752" class="blob-num js-line-number" data-line-number="2752"></td>
        <td id="LC2752" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L2753" class="blob-num js-line-number" data-line-number="2753"></td>
        <td id="LC2753" class="blob-code blob-code-inner js-file-line">            m_SubobjectArray.<span class="pl-c1">push_back</span>(*Iter);</td>
      </tr>
      <tr>
        <td id="L2754" class="blob-num js-line-number" data-line-number="2754"></td>
        <td id="LC2754" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">//</span> Store new location in array so we can redirect pointers contained in subobjects </span></td>
      </tr>
      <tr>
        <td id="L2755" class="blob-num js-line-number" data-line-number="2755"></td>
        <td id="LC2755" class="blob-code blob-code-inner js-file-line">            Iter-&gt;<span class="pl-smi">pSubobjectArrayLocation</span> = &amp;m_SubobjectArray.<span class="pl-c1">back</span>(); </td>
      </tr>
      <tr>
        <td id="L2756" class="blob-num js-line-number" data-line-number="2756"></td>
        <td id="LC2756" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2757" class="blob-num js-line-number" data-line-number="2757"></td>
        <td id="LC2757" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span> For subobjects with pointer fields, create a new copy of those subobject definitions</span></td>
      </tr>
      <tr>
        <td id="L2758" class="blob-num js-line-number" data-line-number="2758"></td>
        <td id="LC2758" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span> with fixed pointers</span></td>
      </tr>
      <tr>
        <td id="L2759" class="blob-num js-line-number" data-line-number="2759"></td>
        <td id="LC2759" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (UINT i = <span class="pl-c1">0</span>; i &lt; m_Desc.<span class="pl-smi">NumSubobjects</span>; i++)</td>
      </tr>
      <tr>
        <td id="L2760" class="blob-num js-line-number" data-line-number="2760"></td>
        <td id="LC2760" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L2761" class="blob-num js-line-number" data-line-number="2761"></td>
        <td id="LC2761" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span> (m_SubobjectArray[i].<span class="pl-smi">Type</span> == D3D12_STATE_SUBOBJECT_TYPE_SUBOBJECT_TO_EXPORTS_ASSOCIATION)</td>
      </tr>
      <tr>
        <td id="L2762" class="blob-num js-line-number" data-line-number="2762"></td>
        <td id="LC2762" class="blob-code blob-code-inner js-file-line">            {</td>
      </tr>
      <tr>
        <td id="L2763" class="blob-num js-line-number" data-line-number="2763"></td>
        <td id="LC2763" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">auto</span> pOriginalSubobjectAssociation = </td>
      </tr>
      <tr>
        <td id="L2764" class="blob-num js-line-number" data-line-number="2764"></td>
        <td id="LC2764" class="blob-code blob-code-inner js-file-line">                    reinterpret_cast&lt;<span class="pl-k">const</span> D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION*&gt;(m_SubobjectArray[i].<span class="pl-smi">pDesc</span>);</td>
      </tr>
      <tr>
        <td id="L2765" class="blob-num js-line-number" data-line-number="2765"></td>
        <td id="LC2765" class="blob-code blob-code-inner js-file-line">                D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION Repointed = *pOriginalSubobjectAssociation;</td>
      </tr>
      <tr>
        <td id="L2766" class="blob-num js-line-number" data-line-number="2766"></td>
        <td id="LC2766" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">auto</span> pWrapper = </td>
      </tr>
      <tr>
        <td id="L2767" class="blob-num js-line-number" data-line-number="2767"></td>
        <td id="LC2767" class="blob-code blob-code-inner js-file-line">                    static_cast&lt;<span class="pl-k">const</span> SUBOBJECT_WRAPPER*&gt;(pOriginalSubobjectAssociation-&gt;<span class="pl-smi">pSubobjectToAssociate</span>);</td>
      </tr>
      <tr>
        <td id="L2768" class="blob-num js-line-number" data-line-number="2768"></td>
        <td id="LC2768" class="blob-code blob-code-inner js-file-line">                Repointed.<span class="pl-smi">pSubobjectToAssociate</span> = pWrapper-&gt;<span class="pl-smi">pSubobjectArrayLocation</span>;</td>
      </tr>
      <tr>
        <td id="L2769" class="blob-num js-line-number" data-line-number="2769"></td>
        <td id="LC2769" class="blob-code blob-code-inner js-file-line">                m_RepointedAssociations.<span class="pl-c1">push_back</span>(Repointed);</td>
      </tr>
      <tr>
        <td id="L2770" class="blob-num js-line-number" data-line-number="2770"></td>
        <td id="LC2770" class="blob-code blob-code-inner js-file-line">                m_SubobjectArray[i].<span class="pl-smi">pDesc</span> = &amp;m_RepointedAssociations.<span class="pl-c1">back</span>();</td>
      </tr>
      <tr>
        <td id="L2771" class="blob-num js-line-number" data-line-number="2771"></td>
        <td id="LC2771" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L2772" class="blob-num js-line-number" data-line-number="2772"></td>
        <td id="LC2772" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2773" class="blob-num js-line-number" data-line-number="2773"></td>
        <td id="LC2773" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span> Below: using ugly way to get pointer in case .data() is not defined</span></td>
      </tr>
      <tr>
        <td id="L2774" class="blob-num js-line-number" data-line-number="2774"></td>
        <td id="LC2774" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">pSubobjects</span> = m_Desc.<span class="pl-smi">NumSubobjects</span> ? &amp;m_SubobjectArray[<span class="pl-c1">0</span>] : nullptr; </td>
      </tr>
      <tr>
        <td id="L2775" class="blob-num js-line-number" data-line-number="2775"></td>
        <td id="LC2775" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> m_Desc;</td>
      </tr>
      <tr>
        <td id="L2776" class="blob-num js-line-number" data-line-number="2776"></td>
        <td id="LC2776" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2777" class="blob-num js-line-number" data-line-number="2777"></td>
        <td id="LC2777" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-k">const</span> D3D12_STATE_OBJECT_DESC*()</td>
      </tr>
      <tr>
        <td id="L2778" class="blob-num js-line-number" data-line-number="2778"></td>
        <td id="LC2778" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2779" class="blob-num js-line-number" data-line-number="2779"></td>
        <td id="LC2779" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span> Cast calls the above final preparation work</span></td>
      </tr>
      <tr>
        <td id="L2780" class="blob-num js-line-number" data-line-number="2780"></td>
        <td id="LC2780" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> &amp;static_cast&lt;<span class="pl-k">const</span> D3D12_STATE_OBJECT_DESC&amp;&gt;(*this);</td>
      </tr>
      <tr>
        <td id="L2781" class="blob-num js-line-number" data-line-number="2781"></td>
        <td id="LC2781" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2782" class="blob-num js-line-number" data-line-number="2782"></td>
        <td id="LC2782" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2783" class="blob-num js-line-number" data-line-number="2783"></td>
        <td id="LC2783" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> CreateSubobject creates a sububject helper (e.g. CD3DX12_HIT_GROUP_SUBOBJECT) </span></td>
      </tr>
      <tr>
        <td id="L2784" class="blob-num js-line-number" data-line-number="2784"></td>
        <td id="LC2784" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> whose lifetime is owned by this class.</span></td>
      </tr>
      <tr>
        <td id="L2785" class="blob-num js-line-number" data-line-number="2785"></td>
        <td id="LC2785" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> e.g. </span></td>
      </tr>
      <tr>
        <td id="L2786" class="blob-num js-line-number" data-line-number="2786"></td>
        <td id="LC2786" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> </span></td>
      </tr>
      <tr>
        <td id="L2787" class="blob-num js-line-number" data-line-number="2787"></td>
        <td id="LC2787" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>    CD3DX12_STATE_OBJECT_DESC Collection1(D3D12_STATE_OBJECT_TYPE_COLLECTION);</span></td>
      </tr>
      <tr>
        <td id="L2788" class="blob-num js-line-number" data-line-number="2788"></td>
        <td id="LC2788" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>    auto Lib0 = Collection1.CreateSubobject&lt;CD3DX12_DXIL_LIBRARY_SUBOBJECT&gt;();</span></td>
      </tr>
      <tr>
        <td id="L2789" class="blob-num js-line-number" data-line-number="2789"></td>
        <td id="LC2789" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>    Lib0-&gt;SetDXILLibrary(&amp;pMyAppDxilLibs[0]);</span></td>
      </tr>
      <tr>
        <td id="L2790" class="blob-num js-line-number" data-line-number="2790"></td>
        <td id="LC2790" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>    Lib0-&gt;DefineExport(L&quot;rayGenShader0&quot;); // in practice these export listings might be </span></td>
      </tr>
      <tr>
        <td id="L2791" class="blob-num js-line-number" data-line-number="2791"></td>
        <td id="LC2791" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>                                          // data/engine driven</span></td>
      </tr>
      <tr>
        <td id="L2792" class="blob-num js-line-number" data-line-number="2792"></td>
        <td id="LC2792" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>    etc.</span></td>
      </tr>
      <tr>
        <td id="L2793" class="blob-num js-line-number" data-line-number="2793"></td>
        <td id="LC2793" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span></span></td>
      </tr>
      <tr>
        <td id="L2794" class="blob-num js-line-number" data-line-number="2794"></td>
        <td id="LC2794" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Alternatively, users can instantiate sububject helpers explicitly, such as via local </span></td>
      </tr>
      <tr>
        <td id="L2795" class="blob-num js-line-number" data-line-number="2795"></td>
        <td id="LC2795" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> variables instead, passing the state object desc that should point to it into the helper </span></td>
      </tr>
      <tr>
        <td id="L2796" class="blob-num js-line-number" data-line-number="2796"></td>
        <td id="LC2796" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> constructor (or call mySubobjectHelper.AddToStateObject(Collection1)).  </span></td>
      </tr>
      <tr>
        <td id="L2797" class="blob-num js-line-number" data-line-number="2797"></td>
        <td id="LC2797" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> In this alternative scenario, the user must keep the subobject alive as long as the state </span></td>
      </tr>
      <tr>
        <td id="L2798" class="blob-num js-line-number" data-line-number="2798"></td>
        <td id="LC2798" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> object it is associated with is alive, else it&#39;s pointer references will be stale.</span></td>
      </tr>
      <tr>
        <td id="L2799" class="blob-num js-line-number" data-line-number="2799"></td>
        <td id="LC2799" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> e.g.</span></td>
      </tr>
      <tr>
        <td id="L2800" class="blob-num js-line-number" data-line-number="2800"></td>
        <td id="LC2800" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span></span></td>
      </tr>
      <tr>
        <td id="L2801" class="blob-num js-line-number" data-line-number="2801"></td>
        <td id="LC2801" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>    CD3DX12_STATE_OBJECT_DESC RaytracingState2(D3D12_STATE_OBJECT_TYPE_RAYTRACING_PIPELINE);</span></td>
      </tr>
      <tr>
        <td id="L2802" class="blob-num js-line-number" data-line-number="2802"></td>
        <td id="LC2802" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>    CD3DX12_DXIL_LIBRARY_SUBOBJECT LibA(RaytracingState2);</span></td>
      </tr>
      <tr>
        <td id="L2803" class="blob-num js-line-number" data-line-number="2803"></td>
        <td id="LC2803" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>    LibA.SetDXILLibrary(&amp;pMyAppDxilLibs[4]); // not manually specifying exports </span></td>
      </tr>
      <tr>
        <td id="L2804" class="blob-num js-line-number" data-line-number="2804"></td>
        <td id="LC2804" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>                                             // - meaning all exports in the libraries </span></td>
      </tr>
      <tr>
        <td id="L2805" class="blob-num js-line-number" data-line-number="2805"></td>
        <td id="LC2805" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>                                             // are exported</span></td>
      </tr>
      <tr>
        <td id="L2806" class="blob-num js-line-number" data-line-number="2806"></td>
        <td id="LC2806" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>    etc.</span></td>
      </tr>
      <tr>
        <td id="L2807" class="blob-num js-line-number" data-line-number="2807"></td>
        <td id="LC2807" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2808" class="blob-num js-line-number" data-line-number="2808"></td>
        <td id="LC2808" class="blob-code blob-code-inner js-file-line">    template&lt;typename T&gt;</td>
      </tr>
      <tr>
        <td id="L2809" class="blob-num js-line-number" data-line-number="2809"></td>
        <td id="LC2809" class="blob-code blob-code-inner js-file-line">    T* <span class="pl-c1">CreateSubobject</span>()</td>
      </tr>
      <tr>
        <td id="L2810" class="blob-num js-line-number" data-line-number="2810"></td>
        <td id="LC2810" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2811" class="blob-num js-line-number" data-line-number="2811"></td>
        <td id="LC2811" class="blob-code blob-code-inner js-file-line">        T* pSubobject = new <span class="pl-c1">T</span>(*this);</td>
      </tr>
      <tr>
        <td id="L2812" class="blob-num js-line-number" data-line-number="2812"></td>
        <td id="LC2812" class="blob-code blob-code-inner js-file-line">        m_OwnedSubobjectHelpers.<span class="pl-c1">emplace_back</span>(pSubobject);</td>
      </tr>
      <tr>
        <td id="L2813" class="blob-num js-line-number" data-line-number="2813"></td>
        <td id="LC2813" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> pSubobject;</td>
      </tr>
      <tr>
        <td id="L2814" class="blob-num js-line-number" data-line-number="2814"></td>
        <td id="LC2814" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2815" class="blob-num js-line-number" data-line-number="2815"></td>
        <td id="LC2815" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2816" class="blob-num js-line-number" data-line-number="2816"></td>
        <td id="LC2816" class="blob-code blob-code-inner js-file-line">private:</td>
      </tr>
      <tr>
        <td id="L2817" class="blob-num js-line-number" data-line-number="2817"></td>
        <td id="LC2817" class="blob-code blob-code-inner js-file-line">    D3D12_STATE_SUBOBJECT* <span class="pl-c1">TrackSubobject</span>(D3D12_STATE_SUBOBJECT_TYPE Type, <span class="pl-k">void</span>* pDesc)</td>
      </tr>
      <tr>
        <td id="L2818" class="blob-num js-line-number" data-line-number="2818"></td>
        <td id="LC2818" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2819" class="blob-num js-line-number" data-line-number="2819"></td>
        <td id="LC2819" class="blob-code blob-code-inner js-file-line">        SUBOBJECT_WRAPPER Subobject;</td>
      </tr>
      <tr>
        <td id="L2820" class="blob-num js-line-number" data-line-number="2820"></td>
        <td id="LC2820" class="blob-code blob-code-inner js-file-line">        Subobject.<span class="pl-smi">pSubobjectArrayLocation</span> = nullptr;</td>
      </tr>
      <tr>
        <td id="L2821" class="blob-num js-line-number" data-line-number="2821"></td>
        <td id="LC2821" class="blob-code blob-code-inner js-file-line">        Subobject.<span class="pl-smi">Type</span> = Type;</td>
      </tr>
      <tr>
        <td id="L2822" class="blob-num js-line-number" data-line-number="2822"></td>
        <td id="LC2822" class="blob-code blob-code-inner js-file-line">        Subobject.<span class="pl-smi">pDesc</span> = pDesc;</td>
      </tr>
      <tr>
        <td id="L2823" class="blob-num js-line-number" data-line-number="2823"></td>
        <td id="LC2823" class="blob-code blob-code-inner js-file-line">        m_SubobjectList.<span class="pl-c1">push_back</span>(Subobject);</td>
      </tr>
      <tr>
        <td id="L2824" class="blob-num js-line-number" data-line-number="2824"></td>
        <td id="LC2824" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">NumSubobjects</span>++;</td>
      </tr>
      <tr>
        <td id="L2825" class="blob-num js-line-number" data-line-number="2825"></td>
        <td id="LC2825" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> &amp;m_SubobjectList.<span class="pl-c1">back</span>();</td>
      </tr>
      <tr>
        <td id="L2826" class="blob-num js-line-number" data-line-number="2826"></td>
        <td id="LC2826" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2827" class="blob-num js-line-number" data-line-number="2827"></td>
        <td id="LC2827" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">Init</span>(D3D12_STATE_OBJECT_TYPE Type)</td>
      </tr>
      <tr>
        <td id="L2828" class="blob-num js-line-number" data-line-number="2828"></td>
        <td id="LC2828" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2829" class="blob-num js-line-number" data-line-number="2829"></td>
        <td id="LC2829" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">SetStateObjectType</span>(Type);</td>
      </tr>
      <tr>
        <td id="L2830" class="blob-num js-line-number" data-line-number="2830"></td>
        <td id="LC2830" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">pSubobjects</span> = nullptr;</td>
      </tr>
      <tr>
        <td id="L2831" class="blob-num js-line-number" data-line-number="2831"></td>
        <td id="LC2831" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">NumSubobjects</span> = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2832" class="blob-num js-line-number" data-line-number="2832"></td>
        <td id="LC2832" class="blob-code blob-code-inner js-file-line">        m_SubobjectList.<span class="pl-c1">clear</span>();</td>
      </tr>
      <tr>
        <td id="L2833" class="blob-num js-line-number" data-line-number="2833"></td>
        <td id="LC2833" class="blob-code blob-code-inner js-file-line">        m_SubobjectArray.<span class="pl-c1">clear</span>();</td>
      </tr>
      <tr>
        <td id="L2834" class="blob-num js-line-number" data-line-number="2834"></td>
        <td id="LC2834" class="blob-code blob-code-inner js-file-line">        m_RepointedAssociations.<span class="pl-c1">clear</span>();</td>
      </tr>
      <tr>
        <td id="L2835" class="blob-num js-line-number" data-line-number="2835"></td>
        <td id="LC2835" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2836" class="blob-num js-line-number" data-line-number="2836"></td>
        <td id="LC2836" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">typedef</span> <span class="pl-k">struct</span> SUBOBJECT_WRAPPER : public D3D12_STATE_SUBOBJECT</td>
      </tr>
      <tr>
        <td id="L2837" class="blob-num js-line-number" data-line-number="2837"></td>
        <td id="LC2837" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2838" class="blob-num js-line-number" data-line-number="2838"></td>
        <td id="LC2838" class="blob-code blob-code-inner js-file-line">        D3D12_STATE_SUBOBJECT* pSubobjectArrayLocation; <span class="pl-c"><span class="pl-c">//</span> new location when flattened into array </span></td>
      </tr>
      <tr>
        <td id="L2839" class="blob-num js-line-number" data-line-number="2839"></td>
        <td id="LC2839" class="blob-code blob-code-inner js-file-line">                                                        <span class="pl-c"><span class="pl-c">//</span> for repointing pointers in subobjects</span></td>
      </tr>
      <tr>
        <td id="L2840" class="blob-num js-line-number" data-line-number="2840"></td>
        <td id="LC2840" class="blob-code blob-code-inner js-file-line">    } SUBOBJECT_WRAPPER;</td>
      </tr>
      <tr>
        <td id="L2841" class="blob-num js-line-number" data-line-number="2841"></td>
        <td id="LC2841" class="blob-code blob-code-inner js-file-line">    D3D12_STATE_OBJECT_DESC m_Desc;</td>
      </tr>
      <tr>
        <td id="L2842" class="blob-num js-line-number" data-line-number="2842"></td>
        <td id="LC2842" class="blob-code blob-code-inner js-file-line">    std::list&lt;SUBOBJECT_WRAPPER&gt;   m_SubobjectList; <span class="pl-c"><span class="pl-c">//</span> Pointers to list nodes handed out so </span></td>
      </tr>
      <tr>
        <td id="L2843" class="blob-num js-line-number" data-line-number="2843"></td>
        <td id="LC2843" class="blob-code blob-code-inner js-file-line">                                                    <span class="pl-c"><span class="pl-c">//</span> these can be edited live</span></td>
      </tr>
      <tr>
        <td id="L2844" class="blob-num js-line-number" data-line-number="2844"></td>
        <td id="LC2844" class="blob-code blob-code-inner js-file-line">    std::vector&lt;D3D12_STATE_SUBOBJECT&gt; m_SubobjectArray; <span class="pl-c"><span class="pl-c">//</span> Built at the end, copying list contents</span></td>
      </tr>
      <tr>
        <td id="L2845" class="blob-num js-line-number" data-line-number="2845"></td>
        <td id="LC2845" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2846" class="blob-num js-line-number" data-line-number="2846"></td>
        <td id="LC2846" class="blob-code blob-code-inner js-file-line">    std::list&lt;D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION&gt; </td>
      </tr>
      <tr>
        <td id="L2847" class="blob-num js-line-number" data-line-number="2847"></td>
        <td id="LC2847" class="blob-code blob-code-inner js-file-line">            m_RepointedAssociations; <span class="pl-c"><span class="pl-c">//</span> subobject type that contains pointers to other subobjects, </span></td>
      </tr>
      <tr>
        <td id="L2848" class="blob-num js-line-number" data-line-number="2848"></td>
        <td id="LC2848" class="blob-code blob-code-inner js-file-line">                                     <span class="pl-c"><span class="pl-c">//</span> repointed to flattened array</span></td>
      </tr>
      <tr>
        <td id="L2849" class="blob-num js-line-number" data-line-number="2849"></td>
        <td id="LC2849" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2850" class="blob-num js-line-number" data-line-number="2850"></td>
        <td id="LC2850" class="blob-code blob-code-inner js-file-line">    class StringContainer</td>
      </tr>
      <tr>
        <td id="L2851" class="blob-num js-line-number" data-line-number="2851"></td>
        <td id="LC2851" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2852" class="blob-num js-line-number" data-line-number="2852"></td>
        <td id="LC2852" class="blob-code blob-code-inner js-file-line">    public:</td>
      </tr>
      <tr>
        <td id="L2853" class="blob-num js-line-number" data-line-number="2853"></td>
        <td id="LC2853" class="blob-code blob-code-inner js-file-line">        LPCWSTR <span class="pl-smi">LocalCopy</span>(LPCWSTR string, <span class="pl-k">bool</span> bSingleString = <span class="pl-c1">false</span>)</td>
      </tr>
      <tr>
        <td id="L2854" class="blob-num js-line-number" data-line-number="2854"></td>
        <td id="LC2854" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L2855" class="blob-num js-line-number" data-line-number="2855"></td>
        <td id="LC2855" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span> (string)</td>
      </tr>
      <tr>
        <td id="L2856" class="blob-num js-line-number" data-line-number="2856"></td>
        <td id="LC2856" class="blob-code blob-code-inner js-file-line">            {</td>
      </tr>
      <tr>
        <td id="L2857" class="blob-num js-line-number" data-line-number="2857"></td>
        <td id="LC2857" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">if</span> (bSingleString)</td>
      </tr>
      <tr>
        <td id="L2858" class="blob-num js-line-number" data-line-number="2858"></td>
        <td id="LC2858" class="blob-code blob-code-inner js-file-line">                {</td>
      </tr>
      <tr>
        <td id="L2859" class="blob-num js-line-number" data-line-number="2859"></td>
        <td id="LC2859" class="blob-code blob-code-inner js-file-line">                    m_Strings.<span class="pl-c1">clear</span>();</td>
      </tr>
      <tr>
        <td id="L2860" class="blob-num js-line-number" data-line-number="2860"></td>
        <td id="LC2860" class="blob-code blob-code-inner js-file-line">                    m_Strings.<span class="pl-c1">push_back</span>(string);</td>
      </tr>
      <tr>
        <td id="L2861" class="blob-num js-line-number" data-line-number="2861"></td>
        <td id="LC2861" class="blob-code blob-code-inner js-file-line">                }</td>
      </tr>
      <tr>
        <td id="L2862" class="blob-num js-line-number" data-line-number="2862"></td>
        <td id="LC2862" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2863" class="blob-num js-line-number" data-line-number="2863"></td>
        <td id="LC2863" class="blob-code blob-code-inner js-file-line">                {</td>
      </tr>
      <tr>
        <td id="L2864" class="blob-num js-line-number" data-line-number="2864"></td>
        <td id="LC2864" class="blob-code blob-code-inner js-file-line">                    m_Strings.<span class="pl-c1">push_back</span>(string);</td>
      </tr>
      <tr>
        <td id="L2865" class="blob-num js-line-number" data-line-number="2865"></td>
        <td id="LC2865" class="blob-code blob-code-inner js-file-line">                }</td>
      </tr>
      <tr>
        <td id="L2866" class="blob-num js-line-number" data-line-number="2866"></td>
        <td id="LC2866" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">return</span> m_Strings.<span class="pl-c1">back</span>().<span class="pl-c1">c_str</span>();</td>
      </tr>
      <tr>
        <td id="L2867" class="blob-num js-line-number" data-line-number="2867"></td>
        <td id="LC2867" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L2868" class="blob-num js-line-number" data-line-number="2868"></td>
        <td id="LC2868" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2869" class="blob-num js-line-number" data-line-number="2869"></td>
        <td id="LC2869" class="blob-code blob-code-inner js-file-line">            {</td>
      </tr>
      <tr>
        <td id="L2870" class="blob-num js-line-number" data-line-number="2870"></td>
        <td id="LC2870" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">return</span> nullptr;</td>
      </tr>
      <tr>
        <td id="L2871" class="blob-num js-line-number" data-line-number="2871"></td>
        <td id="LC2871" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L2872" class="blob-num js-line-number" data-line-number="2872"></td>
        <td id="LC2872" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2873" class="blob-num js-line-number" data-line-number="2873"></td>
        <td id="LC2873" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">void</span> <span class="pl-smi">clear</span>() { m_Strings.<span class="pl-c1">clear</span>(); }</td>
      </tr>
      <tr>
        <td id="L2874" class="blob-num js-line-number" data-line-number="2874"></td>
        <td id="LC2874" class="blob-code blob-code-inner js-file-line">    private:</td>
      </tr>
      <tr>
        <td id="L2875" class="blob-num js-line-number" data-line-number="2875"></td>
        <td id="LC2875" class="blob-code blob-code-inner js-file-line">        std::list&lt;std::wstring&gt; m_Strings;</td>
      </tr>
      <tr>
        <td id="L2876" class="blob-num js-line-number" data-line-number="2876"></td>
        <td id="LC2876" class="blob-code blob-code-inner js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L2877" class="blob-num js-line-number" data-line-number="2877"></td>
        <td id="LC2877" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2878" class="blob-num js-line-number" data-line-number="2878"></td>
        <td id="LC2878" class="blob-code blob-code-inner js-file-line">    class SUBOBJECT_HELPER_BASE</td>
      </tr>
      <tr>
        <td id="L2879" class="blob-num js-line-number" data-line-number="2879"></td>
        <td id="LC2879" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2880" class="blob-num js-line-number" data-line-number="2880"></td>
        <td id="LC2880" class="blob-code blob-code-inner js-file-line">    public:</td>
      </tr>
      <tr>
        <td id="L2881" class="blob-num js-line-number" data-line-number="2881"></td>
        <td id="LC2881" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">SUBOBJECT_HELPER_BASE</span>() { <span class="pl-c1">Init</span>(); }</td>
      </tr>
      <tr>
        <td id="L2882" class="blob-num js-line-number" data-line-number="2882"></td>
        <td id="LC2882" class="blob-code blob-code-inner js-file-line">        virtual ~<span class="pl-c1">SUBOBJECT_HELPER_BASE</span>() {}</td>
      </tr>
      <tr>
        <td id="L2883" class="blob-num js-line-number" data-line-number="2883"></td>
        <td id="LC2883" class="blob-code blob-code-inner js-file-line">        virtual D3D12_STATE_SUBOBJECT_TYPE <span class="pl-smi">Type</span>() <span class="pl-k">const</span> = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2884" class="blob-num js-line-number" data-line-number="2884"></td>
        <td id="LC2884" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">void</span> <span class="pl-smi">AddToStateObject</span>(CD3DX12_STATE_OBJECT_DESC&amp; ContainingStateObject)</td>
      </tr>
      <tr>
        <td id="L2885" class="blob-num js-line-number" data-line-number="2885"></td>
        <td id="LC2885" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L2886" class="blob-num js-line-number" data-line-number="2886"></td>
        <td id="LC2886" class="blob-code blob-code-inner js-file-line">            m_pSubobject = ContainingStateObject.<span class="pl-c1">TrackSubobject</span>(<span class="pl-c1">Type</span>(), <span class="pl-c1">Data</span>());</td>
      </tr>
      <tr>
        <td id="L2887" class="blob-num js-line-number" data-line-number="2887"></td>
        <td id="LC2887" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2888" class="blob-num js-line-number" data-line-number="2888"></td>
        <td id="LC2888" class="blob-code blob-code-inner js-file-line">    protected:</td>
      </tr>
      <tr>
        <td id="L2889" class="blob-num js-line-number" data-line-number="2889"></td>
        <td id="LC2889" class="blob-code blob-code-inner js-file-line">        virtual <span class="pl-k">void</span>* <span class="pl-c1">Data</span>() = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2890" class="blob-num js-line-number" data-line-number="2890"></td>
        <td id="LC2890" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">void</span> <span class="pl-smi">Init</span>() { m_pSubobject = nullptr; }</td>
      </tr>
      <tr>
        <td id="L2891" class="blob-num js-line-number" data-line-number="2891"></td>
        <td id="LC2891" class="blob-code blob-code-inner js-file-line">        D3D12_STATE_SUBOBJECT* m_pSubobject;</td>
      </tr>
      <tr>
        <td id="L2892" class="blob-num js-line-number" data-line-number="2892"></td>
        <td id="LC2892" class="blob-code blob-code-inner js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L2893" class="blob-num js-line-number" data-line-number="2893"></td>
        <td id="LC2893" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2894" class="blob-num js-line-number" data-line-number="2894"></td>
        <td id="LC2894" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span>(__cplusplus &gt;= 201103L)</td>
      </tr>
      <tr>
        <td id="L2895" class="blob-num js-line-number" data-line-number="2895"></td>
        <td id="LC2895" class="blob-code blob-code-inner js-file-line">    std::list&lt;std::unique_ptr&lt;<span class="pl-k">const</span> SUBOBJECT_HELPER_BASE&gt;&gt; m_OwnedSubobjectHelpers;</td>
      </tr>
      <tr>
        <td id="L2896" class="blob-num js-line-number" data-line-number="2896"></td>
        <td id="LC2896" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2897" class="blob-num js-line-number" data-line-number="2897"></td>
        <td id="LC2897" class="blob-code blob-code-inner js-file-line">    class OWNED_HELPER</td>
      </tr>
      <tr>
        <td id="L2898" class="blob-num js-line-number" data-line-number="2898"></td>
        <td id="LC2898" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2899" class="blob-num js-line-number" data-line-number="2899"></td>
        <td id="LC2899" class="blob-code blob-code-inner js-file-line">    public:</td>
      </tr>
      <tr>
        <td id="L2900" class="blob-num js-line-number" data-line-number="2900"></td>
        <td id="LC2900" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">OWNED_HELPER</span>(<span class="pl-k">const</span> SUBOBJECT_HELPER_BASE* pHelper) { m_pHelper = pHelper; }</td>
      </tr>
      <tr>
        <td id="L2901" class="blob-num js-line-number" data-line-number="2901"></td>
        <td id="LC2901" class="blob-code blob-code-inner js-file-line">        ~<span class="pl-c1">OWNED_HELPER</span>() { delete m_pHelper; }</td>
      </tr>
      <tr>
        <td id="L2902" class="blob-num js-line-number" data-line-number="2902"></td>
        <td id="LC2902" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">const</span> SUBOBJECT_HELPER_BASE* m_pHelper;</td>
      </tr>
      <tr>
        <td id="L2903" class="blob-num js-line-number" data-line-number="2903"></td>
        <td id="LC2903" class="blob-code blob-code-inner js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L2904" class="blob-num js-line-number" data-line-number="2904"></td>
        <td id="LC2904" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2905" class="blob-num js-line-number" data-line-number="2905"></td>
        <td id="LC2905" class="blob-code blob-code-inner js-file-line">    std::list&lt;OWNED_HELPER&gt; m_OwnedSubobjectHelpers;</td>
      </tr>
      <tr>
        <td id="L2906" class="blob-num js-line-number" data-line-number="2906"></td>
        <td id="LC2906" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2907" class="blob-num js-line-number" data-line-number="2907"></td>
        <td id="LC2907" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2908" class="blob-num js-line-number" data-line-number="2908"></td>
        <td id="LC2908" class="blob-code blob-code-inner js-file-line">    friend class CD3DX12_DXIL_LIBRARY_SUBOBJECT;</td>
      </tr>
      <tr>
        <td id="L2909" class="blob-num js-line-number" data-line-number="2909"></td>
        <td id="LC2909" class="blob-code blob-code-inner js-file-line">    friend class CD3DX12_EXISTING_COLLECTION_SUBOBJECT;</td>
      </tr>
      <tr>
        <td id="L2910" class="blob-num js-line-number" data-line-number="2910"></td>
        <td id="LC2910" class="blob-code blob-code-inner js-file-line">    friend class CD3DX12_SUBOBJECT_TO_EXPORTS_ASSOCIATION_SUBOBJECT;</td>
      </tr>
      <tr>
        <td id="L2911" class="blob-num js-line-number" data-line-number="2911"></td>
        <td id="LC2911" class="blob-code blob-code-inner js-file-line">    friend class CD3DX12_DXIL_SUBOBJECT_TO_EXPORTS_ASSOCIATION;</td>
      </tr>
      <tr>
        <td id="L2912" class="blob-num js-line-number" data-line-number="2912"></td>
        <td id="LC2912" class="blob-code blob-code-inner js-file-line">    friend class CD3DX12_HIT_GROUP_SUBOBJECT;</td>
      </tr>
      <tr>
        <td id="L2913" class="blob-num js-line-number" data-line-number="2913"></td>
        <td id="LC2913" class="blob-code blob-code-inner js-file-line">    friend class CD3DX12_RAYTRACING_SHADER_CONFIG_SUBOBJECT;</td>
      </tr>
      <tr>
        <td id="L2914" class="blob-num js-line-number" data-line-number="2914"></td>
        <td id="LC2914" class="blob-code blob-code-inner js-file-line">    friend class CD3DX12_RAYTRACING_PIPELINE_CONFIG_SUBOBJECT;</td>
      </tr>
      <tr>
        <td id="L2915" class="blob-num js-line-number" data-line-number="2915"></td>
        <td id="LC2915" class="blob-code blob-code-inner js-file-line">    friend class CD3DX12_GLOBAL_ROOT_SIGNATURE_SUBOBJECT;</td>
      </tr>
      <tr>
        <td id="L2916" class="blob-num js-line-number" data-line-number="2916"></td>
        <td id="LC2916" class="blob-code blob-code-inner js-file-line">    friend class CD3DX12_LOCAL_ROOT_SIGNATURE_SUBOBJECT;</td>
      </tr>
      <tr>
        <td id="L2917" class="blob-num js-line-number" data-line-number="2917"></td>
        <td id="LC2917" class="blob-code blob-code-inner js-file-line">    friend class CD3DX12_STATE_OBJECT_CONFIG_SUBOBJECT;</td>
      </tr>
      <tr>
        <td id="L2918" class="blob-num js-line-number" data-line-number="2918"></td>
        <td id="LC2918" class="blob-code blob-code-inner js-file-line">    friend class CD3DX12_NODE_MASK_SUBOBJECT;</td>
      </tr>
      <tr>
        <td id="L2919" class="blob-num js-line-number" data-line-number="2919"></td>
        <td id="LC2919" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2920" class="blob-num js-line-number" data-line-number="2920"></td>
        <td id="LC2920" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2921" class="blob-num js-line-number" data-line-number="2921"></td>
        <td id="LC2921" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L2922" class="blob-num js-line-number" data-line-number="2922"></td>
        <td id="LC2922" class="blob-code blob-code-inner js-file-line">class CD3DX12_DXIL_LIBRARY_SUBOBJECT </td>
      </tr>
      <tr>
        <td id="L2923" class="blob-num js-line-number" data-line-number="2923"></td>
        <td id="LC2923" class="blob-code blob-code-inner js-file-line">    : public CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE</td>
      </tr>
      <tr>
        <td id="L2924" class="blob-num js-line-number" data-line-number="2924"></td>
        <td id="LC2924" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2925" class="blob-num js-line-number" data-line-number="2925"></td>
        <td id="LC2925" class="blob-code blob-code-inner js-file-line">public:</td>
      </tr>
      <tr>
        <td id="L2926" class="blob-num js-line-number" data-line-number="2926"></td>
        <td id="LC2926" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_DXIL_LIBRARY_SUBOBJECT</span>()</td>
      </tr>
      <tr>
        <td id="L2927" class="blob-num js-line-number" data-line-number="2927"></td>
        <td id="LC2927" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2928" class="blob-num js-line-number" data-line-number="2928"></td>
        <td id="LC2928" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>();</td>
      </tr>
      <tr>
        <td id="L2929" class="blob-num js-line-number" data-line-number="2929"></td>
        <td id="LC2929" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2930" class="blob-num js-line-number" data-line-number="2930"></td>
        <td id="LC2930" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_DXIL_LIBRARY_SUBOBJECT</span>(CD3DX12_STATE_OBJECT_DESC&amp; ContainingStateObject)</td>
      </tr>
      <tr>
        <td id="L2931" class="blob-num js-line-number" data-line-number="2931"></td>
        <td id="LC2931" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2932" class="blob-num js-line-number" data-line-number="2932"></td>
        <td id="LC2932" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>();</td>
      </tr>
      <tr>
        <td id="L2933" class="blob-num js-line-number" data-line-number="2933"></td>
        <td id="LC2933" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">AddToStateObject</span>(ContainingStateObject);</td>
      </tr>
      <tr>
        <td id="L2934" class="blob-num js-line-number" data-line-number="2934"></td>
        <td id="LC2934" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2935" class="blob-num js-line-number" data-line-number="2935"></td>
        <td id="LC2935" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">SetDXILLibrary</span>(D3D12_SHADER_BYTECODE*pCode) </td>
      </tr>
      <tr>
        <td id="L2936" class="blob-num js-line-number" data-line-number="2936"></td>
        <td id="LC2936" class="blob-code blob-code-inner js-file-line">    { </td>
      </tr>
      <tr>
        <td id="L2937" class="blob-num js-line-number" data-line-number="2937"></td>
        <td id="LC2937" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">static</span> <span class="pl-k">const</span> D3D12_SHADER_BYTECODE Default = {}; </td>
      </tr>
      <tr>
        <td id="L2938" class="blob-num js-line-number" data-line-number="2938"></td>
        <td id="LC2938" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">DXILLibrary</span> = pCode ? *pCode : Default; </td>
      </tr>
      <tr>
        <td id="L2939" class="blob-num js-line-number" data-line-number="2939"></td>
        <td id="LC2939" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2940" class="blob-num js-line-number" data-line-number="2940"></td>
        <td id="LC2940" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">DefineExport</span>(</td>
      </tr>
      <tr>
        <td id="L2941" class="blob-num js-line-number" data-line-number="2941"></td>
        <td id="LC2941" class="blob-code blob-code-inner js-file-line">        LPCWSTR Name, </td>
      </tr>
      <tr>
        <td id="L2942" class="blob-num js-line-number" data-line-number="2942"></td>
        <td id="LC2942" class="blob-code blob-code-inner js-file-line">        LPCWSTR ExportToRename = nullptr, </td>
      </tr>
      <tr>
        <td id="L2943" class="blob-num js-line-number" data-line-number="2943"></td>
        <td id="LC2943" class="blob-code blob-code-inner js-file-line">        D3D12_EXPORT_FLAGS Flags = D3D12_EXPORT_FLAG_NONE)</td>
      </tr>
      <tr>
        <td id="L2944" class="blob-num js-line-number" data-line-number="2944"></td>
        <td id="LC2944" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2945" class="blob-num js-line-number" data-line-number="2945"></td>
        <td id="LC2945" class="blob-code blob-code-inner js-file-line">        D3D12_EXPORT_DESC Export;</td>
      </tr>
      <tr>
        <td id="L2946" class="blob-num js-line-number" data-line-number="2946"></td>
        <td id="LC2946" class="blob-code blob-code-inner js-file-line">        Export.<span class="pl-smi">Name</span> = m_Strings.<span class="pl-c1">LocalCopy</span>(Name);</td>
      </tr>
      <tr>
        <td id="L2947" class="blob-num js-line-number" data-line-number="2947"></td>
        <td id="LC2947" class="blob-code blob-code-inner js-file-line">        Export.<span class="pl-smi">ExportToRename</span> = m_Strings.<span class="pl-c1">LocalCopy</span>(ExportToRename);</td>
      </tr>
      <tr>
        <td id="L2948" class="blob-num js-line-number" data-line-number="2948"></td>
        <td id="LC2948" class="blob-code blob-code-inner js-file-line">        Export.<span class="pl-smi">Flags</span> = Flags;</td>
      </tr>
      <tr>
        <td id="L2949" class="blob-num js-line-number" data-line-number="2949"></td>
        <td id="LC2949" class="blob-code blob-code-inner js-file-line">        m_Exports.<span class="pl-c1">push_back</span>(Export);</td>
      </tr>
      <tr>
        <td id="L2950" class="blob-num js-line-number" data-line-number="2950"></td>
        <td id="LC2950" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">pExports</span> = &amp;m_Exports[<span class="pl-c1">0</span>];  <span class="pl-c"><span class="pl-c">//</span> using ugly way to get pointer in case .data() is not defined</span></td>
      </tr>
      <tr>
        <td id="L2951" class="blob-num js-line-number" data-line-number="2951"></td>
        <td id="LC2951" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">NumExports</span> = static_cast&lt;UINT&gt;(m_Exports.<span class="pl-c1">size</span>());</td>
      </tr>
      <tr>
        <td id="L2952" class="blob-num js-line-number" data-line-number="2952"></td>
        <td id="LC2952" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2953" class="blob-num js-line-number" data-line-number="2953"></td>
        <td id="LC2953" class="blob-code blob-code-inner js-file-line">    template&lt;<span class="pl-c1">size_t</span> N&gt;</td>
      </tr>
      <tr>
        <td id="L2954" class="blob-num js-line-number" data-line-number="2954"></td>
        <td id="LC2954" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">DefineExports</span>(<span class="pl-c1">LPCWSTR</span>(&amp;Exports)[N])</td>
      </tr>
      <tr>
        <td id="L2955" class="blob-num js-line-number" data-line-number="2955"></td>
        <td id="LC2955" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2956" class="blob-num js-line-number" data-line-number="2956"></td>
        <td id="LC2956" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (UINT i = <span class="pl-c1">0</span>; i &lt; N; i++)</td>
      </tr>
      <tr>
        <td id="L2957" class="blob-num js-line-number" data-line-number="2957"></td>
        <td id="LC2957" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L2958" class="blob-num js-line-number" data-line-number="2958"></td>
        <td id="LC2958" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">DefineExport</span>(Exports[i]);</td>
      </tr>
      <tr>
        <td id="L2959" class="blob-num js-line-number" data-line-number="2959"></td>
        <td id="LC2959" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2960" class="blob-num js-line-number" data-line-number="2960"></td>
        <td id="LC2960" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2961" class="blob-num js-line-number" data-line-number="2961"></td>
        <td id="LC2961" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">DefineExports</span>(LPCWSTR* Exports, UINT N)</td>
      </tr>
      <tr>
        <td id="L2962" class="blob-num js-line-number" data-line-number="2962"></td>
        <td id="LC2962" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2963" class="blob-num js-line-number" data-line-number="2963"></td>
        <td id="LC2963" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (UINT i = <span class="pl-c1">0</span>; i &lt; N; i++)</td>
      </tr>
      <tr>
        <td id="L2964" class="blob-num js-line-number" data-line-number="2964"></td>
        <td id="LC2964" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L2965" class="blob-num js-line-number" data-line-number="2965"></td>
        <td id="LC2965" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">DefineExport</span>(Exports[i]);</td>
      </tr>
      <tr>
        <td id="L2966" class="blob-num js-line-number" data-line-number="2966"></td>
        <td id="LC2966" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2967" class="blob-num js-line-number" data-line-number="2967"></td>
        <td id="LC2967" class="blob-code blob-code-inner js-file-line">    }    </td>
      </tr>
      <tr>
        <td id="L2968" class="blob-num js-line-number" data-line-number="2968"></td>
        <td id="LC2968" class="blob-code blob-code-inner js-file-line">    D3D12_STATE_SUBOBJECT_TYPE <span class="pl-smi">Type</span>() <span class="pl-k">const</span> </td>
      </tr>
      <tr>
        <td id="L2969" class="blob-num js-line-number" data-line-number="2969"></td>
        <td id="LC2969" class="blob-code blob-code-inner js-file-line">    { </td>
      </tr>
      <tr>
        <td id="L2970" class="blob-num js-line-number" data-line-number="2970"></td>
        <td id="LC2970" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> D3D12_STATE_SUBOBJECT_TYPE_DXIL_LIBRARY; </td>
      </tr>
      <tr>
        <td id="L2971" class="blob-num js-line-number" data-line-number="2971"></td>
        <td id="LC2971" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2972" class="blob-num js-line-number" data-line-number="2972"></td>
        <td id="LC2972" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-k">const</span> D3D12_STATE_SUBOBJECT&amp;() <span class="pl-k">const</span> { <span class="pl-k">return</span> *m_pSubobject; }</td>
      </tr>
      <tr>
        <td id="L2973" class="blob-num js-line-number" data-line-number="2973"></td>
        <td id="LC2973" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-k">const</span> D3D12_DXIL_LIBRARY_DESC&amp;() <span class="pl-k">const</span> { <span class="pl-k">return</span> m_Desc; }</td>
      </tr>
      <tr>
        <td id="L2974" class="blob-num js-line-number" data-line-number="2974"></td>
        <td id="LC2974" class="blob-code blob-code-inner js-file-line">private:</td>
      </tr>
      <tr>
        <td id="L2975" class="blob-num js-line-number" data-line-number="2975"></td>
        <td id="LC2975" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">Init</span>()</td>
      </tr>
      <tr>
        <td id="L2976" class="blob-num js-line-number" data-line-number="2976"></td>
        <td id="LC2976" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2977" class="blob-num js-line-number" data-line-number="2977"></td>
        <td id="LC2977" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">SUBOBJECT_HELPER_BASE::Init</span>();</td>
      </tr>
      <tr>
        <td id="L2978" class="blob-num js-line-number" data-line-number="2978"></td>
        <td id="LC2978" class="blob-code blob-code-inner js-file-line">        m_Desc = {};</td>
      </tr>
      <tr>
        <td id="L2979" class="blob-num js-line-number" data-line-number="2979"></td>
        <td id="LC2979" class="blob-code blob-code-inner js-file-line">        m_Strings.<span class="pl-c1">clear</span>();</td>
      </tr>
      <tr>
        <td id="L2980" class="blob-num js-line-number" data-line-number="2980"></td>
        <td id="LC2980" class="blob-code blob-code-inner js-file-line">        m_Exports.<span class="pl-c1">clear</span>();</td>
      </tr>
      <tr>
        <td id="L2981" class="blob-num js-line-number" data-line-number="2981"></td>
        <td id="LC2981" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2982" class="blob-num js-line-number" data-line-number="2982"></td>
        <td id="LC2982" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>* <span class="pl-c1">Data</span>() { <span class="pl-k">return</span> &amp;m_Desc; }</td>
      </tr>
      <tr>
        <td id="L2983" class="blob-num js-line-number" data-line-number="2983"></td>
        <td id="LC2983" class="blob-code blob-code-inner js-file-line">    D3D12_DXIL_LIBRARY_DESC m_Desc;</td>
      </tr>
      <tr>
        <td id="L2984" class="blob-num js-line-number" data-line-number="2984"></td>
        <td id="LC2984" class="blob-code blob-code-inner js-file-line">    CD3DX12_STATE_OBJECT_DESC::StringContainer m_Strings;</td>
      </tr>
      <tr>
        <td id="L2985" class="blob-num js-line-number" data-line-number="2985"></td>
        <td id="LC2985" class="blob-code blob-code-inner js-file-line">    std::vector&lt;D3D12_EXPORT_DESC&gt; m_Exports;</td>
      </tr>
      <tr>
        <td id="L2986" class="blob-num js-line-number" data-line-number="2986"></td>
        <td id="LC2986" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2987" class="blob-num js-line-number" data-line-number="2987"></td>
        <td id="LC2987" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2988" class="blob-num js-line-number" data-line-number="2988"></td>
        <td id="LC2988" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L2989" class="blob-num js-line-number" data-line-number="2989"></td>
        <td id="LC2989" class="blob-code blob-code-inner js-file-line">class CD3DX12_EXISTING_COLLECTION_SUBOBJECT </td>
      </tr>
      <tr>
        <td id="L2990" class="blob-num js-line-number" data-line-number="2990"></td>
        <td id="LC2990" class="blob-code blob-code-inner js-file-line">    : public CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE</td>
      </tr>
      <tr>
        <td id="L2991" class="blob-num js-line-number" data-line-number="2991"></td>
        <td id="LC2991" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2992" class="blob-num js-line-number" data-line-number="2992"></td>
        <td id="LC2992" class="blob-code blob-code-inner js-file-line">public:</td>
      </tr>
      <tr>
        <td id="L2993" class="blob-num js-line-number" data-line-number="2993"></td>
        <td id="LC2993" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_EXISTING_COLLECTION_SUBOBJECT</span>()</td>
      </tr>
      <tr>
        <td id="L2994" class="blob-num js-line-number" data-line-number="2994"></td>
        <td id="LC2994" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2995" class="blob-num js-line-number" data-line-number="2995"></td>
        <td id="LC2995" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>();</td>
      </tr>
      <tr>
        <td id="L2996" class="blob-num js-line-number" data-line-number="2996"></td>
        <td id="LC2996" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2997" class="blob-num js-line-number" data-line-number="2997"></td>
        <td id="LC2997" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_EXISTING_COLLECTION_SUBOBJECT</span>(CD3DX12_STATE_OBJECT_DESC&amp; ContainingStateObject)</td>
      </tr>
      <tr>
        <td id="L2998" class="blob-num js-line-number" data-line-number="2998"></td>
        <td id="LC2998" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2999" class="blob-num js-line-number" data-line-number="2999"></td>
        <td id="LC2999" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>();</td>
      </tr>
      <tr>
        <td id="L3000" class="blob-num js-line-number" data-line-number="3000"></td>
        <td id="LC3000" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">AddToStateObject</span>(ContainingStateObject);</td>
      </tr>
      <tr>
        <td id="L3001" class="blob-num js-line-number" data-line-number="3001"></td>
        <td id="LC3001" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3002" class="blob-num js-line-number" data-line-number="3002"></td>
        <td id="LC3002" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">SetExistingCollection</span>(ID3D12StateObject*pExistingCollection) </td>
      </tr>
      <tr>
        <td id="L3003" class="blob-num js-line-number" data-line-number="3003"></td>
        <td id="LC3003" class="blob-code blob-code-inner js-file-line">    { </td>
      </tr>
      <tr>
        <td id="L3004" class="blob-num js-line-number" data-line-number="3004"></td>
        <td id="LC3004" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">pExistingCollection</span> = pExistingCollection; </td>
      </tr>
      <tr>
        <td id="L3005" class="blob-num js-line-number" data-line-number="3005"></td>
        <td id="LC3005" class="blob-code blob-code-inner js-file-line">        m_CollectionRef = pExistingCollection; </td>
      </tr>
      <tr>
        <td id="L3006" class="blob-num js-line-number" data-line-number="3006"></td>
        <td id="LC3006" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3007" class="blob-num js-line-number" data-line-number="3007"></td>
        <td id="LC3007" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">DefineExport</span>(</td>
      </tr>
      <tr>
        <td id="L3008" class="blob-num js-line-number" data-line-number="3008"></td>
        <td id="LC3008" class="blob-code blob-code-inner js-file-line">        LPCWSTR Name, </td>
      </tr>
      <tr>
        <td id="L3009" class="blob-num js-line-number" data-line-number="3009"></td>
        <td id="LC3009" class="blob-code blob-code-inner js-file-line">        LPCWSTR ExportToRename = nullptr, </td>
      </tr>
      <tr>
        <td id="L3010" class="blob-num js-line-number" data-line-number="3010"></td>
        <td id="LC3010" class="blob-code blob-code-inner js-file-line">        D3D12_EXPORT_FLAGS Flags = D3D12_EXPORT_FLAG_NONE)</td>
      </tr>
      <tr>
        <td id="L3011" class="blob-num js-line-number" data-line-number="3011"></td>
        <td id="LC3011" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3012" class="blob-num js-line-number" data-line-number="3012"></td>
        <td id="LC3012" class="blob-code blob-code-inner js-file-line">        D3D12_EXPORT_DESC Export;</td>
      </tr>
      <tr>
        <td id="L3013" class="blob-num js-line-number" data-line-number="3013"></td>
        <td id="LC3013" class="blob-code blob-code-inner js-file-line">        Export.<span class="pl-smi">Name</span> = m_Strings.<span class="pl-c1">LocalCopy</span>(Name);</td>
      </tr>
      <tr>
        <td id="L3014" class="blob-num js-line-number" data-line-number="3014"></td>
        <td id="LC3014" class="blob-code blob-code-inner js-file-line">        Export.<span class="pl-smi">ExportToRename</span> = m_Strings.<span class="pl-c1">LocalCopy</span>(ExportToRename);</td>
      </tr>
      <tr>
        <td id="L3015" class="blob-num js-line-number" data-line-number="3015"></td>
        <td id="LC3015" class="blob-code blob-code-inner js-file-line">        Export.<span class="pl-smi">Flags</span> = Flags;</td>
      </tr>
      <tr>
        <td id="L3016" class="blob-num js-line-number" data-line-number="3016"></td>
        <td id="LC3016" class="blob-code blob-code-inner js-file-line">        m_Exports.<span class="pl-c1">push_back</span>(Export);</td>
      </tr>
      <tr>
        <td id="L3017" class="blob-num js-line-number" data-line-number="3017"></td>
        <td id="LC3017" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">pExports</span> = &amp;m_Exports[<span class="pl-c1">0</span>]; <span class="pl-c"><span class="pl-c">//</span> using ugly way to get pointer in case .data() is not defined</span></td>
      </tr>
      <tr>
        <td id="L3018" class="blob-num js-line-number" data-line-number="3018"></td>
        <td id="LC3018" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">NumExports</span> = static_cast&lt;UINT&gt;(m_Exports.<span class="pl-c1">size</span>());</td>
      </tr>
      <tr>
        <td id="L3019" class="blob-num js-line-number" data-line-number="3019"></td>
        <td id="LC3019" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3020" class="blob-num js-line-number" data-line-number="3020"></td>
        <td id="LC3020" class="blob-code blob-code-inner js-file-line">    template&lt;<span class="pl-c1">size_t</span> N&gt;</td>
      </tr>
      <tr>
        <td id="L3021" class="blob-num js-line-number" data-line-number="3021"></td>
        <td id="LC3021" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">DefineExports</span>(<span class="pl-c1">LPCWSTR</span>(&amp;Exports)[N])</td>
      </tr>
      <tr>
        <td id="L3022" class="blob-num js-line-number" data-line-number="3022"></td>
        <td id="LC3022" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3023" class="blob-num js-line-number" data-line-number="3023"></td>
        <td id="LC3023" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (UINT i = <span class="pl-c1">0</span>; i &lt; N; i++)</td>
      </tr>
      <tr>
        <td id="L3024" class="blob-num js-line-number" data-line-number="3024"></td>
        <td id="LC3024" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L3025" class="blob-num js-line-number" data-line-number="3025"></td>
        <td id="LC3025" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">DefineExport</span>(Exports[i]);</td>
      </tr>
      <tr>
        <td id="L3026" class="blob-num js-line-number" data-line-number="3026"></td>
        <td id="LC3026" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L3027" class="blob-num js-line-number" data-line-number="3027"></td>
        <td id="LC3027" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3028" class="blob-num js-line-number" data-line-number="3028"></td>
        <td id="LC3028" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">DefineExports</span>(LPCWSTR* Exports, UINT N)</td>
      </tr>
      <tr>
        <td id="L3029" class="blob-num js-line-number" data-line-number="3029"></td>
        <td id="LC3029" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3030" class="blob-num js-line-number" data-line-number="3030"></td>
        <td id="LC3030" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (UINT i = <span class="pl-c1">0</span>; i &lt; N; i++)</td>
      </tr>
      <tr>
        <td id="L3031" class="blob-num js-line-number" data-line-number="3031"></td>
        <td id="LC3031" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L3032" class="blob-num js-line-number" data-line-number="3032"></td>
        <td id="LC3032" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">DefineExport</span>(Exports[i]);</td>
      </tr>
      <tr>
        <td id="L3033" class="blob-num js-line-number" data-line-number="3033"></td>
        <td id="LC3033" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L3034" class="blob-num js-line-number" data-line-number="3034"></td>
        <td id="LC3034" class="blob-code blob-code-inner js-file-line">    }    </td>
      </tr>
      <tr>
        <td id="L3035" class="blob-num js-line-number" data-line-number="3035"></td>
        <td id="LC3035" class="blob-code blob-code-inner js-file-line">    D3D12_STATE_SUBOBJECT_TYPE <span class="pl-smi">Type</span>() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L3036" class="blob-num js-line-number" data-line-number="3036"></td>
        <td id="LC3036" class="blob-code blob-code-inner js-file-line">    { </td>
      </tr>
      <tr>
        <td id="L3037" class="blob-num js-line-number" data-line-number="3037"></td>
        <td id="LC3037" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> D3D12_STATE_SUBOBJECT_TYPE_EXISTING_COLLECTION; </td>
      </tr>
      <tr>
        <td id="L3038" class="blob-num js-line-number" data-line-number="3038"></td>
        <td id="LC3038" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3039" class="blob-num js-line-number" data-line-number="3039"></td>
        <td id="LC3039" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-k">const</span> D3D12_STATE_SUBOBJECT&amp;() <span class="pl-k">const</span> { <span class="pl-k">return</span> *m_pSubobject; }</td>
      </tr>
      <tr>
        <td id="L3040" class="blob-num js-line-number" data-line-number="3040"></td>
        <td id="LC3040" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-k">const</span> D3D12_EXISTING_COLLECTION_DESC&amp;() <span class="pl-k">const</span> { <span class="pl-k">return</span> m_Desc; }</td>
      </tr>
      <tr>
        <td id="L3041" class="blob-num js-line-number" data-line-number="3041"></td>
        <td id="LC3041" class="blob-code blob-code-inner js-file-line">private:</td>
      </tr>
      <tr>
        <td id="L3042" class="blob-num js-line-number" data-line-number="3042"></td>
        <td id="LC3042" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">Init</span>()</td>
      </tr>
      <tr>
        <td id="L3043" class="blob-num js-line-number" data-line-number="3043"></td>
        <td id="LC3043" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3044" class="blob-num js-line-number" data-line-number="3044"></td>
        <td id="LC3044" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">SUBOBJECT_HELPER_BASE::Init</span>();</td>
      </tr>
      <tr>
        <td id="L3045" class="blob-num js-line-number" data-line-number="3045"></td>
        <td id="LC3045" class="blob-code blob-code-inner js-file-line">        m_Desc = {};</td>
      </tr>
      <tr>
        <td id="L3046" class="blob-num js-line-number" data-line-number="3046"></td>
        <td id="LC3046" class="blob-code blob-code-inner js-file-line">        m_CollectionRef = nullptr;</td>
      </tr>
      <tr>
        <td id="L3047" class="blob-num js-line-number" data-line-number="3047"></td>
        <td id="LC3047" class="blob-code blob-code-inner js-file-line">        m_Strings.<span class="pl-c1">clear</span>();</td>
      </tr>
      <tr>
        <td id="L3048" class="blob-num js-line-number" data-line-number="3048"></td>
        <td id="LC3048" class="blob-code blob-code-inner js-file-line">        m_Exports.<span class="pl-c1">clear</span>();</td>
      </tr>
      <tr>
        <td id="L3049" class="blob-num js-line-number" data-line-number="3049"></td>
        <td id="LC3049" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3050" class="blob-num js-line-number" data-line-number="3050"></td>
        <td id="LC3050" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>* <span class="pl-c1">Data</span>() { <span class="pl-k">return</span> &amp;m_Desc; }</td>
      </tr>
      <tr>
        <td id="L3051" class="blob-num js-line-number" data-line-number="3051"></td>
        <td id="LC3051" class="blob-code blob-code-inner js-file-line">    D3D12_EXISTING_COLLECTION_DESC m_Desc;</td>
      </tr>
      <tr>
        <td id="L3052" class="blob-num js-line-number" data-line-number="3052"></td>
        <td id="LC3052" class="blob-code blob-code-inner js-file-line">    Microsoft::WRL::ComPtr&lt;ID3D12StateObject&gt; m_CollectionRef;</td>
      </tr>
      <tr>
        <td id="L3053" class="blob-num js-line-number" data-line-number="3053"></td>
        <td id="LC3053" class="blob-code blob-code-inner js-file-line">    CD3DX12_STATE_OBJECT_DESC::StringContainer m_Strings;</td>
      </tr>
      <tr>
        <td id="L3054" class="blob-num js-line-number" data-line-number="3054"></td>
        <td id="LC3054" class="blob-code blob-code-inner js-file-line">    std::vector&lt;D3D12_EXPORT_DESC&gt; m_Exports;</td>
      </tr>
      <tr>
        <td id="L3055" class="blob-num js-line-number" data-line-number="3055"></td>
        <td id="LC3055" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L3056" class="blob-num js-line-number" data-line-number="3056"></td>
        <td id="LC3056" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3057" class="blob-num js-line-number" data-line-number="3057"></td>
        <td id="LC3057" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L3058" class="blob-num js-line-number" data-line-number="3058"></td>
        <td id="LC3058" class="blob-code blob-code-inner js-file-line">class CD3DX12_SUBOBJECT_TO_EXPORTS_ASSOCIATION_SUBOBJECT </td>
      </tr>
      <tr>
        <td id="L3059" class="blob-num js-line-number" data-line-number="3059"></td>
        <td id="LC3059" class="blob-code blob-code-inner js-file-line">    : public CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE</td>
      </tr>
      <tr>
        <td id="L3060" class="blob-num js-line-number" data-line-number="3060"></td>
        <td id="LC3060" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3061" class="blob-num js-line-number" data-line-number="3061"></td>
        <td id="LC3061" class="blob-code blob-code-inner js-file-line">public:</td>
      </tr>
      <tr>
        <td id="L3062" class="blob-num js-line-number" data-line-number="3062"></td>
        <td id="LC3062" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_SUBOBJECT_TO_EXPORTS_ASSOCIATION_SUBOBJECT</span>()</td>
      </tr>
      <tr>
        <td id="L3063" class="blob-num js-line-number" data-line-number="3063"></td>
        <td id="LC3063" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3064" class="blob-num js-line-number" data-line-number="3064"></td>
        <td id="LC3064" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>();</td>
      </tr>
      <tr>
        <td id="L3065" class="blob-num js-line-number" data-line-number="3065"></td>
        <td id="LC3065" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3066" class="blob-num js-line-number" data-line-number="3066"></td>
        <td id="LC3066" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_SUBOBJECT_TO_EXPORTS_ASSOCIATION_SUBOBJECT</span>(CD3DX12_STATE_OBJECT_DESC&amp; ContainingStateObject)</td>
      </tr>
      <tr>
        <td id="L3067" class="blob-num js-line-number" data-line-number="3067"></td>
        <td id="LC3067" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3068" class="blob-num js-line-number" data-line-number="3068"></td>
        <td id="LC3068" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>();</td>
      </tr>
      <tr>
        <td id="L3069" class="blob-num js-line-number" data-line-number="3069"></td>
        <td id="LC3069" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">AddToStateObject</span>(ContainingStateObject);</td>
      </tr>
      <tr>
        <td id="L3070" class="blob-num js-line-number" data-line-number="3070"></td>
        <td id="LC3070" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3071" class="blob-num js-line-number" data-line-number="3071"></td>
        <td id="LC3071" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">SetSubobjectToAssociate</span>(<span class="pl-k">const</span> D3D12_STATE_SUBOBJECT&amp; SubobjectToAssociate) </td>
      </tr>
      <tr>
        <td id="L3072" class="blob-num js-line-number" data-line-number="3072"></td>
        <td id="LC3072" class="blob-code blob-code-inner js-file-line">    { </td>
      </tr>
      <tr>
        <td id="L3073" class="blob-num js-line-number" data-line-number="3073"></td>
        <td id="LC3073" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">pSubobjectToAssociate</span> = &amp;SubobjectToAssociate; </td>
      </tr>
      <tr>
        <td id="L3074" class="blob-num js-line-number" data-line-number="3074"></td>
        <td id="LC3074" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3075" class="blob-num js-line-number" data-line-number="3075"></td>
        <td id="LC3075" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">AddExport</span>(LPCWSTR Export)</td>
      </tr>
      <tr>
        <td id="L3076" class="blob-num js-line-number" data-line-number="3076"></td>
        <td id="LC3076" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3077" class="blob-num js-line-number" data-line-number="3077"></td>
        <td id="LC3077" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">NumExports</span>++;</td>
      </tr>
      <tr>
        <td id="L3078" class="blob-num js-line-number" data-line-number="3078"></td>
        <td id="LC3078" class="blob-code blob-code-inner js-file-line">        m_Exports.<span class="pl-c1">push_back</span>(m_Strings.<span class="pl-c1">LocalCopy</span>(Export));</td>
      </tr>
      <tr>
        <td id="L3079" class="blob-num js-line-number" data-line-number="3079"></td>
        <td id="LC3079" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">pExports</span> = &amp;m_Exports[<span class="pl-c1">0</span>];  <span class="pl-c"><span class="pl-c">//</span> using ugly way to get pointer in case .data() is not defined</span></td>
      </tr>
      <tr>
        <td id="L3080" class="blob-num js-line-number" data-line-number="3080"></td>
        <td id="LC3080" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3081" class="blob-num js-line-number" data-line-number="3081"></td>
        <td id="LC3081" class="blob-code blob-code-inner js-file-line">    template&lt;<span class="pl-c1">size_t</span> N&gt;</td>
      </tr>
      <tr>
        <td id="L3082" class="blob-num js-line-number" data-line-number="3082"></td>
        <td id="LC3082" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">AddExports</span>(<span class="pl-c1">LPCWSTR</span> (&amp;Exports)[N])</td>
      </tr>
      <tr>
        <td id="L3083" class="blob-num js-line-number" data-line-number="3083"></td>
        <td id="LC3083" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3084" class="blob-num js-line-number" data-line-number="3084"></td>
        <td id="LC3084" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (UINT i = <span class="pl-c1">0</span>; i &lt; N; i++)</td>
      </tr>
      <tr>
        <td id="L3085" class="blob-num js-line-number" data-line-number="3085"></td>
        <td id="LC3085" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L3086" class="blob-num js-line-number" data-line-number="3086"></td>
        <td id="LC3086" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">AddExport</span>(Exports[i]);</td>
      </tr>
      <tr>
        <td id="L3087" class="blob-num js-line-number" data-line-number="3087"></td>
        <td id="LC3087" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L3088" class="blob-num js-line-number" data-line-number="3088"></td>
        <td id="LC3088" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3089" class="blob-num js-line-number" data-line-number="3089"></td>
        <td id="LC3089" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">AddExports</span>(LPCWSTR* Exports, UINT N)</td>
      </tr>
      <tr>
        <td id="L3090" class="blob-num js-line-number" data-line-number="3090"></td>
        <td id="LC3090" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3091" class="blob-num js-line-number" data-line-number="3091"></td>
        <td id="LC3091" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (UINT i = <span class="pl-c1">0</span>; i &lt; N; i++)</td>
      </tr>
      <tr>
        <td id="L3092" class="blob-num js-line-number" data-line-number="3092"></td>
        <td id="LC3092" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L3093" class="blob-num js-line-number" data-line-number="3093"></td>
        <td id="LC3093" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">AddExport</span>(Exports[i]);</td>
      </tr>
      <tr>
        <td id="L3094" class="blob-num js-line-number" data-line-number="3094"></td>
        <td id="LC3094" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L3095" class="blob-num js-line-number" data-line-number="3095"></td>
        <td id="LC3095" class="blob-code blob-code-inner js-file-line">    }    </td>
      </tr>
      <tr>
        <td id="L3096" class="blob-num js-line-number" data-line-number="3096"></td>
        <td id="LC3096" class="blob-code blob-code-inner js-file-line">    D3D12_STATE_SUBOBJECT_TYPE <span class="pl-smi">Type</span>() <span class="pl-k">const</span> </td>
      </tr>
      <tr>
        <td id="L3097" class="blob-num js-line-number" data-line-number="3097"></td>
        <td id="LC3097" class="blob-code blob-code-inner js-file-line">    { </td>
      </tr>
      <tr>
        <td id="L3098" class="blob-num js-line-number" data-line-number="3098"></td>
        <td id="LC3098" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> D3D12_STATE_SUBOBJECT_TYPE_SUBOBJECT_TO_EXPORTS_ASSOCIATION; </td>
      </tr>
      <tr>
        <td id="L3099" class="blob-num js-line-number" data-line-number="3099"></td>
        <td id="LC3099" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3100" class="blob-num js-line-number" data-line-number="3100"></td>
        <td id="LC3100" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-k">const</span> D3D12_STATE_SUBOBJECT&amp;() <span class="pl-k">const</span> { <span class="pl-k">return</span> *m_pSubobject; }</td>
      </tr>
      <tr>
        <td id="L3101" class="blob-num js-line-number" data-line-number="3101"></td>
        <td id="LC3101" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-k">const</span> D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION&amp;() <span class="pl-k">const</span> { <span class="pl-k">return</span> m_Desc; }</td>
      </tr>
      <tr>
        <td id="L3102" class="blob-num js-line-number" data-line-number="3102"></td>
        <td id="LC3102" class="blob-code blob-code-inner js-file-line">private:</td>
      </tr>
      <tr>
        <td id="L3103" class="blob-num js-line-number" data-line-number="3103"></td>
        <td id="LC3103" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">Init</span>()</td>
      </tr>
      <tr>
        <td id="L3104" class="blob-num js-line-number" data-line-number="3104"></td>
        <td id="LC3104" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3105" class="blob-num js-line-number" data-line-number="3105"></td>
        <td id="LC3105" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">SUBOBJECT_HELPER_BASE::Init</span>();</td>
      </tr>
      <tr>
        <td id="L3106" class="blob-num js-line-number" data-line-number="3106"></td>
        <td id="LC3106" class="blob-code blob-code-inner js-file-line">        m_Desc = {};</td>
      </tr>
      <tr>
        <td id="L3107" class="blob-num js-line-number" data-line-number="3107"></td>
        <td id="LC3107" class="blob-code blob-code-inner js-file-line">        m_Strings.<span class="pl-c1">clear</span>();</td>
      </tr>
      <tr>
        <td id="L3108" class="blob-num js-line-number" data-line-number="3108"></td>
        <td id="LC3108" class="blob-code blob-code-inner js-file-line">        m_Exports.<span class="pl-c1">clear</span>();</td>
      </tr>
      <tr>
        <td id="L3109" class="blob-num js-line-number" data-line-number="3109"></td>
        <td id="LC3109" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3110" class="blob-num js-line-number" data-line-number="3110"></td>
        <td id="LC3110" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>* <span class="pl-c1">Data</span>() { <span class="pl-k">return</span> &amp;m_Desc; }</td>
      </tr>
      <tr>
        <td id="L3111" class="blob-num js-line-number" data-line-number="3111"></td>
        <td id="LC3111" class="blob-code blob-code-inner js-file-line">    D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION m_Desc;</td>
      </tr>
      <tr>
        <td id="L3112" class="blob-num js-line-number" data-line-number="3112"></td>
        <td id="LC3112" class="blob-code blob-code-inner js-file-line">    CD3DX12_STATE_OBJECT_DESC::StringContainer m_Strings;</td>
      </tr>
      <tr>
        <td id="L3113" class="blob-num js-line-number" data-line-number="3113"></td>
        <td id="LC3113" class="blob-code blob-code-inner js-file-line">    std::vector&lt;LPCWSTR&gt; m_Exports;</td>
      </tr>
      <tr>
        <td id="L3114" class="blob-num js-line-number" data-line-number="3114"></td>
        <td id="LC3114" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L3115" class="blob-num js-line-number" data-line-number="3115"></td>
        <td id="LC3115" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3116" class="blob-num js-line-number" data-line-number="3116"></td>
        <td id="LC3116" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L3117" class="blob-num js-line-number" data-line-number="3117"></td>
        <td id="LC3117" class="blob-code blob-code-inner js-file-line">class CD3DX12_DXIL_SUBOBJECT_TO_EXPORTS_ASSOCIATION </td>
      </tr>
      <tr>
        <td id="L3118" class="blob-num js-line-number" data-line-number="3118"></td>
        <td id="LC3118" class="blob-code blob-code-inner js-file-line">    : public CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE</td>
      </tr>
      <tr>
        <td id="L3119" class="blob-num js-line-number" data-line-number="3119"></td>
        <td id="LC3119" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3120" class="blob-num js-line-number" data-line-number="3120"></td>
        <td id="LC3120" class="blob-code blob-code-inner js-file-line">public:</td>
      </tr>
      <tr>
        <td id="L3121" class="blob-num js-line-number" data-line-number="3121"></td>
        <td id="LC3121" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_DXIL_SUBOBJECT_TO_EXPORTS_ASSOCIATION</span>()</td>
      </tr>
      <tr>
        <td id="L3122" class="blob-num js-line-number" data-line-number="3122"></td>
        <td id="LC3122" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3123" class="blob-num js-line-number" data-line-number="3123"></td>
        <td id="LC3123" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>();</td>
      </tr>
      <tr>
        <td id="L3124" class="blob-num js-line-number" data-line-number="3124"></td>
        <td id="LC3124" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3125" class="blob-num js-line-number" data-line-number="3125"></td>
        <td id="LC3125" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_DXIL_SUBOBJECT_TO_EXPORTS_ASSOCIATION</span>(CD3DX12_STATE_OBJECT_DESC&amp; ContainingStateObject)</td>
      </tr>
      <tr>
        <td id="L3126" class="blob-num js-line-number" data-line-number="3126"></td>
        <td id="LC3126" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3127" class="blob-num js-line-number" data-line-number="3127"></td>
        <td id="LC3127" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>();</td>
      </tr>
      <tr>
        <td id="L3128" class="blob-num js-line-number" data-line-number="3128"></td>
        <td id="LC3128" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">AddToStateObject</span>(ContainingStateObject);</td>
      </tr>
      <tr>
        <td id="L3129" class="blob-num js-line-number" data-line-number="3129"></td>
        <td id="LC3129" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3130" class="blob-num js-line-number" data-line-number="3130"></td>
        <td id="LC3130" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">SetSubobjectNameToAssociate</span>(LPCWSTR SubobjectToAssociate) </td>
      </tr>
      <tr>
        <td id="L3131" class="blob-num js-line-number" data-line-number="3131"></td>
        <td id="LC3131" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3132" class="blob-num js-line-number" data-line-number="3132"></td>
        <td id="LC3132" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">SubobjectToAssociate</span> = m_SubobjectName.<span class="pl-c1">LocalCopy</span>(SubobjectToAssociate, <span class="pl-c1">true</span>); </td>
      </tr>
      <tr>
        <td id="L3133" class="blob-num js-line-number" data-line-number="3133"></td>
        <td id="LC3133" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3134" class="blob-num js-line-number" data-line-number="3134"></td>
        <td id="LC3134" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">AddExport</span>(LPCWSTR Export)</td>
      </tr>
      <tr>
        <td id="L3135" class="blob-num js-line-number" data-line-number="3135"></td>
        <td id="LC3135" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3136" class="blob-num js-line-number" data-line-number="3136"></td>
        <td id="LC3136" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">NumExports</span>++;</td>
      </tr>
      <tr>
        <td id="L3137" class="blob-num js-line-number" data-line-number="3137"></td>
        <td id="LC3137" class="blob-code blob-code-inner js-file-line">        m_Exports.<span class="pl-c1">push_back</span>(m_Strings.<span class="pl-c1">LocalCopy</span>(Export));</td>
      </tr>
      <tr>
        <td id="L3138" class="blob-num js-line-number" data-line-number="3138"></td>
        <td id="LC3138" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">pExports</span> = &amp;m_Exports[<span class="pl-c1">0</span>];  <span class="pl-c"><span class="pl-c">//</span> using ugly way to get pointer in case .data() is not defined</span></td>
      </tr>
      <tr>
        <td id="L3139" class="blob-num js-line-number" data-line-number="3139"></td>
        <td id="LC3139" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3140" class="blob-num js-line-number" data-line-number="3140"></td>
        <td id="LC3140" class="blob-code blob-code-inner js-file-line">    template&lt;<span class="pl-c1">size_t</span> N&gt;</td>
      </tr>
      <tr>
        <td id="L3141" class="blob-num js-line-number" data-line-number="3141"></td>
        <td id="LC3141" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">AddExports</span>(<span class="pl-c1">LPCWSTR</span> (&amp;Exports)[N])</td>
      </tr>
      <tr>
        <td id="L3142" class="blob-num js-line-number" data-line-number="3142"></td>
        <td id="LC3142" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3143" class="blob-num js-line-number" data-line-number="3143"></td>
        <td id="LC3143" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (UINT i = <span class="pl-c1">0</span>; i &lt; N; i++)</td>
      </tr>
      <tr>
        <td id="L3144" class="blob-num js-line-number" data-line-number="3144"></td>
        <td id="LC3144" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L3145" class="blob-num js-line-number" data-line-number="3145"></td>
        <td id="LC3145" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">AddExport</span>(Exports[i]);</td>
      </tr>
      <tr>
        <td id="L3146" class="blob-num js-line-number" data-line-number="3146"></td>
        <td id="LC3146" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L3147" class="blob-num js-line-number" data-line-number="3147"></td>
        <td id="LC3147" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3148" class="blob-num js-line-number" data-line-number="3148"></td>
        <td id="LC3148" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">AddExports</span>(LPCWSTR* Exports, UINT N)</td>
      </tr>
      <tr>
        <td id="L3149" class="blob-num js-line-number" data-line-number="3149"></td>
        <td id="LC3149" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3150" class="blob-num js-line-number" data-line-number="3150"></td>
        <td id="LC3150" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (UINT i = <span class="pl-c1">0</span>; i &lt; N; i++)</td>
      </tr>
      <tr>
        <td id="L3151" class="blob-num js-line-number" data-line-number="3151"></td>
        <td id="LC3151" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L3152" class="blob-num js-line-number" data-line-number="3152"></td>
        <td id="LC3152" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">AddExport</span>(Exports[i]);</td>
      </tr>
      <tr>
        <td id="L3153" class="blob-num js-line-number" data-line-number="3153"></td>
        <td id="LC3153" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L3154" class="blob-num js-line-number" data-line-number="3154"></td>
        <td id="LC3154" class="blob-code blob-code-inner js-file-line">    }    </td>
      </tr>
      <tr>
        <td id="L3155" class="blob-num js-line-number" data-line-number="3155"></td>
        <td id="LC3155" class="blob-code blob-code-inner js-file-line">    D3D12_STATE_SUBOBJECT_TYPE <span class="pl-smi">Type</span>() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L3156" class="blob-num js-line-number" data-line-number="3156"></td>
        <td id="LC3156" class="blob-code blob-code-inner js-file-line">    { </td>
      </tr>
      <tr>
        <td id="L3157" class="blob-num js-line-number" data-line-number="3157"></td>
        <td id="LC3157" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> D3D12_STATE_SUBOBJECT_TYPE_DXIL_SUBOBJECT_TO_EXPORTS_ASSOCIATION; </td>
      </tr>
      <tr>
        <td id="L3158" class="blob-num js-line-number" data-line-number="3158"></td>
        <td id="LC3158" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3159" class="blob-num js-line-number" data-line-number="3159"></td>
        <td id="LC3159" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-k">const</span> D3D12_STATE_SUBOBJECT&amp;() <span class="pl-k">const</span> { <span class="pl-k">return</span> *m_pSubobject; }</td>
      </tr>
      <tr>
        <td id="L3160" class="blob-num js-line-number" data-line-number="3160"></td>
        <td id="LC3160" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-k">const</span> D3D12_DXIL_SUBOBJECT_TO_EXPORTS_ASSOCIATION&amp;() <span class="pl-k">const</span> { <span class="pl-k">return</span> m_Desc; }</td>
      </tr>
      <tr>
        <td id="L3161" class="blob-num js-line-number" data-line-number="3161"></td>
        <td id="LC3161" class="blob-code blob-code-inner js-file-line">private:</td>
      </tr>
      <tr>
        <td id="L3162" class="blob-num js-line-number" data-line-number="3162"></td>
        <td id="LC3162" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">Init</span>()</td>
      </tr>
      <tr>
        <td id="L3163" class="blob-num js-line-number" data-line-number="3163"></td>
        <td id="LC3163" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3164" class="blob-num js-line-number" data-line-number="3164"></td>
        <td id="LC3164" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">SUBOBJECT_HELPER_BASE::Init</span>();</td>
      </tr>
      <tr>
        <td id="L3165" class="blob-num js-line-number" data-line-number="3165"></td>
        <td id="LC3165" class="blob-code blob-code-inner js-file-line">        m_Desc = {};</td>
      </tr>
      <tr>
        <td id="L3166" class="blob-num js-line-number" data-line-number="3166"></td>
        <td id="LC3166" class="blob-code blob-code-inner js-file-line">        m_Strings.<span class="pl-c1">clear</span>();</td>
      </tr>
      <tr>
        <td id="L3167" class="blob-num js-line-number" data-line-number="3167"></td>
        <td id="LC3167" class="blob-code blob-code-inner js-file-line">        m_SubobjectName.<span class="pl-c1">clear</span>();</td>
      </tr>
      <tr>
        <td id="L3168" class="blob-num js-line-number" data-line-number="3168"></td>
        <td id="LC3168" class="blob-code blob-code-inner js-file-line">        m_Exports.<span class="pl-c1">clear</span>();</td>
      </tr>
      <tr>
        <td id="L3169" class="blob-num js-line-number" data-line-number="3169"></td>
        <td id="LC3169" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3170" class="blob-num js-line-number" data-line-number="3170"></td>
        <td id="LC3170" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>* <span class="pl-c1">Data</span>() { <span class="pl-k">return</span> &amp;m_Desc; }</td>
      </tr>
      <tr>
        <td id="L3171" class="blob-num js-line-number" data-line-number="3171"></td>
        <td id="LC3171" class="blob-code blob-code-inner js-file-line">    D3D12_DXIL_SUBOBJECT_TO_EXPORTS_ASSOCIATION m_Desc;</td>
      </tr>
      <tr>
        <td id="L3172" class="blob-num js-line-number" data-line-number="3172"></td>
        <td id="LC3172" class="blob-code blob-code-inner js-file-line">    CD3DX12_STATE_OBJECT_DESC::StringContainer m_Strings;</td>
      </tr>
      <tr>
        <td id="L3173" class="blob-num js-line-number" data-line-number="3173"></td>
        <td id="LC3173" class="blob-code blob-code-inner js-file-line">    CD3DX12_STATE_OBJECT_DESC::StringContainer m_SubobjectName;</td>
      </tr>
      <tr>
        <td id="L3174" class="blob-num js-line-number" data-line-number="3174"></td>
        <td id="LC3174" class="blob-code blob-code-inner js-file-line">    std::vector&lt;LPCWSTR&gt; m_Exports;</td>
      </tr>
      <tr>
        <td id="L3175" class="blob-num js-line-number" data-line-number="3175"></td>
        <td id="LC3175" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L3176" class="blob-num js-line-number" data-line-number="3176"></td>
        <td id="LC3176" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3177" class="blob-num js-line-number" data-line-number="3177"></td>
        <td id="LC3177" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L3178" class="blob-num js-line-number" data-line-number="3178"></td>
        <td id="LC3178" class="blob-code blob-code-inner js-file-line">class CD3DX12_HIT_GROUP_SUBOBJECT </td>
      </tr>
      <tr>
        <td id="L3179" class="blob-num js-line-number" data-line-number="3179"></td>
        <td id="LC3179" class="blob-code blob-code-inner js-file-line">    : public CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE</td>
      </tr>
      <tr>
        <td id="L3180" class="blob-num js-line-number" data-line-number="3180"></td>
        <td id="LC3180" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3181" class="blob-num js-line-number" data-line-number="3181"></td>
        <td id="LC3181" class="blob-code blob-code-inner js-file-line">public:</td>
      </tr>
      <tr>
        <td id="L3182" class="blob-num js-line-number" data-line-number="3182"></td>
        <td id="LC3182" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_HIT_GROUP_SUBOBJECT</span>()</td>
      </tr>
      <tr>
        <td id="L3183" class="blob-num js-line-number" data-line-number="3183"></td>
        <td id="LC3183" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3184" class="blob-num js-line-number" data-line-number="3184"></td>
        <td id="LC3184" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>();</td>
      </tr>
      <tr>
        <td id="L3185" class="blob-num js-line-number" data-line-number="3185"></td>
        <td id="LC3185" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3186" class="blob-num js-line-number" data-line-number="3186"></td>
        <td id="LC3186" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_HIT_GROUP_SUBOBJECT</span>(CD3DX12_STATE_OBJECT_DESC&amp; ContainingStateObject)</td>
      </tr>
      <tr>
        <td id="L3187" class="blob-num js-line-number" data-line-number="3187"></td>
        <td id="LC3187" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3188" class="blob-num js-line-number" data-line-number="3188"></td>
        <td id="LC3188" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>();</td>
      </tr>
      <tr>
        <td id="L3189" class="blob-num js-line-number" data-line-number="3189"></td>
        <td id="LC3189" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">AddToStateObject</span>(ContainingStateObject);</td>
      </tr>
      <tr>
        <td id="L3190" class="blob-num js-line-number" data-line-number="3190"></td>
        <td id="LC3190" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3191" class="blob-num js-line-number" data-line-number="3191"></td>
        <td id="LC3191" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">SetHitGroupExport</span>(LPCWSTR exportName)</td>
      </tr>
      <tr>
        <td id="L3192" class="blob-num js-line-number" data-line-number="3192"></td>
        <td id="LC3192" class="blob-code blob-code-inner js-file-line">    { </td>
      </tr>
      <tr>
        <td id="L3193" class="blob-num js-line-number" data-line-number="3193"></td>
        <td id="LC3193" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">HitGroupExport</span> = m_Strings[<span class="pl-c1">0</span>].<span class="pl-c1">LocalCopy</span>(exportName, <span class="pl-c1">true</span>); </td>
      </tr>
      <tr>
        <td id="L3194" class="blob-num js-line-number" data-line-number="3194"></td>
        <td id="LC3194" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3195" class="blob-num js-line-number" data-line-number="3195"></td>
        <td id="LC3195" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">SetHitGroupType</span>(D3D12_HIT_GROUP_TYPE Type) { m_Desc.<span class="pl-smi">Type</span> = Type; }</td>
      </tr>
      <tr>
        <td id="L3196" class="blob-num js-line-number" data-line-number="3196"></td>
        <td id="LC3196" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">SetAnyHitShaderImport</span>(LPCWSTR importName)</td>
      </tr>
      <tr>
        <td id="L3197" class="blob-num js-line-number" data-line-number="3197"></td>
        <td id="LC3197" class="blob-code blob-code-inner js-file-line">    { </td>
      </tr>
      <tr>
        <td id="L3198" class="blob-num js-line-number" data-line-number="3198"></td>
        <td id="LC3198" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">AnyHitShaderImport</span> = m_Strings[<span class="pl-c1">1</span>].<span class="pl-c1">LocalCopy</span>(importName, <span class="pl-c1">true</span>); </td>
      </tr>
      <tr>
        <td id="L3199" class="blob-num js-line-number" data-line-number="3199"></td>
        <td id="LC3199" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3200" class="blob-num js-line-number" data-line-number="3200"></td>
        <td id="LC3200" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">SetClosestHitShaderImport</span>(LPCWSTR importName)</td>
      </tr>
      <tr>
        <td id="L3201" class="blob-num js-line-number" data-line-number="3201"></td>
        <td id="LC3201" class="blob-code blob-code-inner js-file-line">    { </td>
      </tr>
      <tr>
        <td id="L3202" class="blob-num js-line-number" data-line-number="3202"></td>
        <td id="LC3202" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">ClosestHitShaderImport</span> = m_Strings[<span class="pl-c1">2</span>].<span class="pl-c1">LocalCopy</span>(importName, <span class="pl-c1">true</span>); </td>
      </tr>
      <tr>
        <td id="L3203" class="blob-num js-line-number" data-line-number="3203"></td>
        <td id="LC3203" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3204" class="blob-num js-line-number" data-line-number="3204"></td>
        <td id="LC3204" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">SetIntersectionShaderImport</span>(LPCWSTR importName)</td>
      </tr>
      <tr>
        <td id="L3205" class="blob-num js-line-number" data-line-number="3205"></td>
        <td id="LC3205" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3206" class="blob-num js-line-number" data-line-number="3206"></td>
        <td id="LC3206" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">IntersectionShaderImport</span> = m_Strings[<span class="pl-c1">3</span>].<span class="pl-c1">LocalCopy</span>(importName, <span class="pl-c1">true</span>); </td>
      </tr>
      <tr>
        <td id="L3207" class="blob-num js-line-number" data-line-number="3207"></td>
        <td id="LC3207" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3208" class="blob-num js-line-number" data-line-number="3208"></td>
        <td id="LC3208" class="blob-code blob-code-inner js-file-line">    D3D12_STATE_SUBOBJECT_TYPE <span class="pl-smi">Type</span>() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L3209" class="blob-num js-line-number" data-line-number="3209"></td>
        <td id="LC3209" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3210" class="blob-num js-line-number" data-line-number="3210"></td>
        <td id="LC3210" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> D3D12_STATE_SUBOBJECT_TYPE_HIT_GROUP; </td>
      </tr>
      <tr>
        <td id="L3211" class="blob-num js-line-number" data-line-number="3211"></td>
        <td id="LC3211" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3212" class="blob-num js-line-number" data-line-number="3212"></td>
        <td id="LC3212" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-k">const</span> D3D12_STATE_SUBOBJECT&amp;() <span class="pl-k">const</span> { <span class="pl-k">return</span> *m_pSubobject; }</td>
      </tr>
      <tr>
        <td id="L3213" class="blob-num js-line-number" data-line-number="3213"></td>
        <td id="LC3213" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-k">const</span> D3D12_HIT_GROUP_DESC&amp;() <span class="pl-k">const</span> { <span class="pl-k">return</span> m_Desc; }</td>
      </tr>
      <tr>
        <td id="L3214" class="blob-num js-line-number" data-line-number="3214"></td>
        <td id="LC3214" class="blob-code blob-code-inner js-file-line">private:</td>
      </tr>
      <tr>
        <td id="L3215" class="blob-num js-line-number" data-line-number="3215"></td>
        <td id="LC3215" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">Init</span>()</td>
      </tr>
      <tr>
        <td id="L3216" class="blob-num js-line-number" data-line-number="3216"></td>
        <td id="LC3216" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3217" class="blob-num js-line-number" data-line-number="3217"></td>
        <td id="LC3217" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">SUBOBJECT_HELPER_BASE::Init</span>();</td>
      </tr>
      <tr>
        <td id="L3218" class="blob-num js-line-number" data-line-number="3218"></td>
        <td id="LC3218" class="blob-code blob-code-inner js-file-line">        m_Desc = {};</td>
      </tr>
      <tr>
        <td id="L3219" class="blob-num js-line-number" data-line-number="3219"></td>
        <td id="LC3219" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (UINT i = <span class="pl-c1">0</span>; i &lt; m_NumStrings; i++)</td>
      </tr>
      <tr>
        <td id="L3220" class="blob-num js-line-number" data-line-number="3220"></td>
        <td id="LC3220" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L3221" class="blob-num js-line-number" data-line-number="3221"></td>
        <td id="LC3221" class="blob-code blob-code-inner js-file-line">            m_Strings[i].<span class="pl-c1">clear</span>();</td>
      </tr>
      <tr>
        <td id="L3222" class="blob-num js-line-number" data-line-number="3222"></td>
        <td id="LC3222" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L3223" class="blob-num js-line-number" data-line-number="3223"></td>
        <td id="LC3223" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3224" class="blob-num js-line-number" data-line-number="3224"></td>
        <td id="LC3224" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>* <span class="pl-c1">Data</span>() { <span class="pl-k">return</span> &amp;m_Desc; }</td>
      </tr>
      <tr>
        <td id="L3225" class="blob-num js-line-number" data-line-number="3225"></td>
        <td id="LC3225" class="blob-code blob-code-inner js-file-line">    D3D12_HIT_GROUP_DESC m_Desc;</td>
      </tr>
      <tr>
        <td id="L3226" class="blob-num js-line-number" data-line-number="3226"></td>
        <td id="LC3226" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> UINT m_NumStrings = <span class="pl-c1">4</span>;</td>
      </tr>
      <tr>
        <td id="L3227" class="blob-num js-line-number" data-line-number="3227"></td>
        <td id="LC3227" class="blob-code blob-code-inner js-file-line">    CD3DX12_STATE_OBJECT_DESC::StringContainer </td>
      </tr>
      <tr>
        <td id="L3228" class="blob-num js-line-number" data-line-number="3228"></td>
        <td id="LC3228" class="blob-code blob-code-inner js-file-line">        m_Strings[m_NumStrings]; <span class="pl-c"><span class="pl-c">//</span> one string for every entrypoint name</span></td>
      </tr>
      <tr>
        <td id="L3229" class="blob-num js-line-number" data-line-number="3229"></td>
        <td id="LC3229" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L3230" class="blob-num js-line-number" data-line-number="3230"></td>
        <td id="LC3230" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3231" class="blob-num js-line-number" data-line-number="3231"></td>
        <td id="LC3231" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L3232" class="blob-num js-line-number" data-line-number="3232"></td>
        <td id="LC3232" class="blob-code blob-code-inner js-file-line">class CD3DX12_RAYTRACING_SHADER_CONFIG_SUBOBJECT </td>
      </tr>
      <tr>
        <td id="L3233" class="blob-num js-line-number" data-line-number="3233"></td>
        <td id="LC3233" class="blob-code blob-code-inner js-file-line">    : public CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE</td>
      </tr>
      <tr>
        <td id="L3234" class="blob-num js-line-number" data-line-number="3234"></td>
        <td id="LC3234" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3235" class="blob-num js-line-number" data-line-number="3235"></td>
        <td id="LC3235" class="blob-code blob-code-inner js-file-line">public:</td>
      </tr>
      <tr>
        <td id="L3236" class="blob-num js-line-number" data-line-number="3236"></td>
        <td id="LC3236" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_RAYTRACING_SHADER_CONFIG_SUBOBJECT</span>()</td>
      </tr>
      <tr>
        <td id="L3237" class="blob-num js-line-number" data-line-number="3237"></td>
        <td id="LC3237" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3238" class="blob-num js-line-number" data-line-number="3238"></td>
        <td id="LC3238" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>();</td>
      </tr>
      <tr>
        <td id="L3239" class="blob-num js-line-number" data-line-number="3239"></td>
        <td id="LC3239" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3240" class="blob-num js-line-number" data-line-number="3240"></td>
        <td id="LC3240" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_RAYTRACING_SHADER_CONFIG_SUBOBJECT</span>(CD3DX12_STATE_OBJECT_DESC&amp; ContainingStateObject)</td>
      </tr>
      <tr>
        <td id="L3241" class="blob-num js-line-number" data-line-number="3241"></td>
        <td id="LC3241" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3242" class="blob-num js-line-number" data-line-number="3242"></td>
        <td id="LC3242" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>();</td>
      </tr>
      <tr>
        <td id="L3243" class="blob-num js-line-number" data-line-number="3243"></td>
        <td id="LC3243" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">AddToStateObject</span>(ContainingStateObject);</td>
      </tr>
      <tr>
        <td id="L3244" class="blob-num js-line-number" data-line-number="3244"></td>
        <td id="LC3244" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3245" class="blob-num js-line-number" data-line-number="3245"></td>
        <td id="LC3245" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">Config</span>(UINT MaxPayloadSizeInBytes, UINT MaxAttributeSizeInBytes)</td>
      </tr>
      <tr>
        <td id="L3246" class="blob-num js-line-number" data-line-number="3246"></td>
        <td id="LC3246" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3247" class="blob-num js-line-number" data-line-number="3247"></td>
        <td id="LC3247" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">MaxPayloadSizeInBytes</span> = MaxPayloadSizeInBytes;</td>
      </tr>
      <tr>
        <td id="L3248" class="blob-num js-line-number" data-line-number="3248"></td>
        <td id="LC3248" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">MaxAttributeSizeInBytes</span> = MaxAttributeSizeInBytes;</td>
      </tr>
      <tr>
        <td id="L3249" class="blob-num js-line-number" data-line-number="3249"></td>
        <td id="LC3249" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3250" class="blob-num js-line-number" data-line-number="3250"></td>
        <td id="LC3250" class="blob-code blob-code-inner js-file-line">    D3D12_STATE_SUBOBJECT_TYPE <span class="pl-smi">Type</span>() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L3251" class="blob-num js-line-number" data-line-number="3251"></td>
        <td id="LC3251" class="blob-code blob-code-inner js-file-line">    { </td>
      </tr>
      <tr>
        <td id="L3252" class="blob-num js-line-number" data-line-number="3252"></td>
        <td id="LC3252" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> D3D12_STATE_SUBOBJECT_TYPE_RAYTRACING_SHADER_CONFIG; </td>
      </tr>
      <tr>
        <td id="L3253" class="blob-num js-line-number" data-line-number="3253"></td>
        <td id="LC3253" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3254" class="blob-num js-line-number" data-line-number="3254"></td>
        <td id="LC3254" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-k">const</span> D3D12_STATE_SUBOBJECT&amp;() <span class="pl-k">const</span> { <span class="pl-k">return</span> *m_pSubobject; }</td>
      </tr>
      <tr>
        <td id="L3255" class="blob-num js-line-number" data-line-number="3255"></td>
        <td id="LC3255" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-k">const</span> D3D12_RAYTRACING_SHADER_CONFIG&amp;() <span class="pl-k">const</span> { <span class="pl-k">return</span> m_Desc; }</td>
      </tr>
      <tr>
        <td id="L3256" class="blob-num js-line-number" data-line-number="3256"></td>
        <td id="LC3256" class="blob-code blob-code-inner js-file-line">private:</td>
      </tr>
      <tr>
        <td id="L3257" class="blob-num js-line-number" data-line-number="3257"></td>
        <td id="LC3257" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">Init</span>()</td>
      </tr>
      <tr>
        <td id="L3258" class="blob-num js-line-number" data-line-number="3258"></td>
        <td id="LC3258" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3259" class="blob-num js-line-number" data-line-number="3259"></td>
        <td id="LC3259" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">SUBOBJECT_HELPER_BASE::Init</span>();</td>
      </tr>
      <tr>
        <td id="L3260" class="blob-num js-line-number" data-line-number="3260"></td>
        <td id="LC3260" class="blob-code blob-code-inner js-file-line">        m_Desc = {};</td>
      </tr>
      <tr>
        <td id="L3261" class="blob-num js-line-number" data-line-number="3261"></td>
        <td id="LC3261" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3262" class="blob-num js-line-number" data-line-number="3262"></td>
        <td id="LC3262" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>* <span class="pl-c1">Data</span>() { <span class="pl-k">return</span> &amp;m_Desc; }</td>
      </tr>
      <tr>
        <td id="L3263" class="blob-num js-line-number" data-line-number="3263"></td>
        <td id="LC3263" class="blob-code blob-code-inner js-file-line">    D3D12_RAYTRACING_SHADER_CONFIG m_Desc;</td>
      </tr>
      <tr>
        <td id="L3264" class="blob-num js-line-number" data-line-number="3264"></td>
        <td id="LC3264" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L3265" class="blob-num js-line-number" data-line-number="3265"></td>
        <td id="LC3265" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3266" class="blob-num js-line-number" data-line-number="3266"></td>
        <td id="LC3266" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L3267" class="blob-num js-line-number" data-line-number="3267"></td>
        <td id="LC3267" class="blob-code blob-code-inner js-file-line">class CD3DX12_RAYTRACING_PIPELINE_CONFIG_SUBOBJECT </td>
      </tr>
      <tr>
        <td id="L3268" class="blob-num js-line-number" data-line-number="3268"></td>
        <td id="LC3268" class="blob-code blob-code-inner js-file-line">    : public CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE</td>
      </tr>
      <tr>
        <td id="L3269" class="blob-num js-line-number" data-line-number="3269"></td>
        <td id="LC3269" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3270" class="blob-num js-line-number" data-line-number="3270"></td>
        <td id="LC3270" class="blob-code blob-code-inner js-file-line">public:</td>
      </tr>
      <tr>
        <td id="L3271" class="blob-num js-line-number" data-line-number="3271"></td>
        <td id="LC3271" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_RAYTRACING_PIPELINE_CONFIG_SUBOBJECT</span>()</td>
      </tr>
      <tr>
        <td id="L3272" class="blob-num js-line-number" data-line-number="3272"></td>
        <td id="LC3272" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3273" class="blob-num js-line-number" data-line-number="3273"></td>
        <td id="LC3273" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>();</td>
      </tr>
      <tr>
        <td id="L3274" class="blob-num js-line-number" data-line-number="3274"></td>
        <td id="LC3274" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3275" class="blob-num js-line-number" data-line-number="3275"></td>
        <td id="LC3275" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_RAYTRACING_PIPELINE_CONFIG_SUBOBJECT</span>(CD3DX12_STATE_OBJECT_DESC&amp; ContainingStateObject)</td>
      </tr>
      <tr>
        <td id="L3276" class="blob-num js-line-number" data-line-number="3276"></td>
        <td id="LC3276" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3277" class="blob-num js-line-number" data-line-number="3277"></td>
        <td id="LC3277" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>();</td>
      </tr>
      <tr>
        <td id="L3278" class="blob-num js-line-number" data-line-number="3278"></td>
        <td id="LC3278" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">AddToStateObject</span>(ContainingStateObject);</td>
      </tr>
      <tr>
        <td id="L3279" class="blob-num js-line-number" data-line-number="3279"></td>
        <td id="LC3279" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3280" class="blob-num js-line-number" data-line-number="3280"></td>
        <td id="LC3280" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">Config</span>(UINT MaxTraceRecursionDepth)</td>
      </tr>
      <tr>
        <td id="L3281" class="blob-num js-line-number" data-line-number="3281"></td>
        <td id="LC3281" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3282" class="blob-num js-line-number" data-line-number="3282"></td>
        <td id="LC3282" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">MaxTraceRecursionDepth</span> = MaxTraceRecursionDepth;</td>
      </tr>
      <tr>
        <td id="L3283" class="blob-num js-line-number" data-line-number="3283"></td>
        <td id="LC3283" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3284" class="blob-num js-line-number" data-line-number="3284"></td>
        <td id="LC3284" class="blob-code blob-code-inner js-file-line">    D3D12_STATE_SUBOBJECT_TYPE <span class="pl-smi">Type</span>() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L3285" class="blob-num js-line-number" data-line-number="3285"></td>
        <td id="LC3285" class="blob-code blob-code-inner js-file-line">    { </td>
      </tr>
      <tr>
        <td id="L3286" class="blob-num js-line-number" data-line-number="3286"></td>
        <td id="LC3286" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> D3D12_STATE_SUBOBJECT_TYPE_RAYTRACING_PIPELINE_CONFIG; </td>
      </tr>
      <tr>
        <td id="L3287" class="blob-num js-line-number" data-line-number="3287"></td>
        <td id="LC3287" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3288" class="blob-num js-line-number" data-line-number="3288"></td>
        <td id="LC3288" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-k">const</span> D3D12_STATE_SUBOBJECT&amp;() <span class="pl-k">const</span> { <span class="pl-k">return</span> *m_pSubobject; }</td>
      </tr>
      <tr>
        <td id="L3289" class="blob-num js-line-number" data-line-number="3289"></td>
        <td id="LC3289" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-k">const</span> D3D12_RAYTRACING_PIPELINE_CONFIG&amp;() <span class="pl-k">const</span> { <span class="pl-k">return</span> m_Desc; }</td>
      </tr>
      <tr>
        <td id="L3290" class="blob-num js-line-number" data-line-number="3290"></td>
        <td id="LC3290" class="blob-code blob-code-inner js-file-line">private:</td>
      </tr>
      <tr>
        <td id="L3291" class="blob-num js-line-number" data-line-number="3291"></td>
        <td id="LC3291" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">Init</span>()</td>
      </tr>
      <tr>
        <td id="L3292" class="blob-num js-line-number" data-line-number="3292"></td>
        <td id="LC3292" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3293" class="blob-num js-line-number" data-line-number="3293"></td>
        <td id="LC3293" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">SUBOBJECT_HELPER_BASE::Init</span>();</td>
      </tr>
      <tr>
        <td id="L3294" class="blob-num js-line-number" data-line-number="3294"></td>
        <td id="LC3294" class="blob-code blob-code-inner js-file-line">        m_Desc = {};</td>
      </tr>
      <tr>
        <td id="L3295" class="blob-num js-line-number" data-line-number="3295"></td>
        <td id="LC3295" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3296" class="blob-num js-line-number" data-line-number="3296"></td>
        <td id="LC3296" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>* <span class="pl-c1">Data</span>() { <span class="pl-k">return</span> &amp;m_Desc; }</td>
      </tr>
      <tr>
        <td id="L3297" class="blob-num js-line-number" data-line-number="3297"></td>
        <td id="LC3297" class="blob-code blob-code-inner js-file-line">    D3D12_RAYTRACING_PIPELINE_CONFIG m_Desc;</td>
      </tr>
      <tr>
        <td id="L3298" class="blob-num js-line-number" data-line-number="3298"></td>
        <td id="LC3298" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L3299" class="blob-num js-line-number" data-line-number="3299"></td>
        <td id="LC3299" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3300" class="blob-num js-line-number" data-line-number="3300"></td>
        <td id="LC3300" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L3301" class="blob-num js-line-number" data-line-number="3301"></td>
        <td id="LC3301" class="blob-code blob-code-inner js-file-line">class CD3DX12_GLOBAL_ROOT_SIGNATURE_SUBOBJECT </td>
      </tr>
      <tr>
        <td id="L3302" class="blob-num js-line-number" data-line-number="3302"></td>
        <td id="LC3302" class="blob-code blob-code-inner js-file-line">    : public CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE</td>
      </tr>
      <tr>
        <td id="L3303" class="blob-num js-line-number" data-line-number="3303"></td>
        <td id="LC3303" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3304" class="blob-num js-line-number" data-line-number="3304"></td>
        <td id="LC3304" class="blob-code blob-code-inner js-file-line">public:</td>
      </tr>
      <tr>
        <td id="L3305" class="blob-num js-line-number" data-line-number="3305"></td>
        <td id="LC3305" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_GLOBAL_ROOT_SIGNATURE_SUBOBJECT</span>()</td>
      </tr>
      <tr>
        <td id="L3306" class="blob-num js-line-number" data-line-number="3306"></td>
        <td id="LC3306" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3307" class="blob-num js-line-number" data-line-number="3307"></td>
        <td id="LC3307" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>();</td>
      </tr>
      <tr>
        <td id="L3308" class="blob-num js-line-number" data-line-number="3308"></td>
        <td id="LC3308" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3309" class="blob-num js-line-number" data-line-number="3309"></td>
        <td id="LC3309" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_GLOBAL_ROOT_SIGNATURE_SUBOBJECT</span>(CD3DX12_STATE_OBJECT_DESC&amp; ContainingStateObject)</td>
      </tr>
      <tr>
        <td id="L3310" class="blob-num js-line-number" data-line-number="3310"></td>
        <td id="LC3310" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3311" class="blob-num js-line-number" data-line-number="3311"></td>
        <td id="LC3311" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>();</td>
      </tr>
      <tr>
        <td id="L3312" class="blob-num js-line-number" data-line-number="3312"></td>
        <td id="LC3312" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">AddToStateObject</span>(ContainingStateObject);</td>
      </tr>
      <tr>
        <td id="L3313" class="blob-num js-line-number" data-line-number="3313"></td>
        <td id="LC3313" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3314" class="blob-num js-line-number" data-line-number="3314"></td>
        <td id="LC3314" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">SetRootSignature</span>(ID3D12RootSignature* pRootSig)</td>
      </tr>
      <tr>
        <td id="L3315" class="blob-num js-line-number" data-line-number="3315"></td>
        <td id="LC3315" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3316" class="blob-num js-line-number" data-line-number="3316"></td>
        <td id="LC3316" class="blob-code blob-code-inner js-file-line">        m_pRootSig = pRootSig;</td>
      </tr>
      <tr>
        <td id="L3317" class="blob-num js-line-number" data-line-number="3317"></td>
        <td id="LC3317" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3318" class="blob-num js-line-number" data-line-number="3318"></td>
        <td id="LC3318" class="blob-code blob-code-inner js-file-line">    D3D12_STATE_SUBOBJECT_TYPE <span class="pl-smi">Type</span>() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L3319" class="blob-num js-line-number" data-line-number="3319"></td>
        <td id="LC3319" class="blob-code blob-code-inner js-file-line">    { </td>
      </tr>
      <tr>
        <td id="L3320" class="blob-num js-line-number" data-line-number="3320"></td>
        <td id="LC3320" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> D3D12_STATE_SUBOBJECT_TYPE_GLOBAL_ROOT_SIGNATURE; </td>
      </tr>
      <tr>
        <td id="L3321" class="blob-num js-line-number" data-line-number="3321"></td>
        <td id="LC3321" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3322" class="blob-num js-line-number" data-line-number="3322"></td>
        <td id="LC3322" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-k">const</span> D3D12_STATE_SUBOBJECT&amp;() <span class="pl-k">const</span> { <span class="pl-k">return</span> *m_pSubobject; }</td>
      </tr>
      <tr>
        <td id="L3323" class="blob-num js-line-number" data-line-number="3323"></td>
        <td id="LC3323" class="blob-code blob-code-inner js-file-line">    operator ID3D12RootSignature*() <span class="pl-k">const</span> { <span class="pl-k">return</span> m_pRootSig.<span class="pl-c1">Get</span>(); }</td>
      </tr>
      <tr>
        <td id="L3324" class="blob-num js-line-number" data-line-number="3324"></td>
        <td id="LC3324" class="blob-code blob-code-inner js-file-line">private:</td>
      </tr>
      <tr>
        <td id="L3325" class="blob-num js-line-number" data-line-number="3325"></td>
        <td id="LC3325" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">Init</span>()</td>
      </tr>
      <tr>
        <td id="L3326" class="blob-num js-line-number" data-line-number="3326"></td>
        <td id="LC3326" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3327" class="blob-num js-line-number" data-line-number="3327"></td>
        <td id="LC3327" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">SUBOBJECT_HELPER_BASE::Init</span>();</td>
      </tr>
      <tr>
        <td id="L3328" class="blob-num js-line-number" data-line-number="3328"></td>
        <td id="LC3328" class="blob-code blob-code-inner js-file-line">        m_pRootSig = nullptr;</td>
      </tr>
      <tr>
        <td id="L3329" class="blob-num js-line-number" data-line-number="3329"></td>
        <td id="LC3329" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3330" class="blob-num js-line-number" data-line-number="3330"></td>
        <td id="LC3330" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>* <span class="pl-c1">Data</span>() { <span class="pl-k">return</span> m_pRootSig.<span class="pl-c1">GetAddressOf</span>(); }</td>
      </tr>
      <tr>
        <td id="L3331" class="blob-num js-line-number" data-line-number="3331"></td>
        <td id="LC3331" class="blob-code blob-code-inner js-file-line">    Microsoft::WRL::ComPtr&lt;ID3D12RootSignature&gt; m_pRootSig;</td>
      </tr>
      <tr>
        <td id="L3332" class="blob-num js-line-number" data-line-number="3332"></td>
        <td id="LC3332" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L3333" class="blob-num js-line-number" data-line-number="3333"></td>
        <td id="LC3333" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3334" class="blob-num js-line-number" data-line-number="3334"></td>
        <td id="LC3334" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L3335" class="blob-num js-line-number" data-line-number="3335"></td>
        <td id="LC3335" class="blob-code blob-code-inner js-file-line">class CD3DX12_LOCAL_ROOT_SIGNATURE_SUBOBJECT </td>
      </tr>
      <tr>
        <td id="L3336" class="blob-num js-line-number" data-line-number="3336"></td>
        <td id="LC3336" class="blob-code blob-code-inner js-file-line">    : public CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE</td>
      </tr>
      <tr>
        <td id="L3337" class="blob-num js-line-number" data-line-number="3337"></td>
        <td id="LC3337" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3338" class="blob-num js-line-number" data-line-number="3338"></td>
        <td id="LC3338" class="blob-code blob-code-inner js-file-line">public:</td>
      </tr>
      <tr>
        <td id="L3339" class="blob-num js-line-number" data-line-number="3339"></td>
        <td id="LC3339" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_LOCAL_ROOT_SIGNATURE_SUBOBJECT</span>()</td>
      </tr>
      <tr>
        <td id="L3340" class="blob-num js-line-number" data-line-number="3340"></td>
        <td id="LC3340" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3341" class="blob-num js-line-number" data-line-number="3341"></td>
        <td id="LC3341" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>();</td>
      </tr>
      <tr>
        <td id="L3342" class="blob-num js-line-number" data-line-number="3342"></td>
        <td id="LC3342" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3343" class="blob-num js-line-number" data-line-number="3343"></td>
        <td id="LC3343" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_LOCAL_ROOT_SIGNATURE_SUBOBJECT</span>(CD3DX12_STATE_OBJECT_DESC&amp; ContainingStateObject)</td>
      </tr>
      <tr>
        <td id="L3344" class="blob-num js-line-number" data-line-number="3344"></td>
        <td id="LC3344" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3345" class="blob-num js-line-number" data-line-number="3345"></td>
        <td id="LC3345" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>();</td>
      </tr>
      <tr>
        <td id="L3346" class="blob-num js-line-number" data-line-number="3346"></td>
        <td id="LC3346" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">AddToStateObject</span>(ContainingStateObject);</td>
      </tr>
      <tr>
        <td id="L3347" class="blob-num js-line-number" data-line-number="3347"></td>
        <td id="LC3347" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3348" class="blob-num js-line-number" data-line-number="3348"></td>
        <td id="LC3348" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">SetRootSignature</span>(ID3D12RootSignature* pRootSig)</td>
      </tr>
      <tr>
        <td id="L3349" class="blob-num js-line-number" data-line-number="3349"></td>
        <td id="LC3349" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3350" class="blob-num js-line-number" data-line-number="3350"></td>
        <td id="LC3350" class="blob-code blob-code-inner js-file-line">        m_pRootSig = pRootSig;</td>
      </tr>
      <tr>
        <td id="L3351" class="blob-num js-line-number" data-line-number="3351"></td>
        <td id="LC3351" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3352" class="blob-num js-line-number" data-line-number="3352"></td>
        <td id="LC3352" class="blob-code blob-code-inner js-file-line">    D3D12_STATE_SUBOBJECT_TYPE <span class="pl-smi">Type</span>() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L3353" class="blob-num js-line-number" data-line-number="3353"></td>
        <td id="LC3353" class="blob-code blob-code-inner js-file-line">    { </td>
      </tr>
      <tr>
        <td id="L3354" class="blob-num js-line-number" data-line-number="3354"></td>
        <td id="LC3354" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> D3D12_STATE_SUBOBJECT_TYPE_LOCAL_ROOT_SIGNATURE; </td>
      </tr>
      <tr>
        <td id="L3355" class="blob-num js-line-number" data-line-number="3355"></td>
        <td id="LC3355" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3356" class="blob-num js-line-number" data-line-number="3356"></td>
        <td id="LC3356" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-k">const</span> D3D12_STATE_SUBOBJECT&amp;() <span class="pl-k">const</span> { <span class="pl-k">return</span> *m_pSubobject; }</td>
      </tr>
      <tr>
        <td id="L3357" class="blob-num js-line-number" data-line-number="3357"></td>
        <td id="LC3357" class="blob-code blob-code-inner js-file-line">    operator ID3D12RootSignature*() <span class="pl-k">const</span> { <span class="pl-k">return</span> m_pRootSig.<span class="pl-c1">Get</span>(); }</td>
      </tr>
      <tr>
        <td id="L3358" class="blob-num js-line-number" data-line-number="3358"></td>
        <td id="LC3358" class="blob-code blob-code-inner js-file-line">private:</td>
      </tr>
      <tr>
        <td id="L3359" class="blob-num js-line-number" data-line-number="3359"></td>
        <td id="LC3359" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">Init</span>()</td>
      </tr>
      <tr>
        <td id="L3360" class="blob-num js-line-number" data-line-number="3360"></td>
        <td id="LC3360" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3361" class="blob-num js-line-number" data-line-number="3361"></td>
        <td id="LC3361" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">SUBOBJECT_HELPER_BASE::Init</span>();</td>
      </tr>
      <tr>
        <td id="L3362" class="blob-num js-line-number" data-line-number="3362"></td>
        <td id="LC3362" class="blob-code blob-code-inner js-file-line">        m_pRootSig = nullptr;</td>
      </tr>
      <tr>
        <td id="L3363" class="blob-num js-line-number" data-line-number="3363"></td>
        <td id="LC3363" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3364" class="blob-num js-line-number" data-line-number="3364"></td>
        <td id="LC3364" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>* <span class="pl-c1">Data</span>() { <span class="pl-k">return</span> m_pRootSig.<span class="pl-c1">GetAddressOf</span>(); }</td>
      </tr>
      <tr>
        <td id="L3365" class="blob-num js-line-number" data-line-number="3365"></td>
        <td id="LC3365" class="blob-code blob-code-inner js-file-line">    Microsoft::WRL::ComPtr&lt;ID3D12RootSignature&gt; m_pRootSig;</td>
      </tr>
      <tr>
        <td id="L3366" class="blob-num js-line-number" data-line-number="3366"></td>
        <td id="LC3366" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L3367" class="blob-num js-line-number" data-line-number="3367"></td>
        <td id="LC3367" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3368" class="blob-num js-line-number" data-line-number="3368"></td>
        <td id="LC3368" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L3369" class="blob-num js-line-number" data-line-number="3369"></td>
        <td id="LC3369" class="blob-code blob-code-inner js-file-line">class CD3DX12_STATE_OBJECT_CONFIG_SUBOBJECT </td>
      </tr>
      <tr>
        <td id="L3370" class="blob-num js-line-number" data-line-number="3370"></td>
        <td id="LC3370" class="blob-code blob-code-inner js-file-line">    : public CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE</td>
      </tr>
      <tr>
        <td id="L3371" class="blob-num js-line-number" data-line-number="3371"></td>
        <td id="LC3371" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3372" class="blob-num js-line-number" data-line-number="3372"></td>
        <td id="LC3372" class="blob-code blob-code-inner js-file-line">public:</td>
      </tr>
      <tr>
        <td id="L3373" class="blob-num js-line-number" data-line-number="3373"></td>
        <td id="LC3373" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_STATE_OBJECT_CONFIG_SUBOBJECT</span>()</td>
      </tr>
      <tr>
        <td id="L3374" class="blob-num js-line-number" data-line-number="3374"></td>
        <td id="LC3374" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3375" class="blob-num js-line-number" data-line-number="3375"></td>
        <td id="LC3375" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>();</td>
      </tr>
      <tr>
        <td id="L3376" class="blob-num js-line-number" data-line-number="3376"></td>
        <td id="LC3376" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3377" class="blob-num js-line-number" data-line-number="3377"></td>
        <td id="LC3377" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_STATE_OBJECT_CONFIG_SUBOBJECT</span>(CD3DX12_STATE_OBJECT_DESC&amp; ContainingStateObject)</td>
      </tr>
      <tr>
        <td id="L3378" class="blob-num js-line-number" data-line-number="3378"></td>
        <td id="LC3378" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3379" class="blob-num js-line-number" data-line-number="3379"></td>
        <td id="LC3379" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>();</td>
      </tr>
      <tr>
        <td id="L3380" class="blob-num js-line-number" data-line-number="3380"></td>
        <td id="LC3380" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">AddToStateObject</span>(ContainingStateObject);</td>
      </tr>
      <tr>
        <td id="L3381" class="blob-num js-line-number" data-line-number="3381"></td>
        <td id="LC3381" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3382" class="blob-num js-line-number" data-line-number="3382"></td>
        <td id="LC3382" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">SetFlags</span>(D3D12_STATE_OBJECT_FLAGS Flags)</td>
      </tr>
      <tr>
        <td id="L3383" class="blob-num js-line-number" data-line-number="3383"></td>
        <td id="LC3383" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3384" class="blob-num js-line-number" data-line-number="3384"></td>
        <td id="LC3384" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">Flags</span> = Flags;</td>
      </tr>
      <tr>
        <td id="L3385" class="blob-num js-line-number" data-line-number="3385"></td>
        <td id="LC3385" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3386" class="blob-num js-line-number" data-line-number="3386"></td>
        <td id="LC3386" class="blob-code blob-code-inner js-file-line">    D3D12_STATE_SUBOBJECT_TYPE <span class="pl-smi">Type</span>() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L3387" class="blob-num js-line-number" data-line-number="3387"></td>
        <td id="LC3387" class="blob-code blob-code-inner js-file-line">    { </td>
      </tr>
      <tr>
        <td id="L3388" class="blob-num js-line-number" data-line-number="3388"></td>
        <td id="LC3388" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> D3D12_STATE_SUBOBJECT_TYPE_STATE_OBJECT_CONFIG; </td>
      </tr>
      <tr>
        <td id="L3389" class="blob-num js-line-number" data-line-number="3389"></td>
        <td id="LC3389" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3390" class="blob-num js-line-number" data-line-number="3390"></td>
        <td id="LC3390" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-k">const</span> D3D12_STATE_SUBOBJECT&amp;() <span class="pl-k">const</span> { <span class="pl-k">return</span> *m_pSubobject; }</td>
      </tr>
      <tr>
        <td id="L3391" class="blob-num js-line-number" data-line-number="3391"></td>
        <td id="LC3391" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-k">const</span> D3D12_STATE_OBJECT_CONFIG&amp;() <span class="pl-k">const</span> { <span class="pl-k">return</span> m_Desc; }</td>
      </tr>
      <tr>
        <td id="L3392" class="blob-num js-line-number" data-line-number="3392"></td>
        <td id="LC3392" class="blob-code blob-code-inner js-file-line">private:</td>
      </tr>
      <tr>
        <td id="L3393" class="blob-num js-line-number" data-line-number="3393"></td>
        <td id="LC3393" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">Init</span>()</td>
      </tr>
      <tr>
        <td id="L3394" class="blob-num js-line-number" data-line-number="3394"></td>
        <td id="LC3394" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3395" class="blob-num js-line-number" data-line-number="3395"></td>
        <td id="LC3395" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">SUBOBJECT_HELPER_BASE::Init</span>();</td>
      </tr>
      <tr>
        <td id="L3396" class="blob-num js-line-number" data-line-number="3396"></td>
        <td id="LC3396" class="blob-code blob-code-inner js-file-line">        m_Desc = {};</td>
      </tr>
      <tr>
        <td id="L3397" class="blob-num js-line-number" data-line-number="3397"></td>
        <td id="LC3397" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3398" class="blob-num js-line-number" data-line-number="3398"></td>
        <td id="LC3398" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>* <span class="pl-c1">Data</span>() { <span class="pl-k">return</span> &amp;m_Desc; }</td>
      </tr>
      <tr>
        <td id="L3399" class="blob-num js-line-number" data-line-number="3399"></td>
        <td id="LC3399" class="blob-code blob-code-inner js-file-line">    D3D12_STATE_OBJECT_CONFIG m_Desc;</td>
      </tr>
      <tr>
        <td id="L3400" class="blob-num js-line-number" data-line-number="3400"></td>
        <td id="LC3400" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L3401" class="blob-num js-line-number" data-line-number="3401"></td>
        <td id="LC3401" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3402" class="blob-num js-line-number" data-line-number="3402"></td>
        <td id="LC3402" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L3403" class="blob-num js-line-number" data-line-number="3403"></td>
        <td id="LC3403" class="blob-code blob-code-inner js-file-line">class CD3DX12_NODE_MASK_SUBOBJECT </td>
      </tr>
      <tr>
        <td id="L3404" class="blob-num js-line-number" data-line-number="3404"></td>
        <td id="LC3404" class="blob-code blob-code-inner js-file-line">    : public CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE</td>
      </tr>
      <tr>
        <td id="L3405" class="blob-num js-line-number" data-line-number="3405"></td>
        <td id="LC3405" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3406" class="blob-num js-line-number" data-line-number="3406"></td>
        <td id="LC3406" class="blob-code blob-code-inner js-file-line">public:</td>
      </tr>
      <tr>
        <td id="L3407" class="blob-num js-line-number" data-line-number="3407"></td>
        <td id="LC3407" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_NODE_MASK_SUBOBJECT</span>()</td>
      </tr>
      <tr>
        <td id="L3408" class="blob-num js-line-number" data-line-number="3408"></td>
        <td id="LC3408" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3409" class="blob-num js-line-number" data-line-number="3409"></td>
        <td id="LC3409" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>();</td>
      </tr>
      <tr>
        <td id="L3410" class="blob-num js-line-number" data-line-number="3410"></td>
        <td id="LC3410" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3411" class="blob-num js-line-number" data-line-number="3411"></td>
        <td id="LC3411" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">CD3DX12_NODE_MASK_SUBOBJECT</span>(CD3DX12_STATE_OBJECT_DESC&amp; ContainingStateObject)</td>
      </tr>
      <tr>
        <td id="L3412" class="blob-num js-line-number" data-line-number="3412"></td>
        <td id="LC3412" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3413" class="blob-num js-line-number" data-line-number="3413"></td>
        <td id="LC3413" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Init</span>();</td>
      </tr>
      <tr>
        <td id="L3414" class="blob-num js-line-number" data-line-number="3414"></td>
        <td id="LC3414" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">AddToStateObject</span>(ContainingStateObject);</td>
      </tr>
      <tr>
        <td id="L3415" class="blob-num js-line-number" data-line-number="3415"></td>
        <td id="LC3415" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3416" class="blob-num js-line-number" data-line-number="3416"></td>
        <td id="LC3416" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">SetNodeMask</span>(UINT NodeMask)</td>
      </tr>
      <tr>
        <td id="L3417" class="blob-num js-line-number" data-line-number="3417"></td>
        <td id="LC3417" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3418" class="blob-num js-line-number" data-line-number="3418"></td>
        <td id="LC3418" class="blob-code blob-code-inner js-file-line">        m_Desc.<span class="pl-smi">NodeMask</span> = NodeMask;</td>
      </tr>
      <tr>
        <td id="L3419" class="blob-num js-line-number" data-line-number="3419"></td>
        <td id="LC3419" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3420" class="blob-num js-line-number" data-line-number="3420"></td>
        <td id="LC3420" class="blob-code blob-code-inner js-file-line">    D3D12_STATE_SUBOBJECT_TYPE <span class="pl-smi">Type</span>() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L3421" class="blob-num js-line-number" data-line-number="3421"></td>
        <td id="LC3421" class="blob-code blob-code-inner js-file-line">    { </td>
      </tr>
      <tr>
        <td id="L3422" class="blob-num js-line-number" data-line-number="3422"></td>
        <td id="LC3422" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> D3D12_STATE_SUBOBJECT_TYPE_NODE_MASK; </td>
      </tr>
      <tr>
        <td id="L3423" class="blob-num js-line-number" data-line-number="3423"></td>
        <td id="LC3423" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3424" class="blob-num js-line-number" data-line-number="3424"></td>
        <td id="LC3424" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-k">const</span> D3D12_STATE_SUBOBJECT&amp;() <span class="pl-k">const</span> { <span class="pl-k">return</span> *m_pSubobject; }</td>
      </tr>
      <tr>
        <td id="L3425" class="blob-num js-line-number" data-line-number="3425"></td>
        <td id="LC3425" class="blob-code blob-code-inner js-file-line">    operator <span class="pl-k">const</span> D3D12_NODE_MASK&amp;() <span class="pl-k">const</span> { <span class="pl-k">return</span> m_Desc; }</td>
      </tr>
      <tr>
        <td id="L3426" class="blob-num js-line-number" data-line-number="3426"></td>
        <td id="LC3426" class="blob-code blob-code-inner js-file-line">private:</td>
      </tr>
      <tr>
        <td id="L3427" class="blob-num js-line-number" data-line-number="3427"></td>
        <td id="LC3427" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-smi">Init</span>()</td>
      </tr>
      <tr>
        <td id="L3428" class="blob-num js-line-number" data-line-number="3428"></td>
        <td id="LC3428" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L3429" class="blob-num js-line-number" data-line-number="3429"></td>
        <td id="LC3429" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">SUBOBJECT_HELPER_BASE::Init</span>();</td>
      </tr>
      <tr>
        <td id="L3430" class="blob-num js-line-number" data-line-number="3430"></td>
        <td id="LC3430" class="blob-code blob-code-inner js-file-line">        m_Desc = {};</td>
      </tr>
      <tr>
        <td id="L3431" class="blob-num js-line-number" data-line-number="3431"></td>
        <td id="LC3431" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3432" class="blob-num js-line-number" data-line-number="3432"></td>
        <td id="LC3432" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>* <span class="pl-c1">Data</span>() { <span class="pl-k">return</span> &amp;m_Desc; }</td>
      </tr>
      <tr>
        <td id="L3433" class="blob-num js-line-number" data-line-number="3433"></td>
        <td id="LC3433" class="blob-code blob-code-inner js-file-line">    D3D12_NODE_MASK m_Desc;</td>
      </tr>
      <tr>
        <td id="L3434" class="blob-num js-line-number" data-line-number="3434"></td>
        <td id="LC3434" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L3435" class="blob-num js-line-number" data-line-number="3435"></td>
        <td id="LC3435" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3436" class="blob-num js-line-number" data-line-number="3436"></td>
        <td id="LC3436" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span> <span class="pl-c"><span class="pl-c">//</span> #ifndef D3DX12_NO_STATE_OBJECT_HELPERS</span></td>
      </tr>
      <tr>
        <td id="L3437" class="blob-num js-line-number" data-line-number="3437"></td>
        <td id="LC3437" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3438" class="blob-num js-line-number" data-line-number="3438"></td>
        <td id="LC3438" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span> <span class="pl-c"><span class="pl-c">//</span> defined( __cplusplus )</span></td>
      </tr>
      <tr>
        <td id="L3439" class="blob-num js-line-number" data-line-number="3439"></td>
        <td id="LC3439" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3440" class="blob-num js-line-number" data-line-number="3440"></td>
        <td id="LC3440" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span> <span class="pl-c"><span class="pl-c">//</span>__D3DX12_H__</span></td>
      </tr>
</table>

  <details class="details-reset details-overlay BlobToolbar position-absolute js-file-line-actions dropdown d-none" aria-hidden="true">
    <summary class="btn-octicon ml-0 px-2 p-0 bg-white border border-gray-dark rounded-1" aria-label="Inline file action toolbar">
      <svg class="octicon octicon-kebab-horizontal" viewBox="0 0 13 16" version="1.1" width="13" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.5 9a1.5 1.5 0 100-3 1.5 1.5 0 000 3zm5 0a1.5 1.5 0 100-3 1.5 1.5 0 000 3zM13 7.5a1.5 1.5 0 11-3 0 1.5 1.5 0 013 0z"/></svg>
    </summary>
    <details-menu>
      <ul class="BlobToolbar-dropdown dropdown-menu dropdown-menu-se mt-2" style="width:185px">
        <li>
          <clipboard-copy role="menuitem" class="dropdown-item" id="js-copy-lines" style="cursor:pointer;">
            Copy lines
          </clipboard-copy>
        </li>
        <li>
          <clipboard-copy role="menuitem" class="dropdown-item" id="js-copy-permalink" style="cursor:pointer;">
            Copy permalink
          </clipboard-copy>
        </li>
        <li><a class="dropdown-item js-update-url-with-hash" id="js-view-git-blame" role="menuitem" href="/microsoft/DirectX-Graphics-Samples/blame/29fb35649a449da30adcbfefee5d2e1a8258c718/Libraries/D3DX12/d3dx12.h">View git blame</a></li>
          <li><a class="dropdown-item" id="js-new-issue" role="menuitem" href="/microsoft/DirectX-Graphics-Samples/issues/new">Reference in new issue</a></li>
      </ul>
    </details-menu>
  </details>

  </div>

    </div>

  

  <details class="details-reset details-overlay details-overlay-dark">
    <summary data-hotkey="l" aria-label="Jump to line"></summary>
    <details-dialog class="Box Box--overlay d-flex flex-column anim-fade-in fast linejump" aria-label="Jump to line">
      <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="js-jump-to-line-form Box-body d-flex" action="" accept-charset="UTF-8" method="get"><input name="utf8" type="hidden" value="&#x2713;" />
        <input class="form-control flex-auto mr-3 linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" aria-label="Jump to line" autofocus>
        <button type="submit" class="btn" data-close-dialog>Go</button>
</form>    </details-dialog>
  </details>



  </div>
</div>

    </main>
  </div>
  

  </div>

        
<div class="footer container-lg width-full p-responsive" role="contentinfo">
  <div class="position-relative d-flex flex-row-reverse flex-lg-row flex-wrap flex-lg-nowrap flex-justify-center flex-lg-justify-between pt-6 pb-2 mt-6 f6 text-gray border-top border-gray-light ">
    <ul class="list-style-none d-flex flex-wrap col-12 col-lg-5 flex-justify-center flex-lg-justify-between mb-2 mb-lg-0">
      <li class="mr-3 mr-lg-0">&copy; 2019 GitHub, Inc.</li>
        <li class="mr-3 mr-lg-0"><a data-ga-click="Footer, go to terms, text:terms" href="https://github.com/site/terms">Terms</a></li>
        <li class="mr-3 mr-lg-0"><a data-ga-click="Footer, go to privacy, text:privacy" href="https://github.com/site/privacy">Privacy</a></li>
        <li class="mr-3 mr-lg-0"><a data-ga-click="Footer, go to security, text:security" href="https://github.com/security">Security</a></li>
        <li class="mr-3 mr-lg-0"><a href="https://githubstatus.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
        <li><a data-ga-click="Footer, go to help, text:help" href="https://help.github.com">Help</a></li>
    </ul>

    <a aria-label="Homepage" title="GitHub" class="footer-octicon d-none d-lg-block mx-lg-4" href="https://github.com">
      <svg height="24" class="octicon octicon-mark-github" viewBox="0 0 16 16" version="1.1" width="24" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0016 8c0-4.42-3.58-8-8-8z"/></svg>
</a>
   <ul class="list-style-none d-flex flex-wrap col-12 col-lg-5 flex-justify-center flex-lg-justify-between mb-2 mb-lg-0">
        <li class="mr-3 mr-lg-0"><a data-ga-click="Footer, go to contact, text:contact" href="https://github.com/contact">Contact GitHub</a></li>
        <li class="mr-3 mr-lg-0"><a href="https://github.com/pricing" data-ga-click="Footer, go to Pricing, text:Pricing">Pricing</a></li>
      <li class="mr-3 mr-lg-0"><a href="https://developer.github.com" data-ga-click="Footer, go to api, text:api">API</a></li>
      <li class="mr-3 mr-lg-0"><a href="https://training.github.com" data-ga-click="Footer, go to training, text:training">Training</a></li>
        <li class="mr-3 mr-lg-0"><a href="https://github.blog" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
        <li><a data-ga-click="Footer, go to about, text:about" href="https://github.com/about">About</a></li>

    </ul>
  </div>
  <div class="d-flex flex-justify-center pb-6">
    <span class="f6 text-gray-light"></span>
  </div>
</div>



  <div id="ajax-error-message" class="ajax-error-message flash flash-error">
    <svg class="octicon octicon-alert" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.893 1.5c-.183-.31-.52-.5-.887-.5s-.703.19-.886.5L.138 13.499a.98.98 0 000 1.001c.193.31.53.501.886.501h13.964c.367 0 .704-.19.877-.5a1.03 1.03 0 00.01-1.002L8.893 1.5zm.133 11.497H6.987v-2.003h2.039v2.003zm0-3.004H6.987V5.987h2.039v4.006z"/></svg>
    <button type="button" class="flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
      <svg class="octicon octicon-x" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z"/></svg>
    </button>
    You can’t perform that action at this time.
  </div>


    
    <script crossorigin="anonymous" integrity="sha512-70iNd/Gg+yLXPhfcelP5Zr8W3AA2fp2GsH2O/ZLbKoNOS51UGEKF/twbq+aS7x15R9F80cENGrgErdVG5frxqQ==" type="application/javascript" src="https://github.githubassets.com/assets/frameworks-ef488d77.js"></script>
    
    <script crossorigin="anonymous" async="async" integrity="sha512-zfhpmK5/eY3WaaOaHic6RIaeUtntjJbHUILU6uv3gFglx3Tfeyu3Y880GgCNhblT3TT3+jbXVNBiVLoli3eq7Q==" type="application/javascript" src="https://github.githubassets.com/assets/github-bootstrap-cdf86998.js"></script>
    
    
    
  <div class="js-stale-session-flash flash flash-warn flash-banner" hidden
    >
    <svg class="octicon octicon-alert" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.893 1.5c-.183-.31-.52-.5-.887-.5s-.703.19-.886.5L.138 13.499a.98.98 0 000 1.001c.193.31.53.501.886.501h13.964c.367 0 .704-.19.877-.5a1.03 1.03 0 00.01-1.002L8.893 1.5zm.133 11.497H6.987v-2.003h2.039v2.003zm0-3.004H6.987V5.987h2.039v4.006z"/></svg>
    <span class="js-stale-session-flash-signed-in" hidden>You signed in with another tab or window. <a href="">Reload</a> to refresh your session.</span>
    <span class="js-stale-session-flash-signed-out" hidden>You signed out in another tab or window. <a href="">Reload</a> to refresh your session.</span>
  </div>
  <template id="site-details-dialog">
  <details class="details-reset details-overlay details-overlay-dark lh-default text-gray-dark hx_rsm" open>
    <summary role="button" aria-label="Close dialog"></summary>
    <details-dialog class="Box Box--overlay d-flex flex-column anim-fade-in fast hx_rsm-dialog hx_rsm-modal">
      <button class="Box-btn-octicon m-0 btn-octicon position-absolute right-0 top-0" type="button" aria-label="Close dialog" data-close-dialog>
        <svg class="octicon octicon-x" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z"/></svg>
      </button>
      <div class="octocat-spinner my-6 js-details-dialog-spinner"></div>
    </details-dialog>
  </details>
</template>

  <div class="Popover js-hovercard-content position-absolute" style="display: none; outline: none;" tabindex="0">
  <div class="Popover-message Popover-message--bottom-left Popover-message--large Box box-shadow-large" style="width:360px;">
  </div>
</div>

  <div aria-live="polite" class="js-global-screen-reader-notice sr-only"></div>

  </body>
</html>

