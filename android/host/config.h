/* config.h.  Generated from config.in by configure.  */
/* config.in.  Generated from configure.ac by autoheader.  */

/* Configuration/build date */
#define DATE "2012-08-19"

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#define ENABLE_NLS 1

/* make -P prologue-searching default */
/* #undef ENABLE_PROLOGUES */

/* Define to 1 to enable process.mark probes in stap, staprun, stapio. */
#define ENABLE_SDT_PROBES 1

/* Define to 1 if you have the avahi libraries. */
/* #undef HAVE_AVAHI */

/* Define to 1 if you have the <boost/shared_ptr.hpp> header file. */
/* #undef HAVE_BOOST_SHARED_PTR_HPP */

/* Define to 1 if you have the <crash/defs.h> header file. */
/* #undef HAVE_CRASH_DEFS_H */

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
#define HAVE_DCGETTEXT 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define if you have the iconv() function and it works. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `dw' library (-ldw). */
/* #undef HAVE_LIBDW */

/* have librpm */
/* #undef HAVE_LIBRPM */

/* have librpmio */
/* #undef HAVE_LIBRPMIO */

/* Define to 1 if you have the `sqlite3' library (-lsqlite3). */
/* #undef HAVE_LIBSQLITE3 */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the nss libraries. */
/* #undef HAVE_NSS */

/* Define to 1 if you have the `ppoll' function. */
#define HAVE_PPOLL 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <tr1/memory> header file. */
#define HAVE_TR1_MEMORY 1

/* Define to 1 if you have the <tr1/unordered_map> header file. */
#define HAVE_TR1_UNORDERED_MAP 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <spawn.h> header file. */
#define HAVE_SPAWN_H 1

/* Define to 1 if you have the <libintl.h> header file. */
#define HAVE_LIBINTL_H 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Name of package */
#define PACKAGE "systemtap"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "systemtap@sourceware.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "systemtap"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "systemtap 2.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "systemtap"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.0"

/* extra stap version code */
#define STAP_EXTRA_VERSION ""

/* Define to 1 if the C compiler supports function prototypes. */
#define PROTOTYPES 1

/* configure prefix location */
#define STAP_PREFIX "/tmp/systemtap"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Version number of package */
#define VERSION "2.0"

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define like PROTOTYPES; this can be used by system headers. */
#define __PROTOTYPES 1
