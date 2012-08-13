= Doom 3 for MacOS X.8

I started this fork because I wanted to play Doom 3 on my Mountain Lion installation and couldn't
find a working binary or source port.

Fixes so far:

- Fullscreen support.

  This was completely broken in more recent versions of MacOS. I also fixes some problems I had
  when switching to different applications. The Command key can be used to release the mouse cursor.
  If you hit Command+Tab while in fullscreen mode, the game window will move into the background
  (but stays visible!) while other applications are active. When you click back into the game window,
  the cursor will be captured again.

  If you're playing in windowed mode, you can move the window by dragging the title bar when the
  cursor is "released". This sounds obvious but it wasn't possible before.

- Support for vanilla Doom 3 ("game") and Resurrection of Evil ("d3xp").

  Both shared libs are compiled and included in the app bundle. A different dylib is loaded, based on
  the "fs_game" variable. You can also switch to the expansion in-game.

- Better behaviour when launching in quitting the application.

  On launch, Doom 3 doesn't jump into the foreground when you're still using other apps. When quitting,
  the input subsystem is properly destroyed, releasing the mouse cursor.

- Support for the Apogee Duet as an external sound device.

  The buffer size needed to be reduced for this to work properly. It just stayed silent before.

I'll try to continue fixing any issue I encounter while playing through the game...

= Installation and configuration notes

When building the game, make sure you actually build the "Release" build, as the "Debug" build tends
to be quite slow.

It doesn't really matter where you put the App Bundle. For the game to find it's data, you have to
copy or link the original game directory to

    ~/Library/Application\ Support/Doom\ 3

Many options, especially graphics stuff, can't be properly configured by using the menus. Instead,
the in-game console has to be used. Activate it by adding

    com_allowConsole "1"

to your config file.

Example configuration for a 1920x1200 display:

    r_mode -1
    r_aspectRatio 2
    r_customHeight 1200
    r_customWidth 1920
    r_fullscreen 1
    
