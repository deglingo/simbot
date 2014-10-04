#

lib_LTLIBRARIES = libsimbot.la

libsimbot_la_CFLAGS = -I$(top_srcdir) -I$(top_builddir) @LOS_CFLAGS@

include_HEADERS = \
	simbot.h

pkginclude_HEADERS = \
	sbbase.h \
	sbsim.h sbsim-def.h \
	sbbot.h sbbot-def.h

libsimbot_la_SOURCES = \
	sbbase.c \
	sbsim.c \
	sbbot.c

BUILT_SOURCES = \
	sbsim-def.h sbsim.inl \
	sbbot-def.h sbbot.inl

sbsim-def.h sbsim.inl \
sbbot-def.h sbbot.inl \
: sbtypes.stamp-h

sbtypes.stamp-h: sbtypes.in
	cpp $< | $(LOS_GENTYPES)
	echo >$@
