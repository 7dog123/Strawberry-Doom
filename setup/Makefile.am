
gamesdir = $(prefix)/games

AM_CFLAGS = -I../textscreen -I../src @SDLMIXER_CFLAGS@

games_PROGRAMS = strawberry-setup

SOURCE_FILES =                                  \
    compatibility.c   compatibility.h           \
    configfile.c      configfile.h              \
    display.c         display.h                 \
    joystick.c        joystick.h                \
    keyboard.c        keyboard.h                \
    m_argv.c          m_argv.h                  \
    mainmenu.c                                  \
    mouse.c           mouse.h                   \
    multiplayer.c     multiplayer.h             \
    sound.c           sound.h                   \
    execute.c         execute.h                 \
    txt_joybinput.c   txt_joybinput.h           \
    txt_keyinput.c    txt_keyinput.h            \
    txt_mouseinput.c  txt_mouseinput.h

EXTRA_DIST=                                     \
    setup_icon.c                                \
    setup-manifest.xml

if HAVE_WINDRES
strawberry_setup_SOURCES=$(SOURCE_FILES) setup-res.rc
else
strawberry_setup_SOURCES=$(SOURCE_FILES)
endif

strawberry_setup_LDADD =                              \
                       ../wince/libc_wince.a         \
                       ../textscreen/libtextscreen.a \
                       @SDLMIXER_LIBS@               \
                       @LDFLAGS@

.rc.o:
	$(WINDRES) $^ -o $@
%.o : %.rc
	$(WINDRES) $^ -o $@

if HAVE_PYTHON

setup_icon.c : ../data/setup8.ico
	../data/convert-icon $^ $@

endif

