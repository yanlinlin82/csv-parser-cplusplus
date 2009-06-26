
dnl Mandatory Autoconf Initialization Macro
AC_INIT(csv_parser, 1.0, israel.ekpo@bonniercorp.com, csv_parser)

AC_DEFUN([AX_EXPAND_PREFIX],[dnl

  test "x$prefix" = xNONE && prefix=$ac_default_prefix
  
  test "x$exec_prefix" = xNONE && exec_prefix='${prefix}'
])

AX_EXPAND_PREFIX

AM_INIT_AUTOMAKE(csv_parser, 1.0)

AC_PREREQ(2.61)

dnl Checking if the compiler supports C++
AC_LANG(C++)

dnl Check for the C++ compiler
AC_PROG_CXX

AC_PROG_LIBTOOL

AC_CHECK_PROG(libtool_path, libtool, true, false)

AC_OUTPUT(Makefile include/csv_parser/Makefile)

AC_OUTPUT(csv_parser-config)
