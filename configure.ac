AC_INIT([simbot], [0.0.0])
AM_INIT_AUTOMAKE

: ${CFLAGS:=-g -O0 -Wall}

AC_SUBST([pkgconfigdir], ['${libdir}/pkgconfig'])

AC_PROG_CC
AM_PROG_CC_C_O
LT_INIT

PKG_CHECK_MODULES([LOS], [los])
AC_PATH_PROG([LOS_GENTYPES], [los-gentypes])
test x"$LOS_GENTYPES" != x || AC_ERROR([los-gentypes not found])

AC_SUBST([LOS_VGSUPPDIR])
AC_MSG_CHECKING([for los suppresions dir])
if LOS_VGSUPPDIR=`$PKG_CONFIG --variable=vgsuppdir los`; then
    AC_MSG_RESULT([$LOS_VGSUPPDIR])
else
    AC_MSG_RESULT([no])
    AC_ERROR([LOS_VGSUPPDIR not found])
fi

# test suite
AM_PIFTEST_SUITE([test])

AC_CONFIG_FILES([ \
  Makefile \
  simbot/Makefile \
  test/Makefile \
])
AC_CONFIG_FILES([simbot.pc])
AC_OUTPUT
