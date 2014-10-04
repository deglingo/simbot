#

lib_LTLIBRARIES = libsimbot.la

libsimbot_la_CFLAGS = -I$(top_srcdir) -I$(top_builddir) @LOS_CFLAGS@

libsimbot_la_SOURCES = \
	sbbase.c \
	sbsim.c

BUILT_SOURCES = \
	sbsim-def.h sbsim.inl

sbsim-def.h sbsim.inl \
: sbtypes.stamp-h

sbtypes.stamp-h: sbtypes.in
	cpp $< | $(LOS_GENTYPES)
	echo >$@
