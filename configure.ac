AC_INIT([simbot], [0.0.0])
AM_INIT_AUTOMAKE

: ${CFLAGS:=-g -O0 -Wall}

AC_SUBST([pkgconfigdir], ['${libdir}/pkgconfig'])

AC_PROG_CC
AM_PROG_CC_C_O
LT_INIT

PKG_CHECK_MODULES([LOS], [los])

# test suite
AM_PIFTEST_SUITE([test])

AC_CONFIG_FILES([ \
  Makefile \
  simbot/Makefile \
  test/Makefile \
])
AC_CONFIG_FILES([simbot.pc])
AC_OUTPUT
