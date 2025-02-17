#include <proto/exec.h>
#include <dos/dosextens.h>
#include <dos.h>
#include <proto/dos.h>

#include "interface.h"

asm(".section	\".text\"             \n\
	.align 2                          \n\
	.globl __Clib4Call                \n\
	.type  __Clib4Call, @function     \n\
__Clib4Call:                          \n\
	 lis   %r11, IClib4@ha            \n\
	 lwz   %r0, IClib4@l(%r11)        \n\
	 lwzx  %r11, %r12, %r0            \n\
	 mtctr %r11                       \n\
	 bctr                             \n\
	.size	__Clib4Call, .-__Clib4Call");

Clib4Call(__getClib4, 80);
//Clib4Call(__getGlobalClib4, 84);
Clib4Call(__translate_amiga_to_unix_path_name, 88);
Clib4Call(__translate_unix_to_amiga_path_name, 92);
//Clib4Call(__restore_path_name, 96);
Clib4Call(__print_termination_message, 100);

/* Functions defined stubs starts here */
Clib4Call(argz_create, 116);
Clib4Call(argz_create_sep, 120);
Clib4Call(argz_count, 124);
Clib4Call(argz_extract, 128);
Clib4Call(argz_stringify, 132);
Clib4Call(argz_add, 136);
Clib4Call(argz_add_sep, 140);
Clib4Call(argz_append, 144);
Clib4Call(argz_delete, 148);
Clib4Call(argz_insert, 152);
Clib4Call(argz_next, 156);
Clib4Call(argz_replace, 160);
Clib4Call(__assertion_failure, 164);
Clib4Call(cacos, 168);
Clib4Call(cacosf, 172);
Clib4Call(cacosl, 176);
Clib4Call(casin, 180);
Clib4Call(casinf, 184);
Clib4Call(casinl, 188);
Clib4Call(catan, 192);
Clib4Call(catanf, 196);
Clib4Call(catanl, 200);
Clib4Call(ccos, 204);
Clib4Call(ccosf, 208);
Clib4Call(ccosl, 212);
Clib4Call(csin, 216);
Clib4Call(csinf, 220);
Clib4Call(csinl, 224);
Clib4Call(ctan, 228);
Clib4Call(ctanf, 232);
Clib4Call(ctanl, 236);
Clib4Call(cacosh, 240);
Clib4Call(cacoshf, 244);
Clib4Call(cacoshl, 248);
Clib4Call(casinh, 252);
Clib4Call(casinhf, 256);
Clib4Call(casinhl, 260);
Clib4Call(catanh, 264);
Clib4Call(catanhf, 268);
Clib4Call(catanhl, 272);
Clib4Call(ccosh, 276);
Clib4Call(ccoshf, 280);
Clib4Call(ccoshl, 284);
Clib4Call(csinh, 288);
Clib4Call(csinhf, 292);
Clib4Call(csinhl, 296);
Clib4Call(ctanh, 300);
Clib4Call(ctanhf, 304);
Clib4Call(ctanhl, 308);
Clib4Call(cexp, 312);
Clib4Call(cexpf, 316);
Clib4Call(cexpl, 320);
Clib4Call(clog, 324);
Clib4Call(clogf, 328);
Clib4Call(clogl, 332);
Clib4Call(cabs, 336);
Clib4Call(cabsf, 340);
Clib4Call(cabsl, 344);
Clib4Call(cpow, 348);
Clib4Call(cpowf, 352);
Clib4Call(cpowl, 356);
Clib4Call(csqrt, 360);
Clib4Call(csqrtf, 364);
Clib4Call(csqrtl, 368);
Clib4Call(carg, 372);
Clib4Call(cargf, 376);
Clib4Call(cargl, 380);
Clib4Call(conj, 384);
Clib4Call(conjf, 388);
Clib4Call(conjl, 392);
Clib4Call(cproj, 396);
Clib4Call(cprojf, 400);
Clib4Call(cprojl, 404);
Clib4Call(cimag, 408);
Clib4Call(cimagf, 412);
Clib4Call(cimagl, 416);
Clib4Call(creal, 420);
Clib4Call(crealf, 424);
Clib4Call(creall, 428);
Clib4Call(crypt_r, 432);
Clib4Call(isalnum, 436);
Clib4Call(isalpha, 440);
Clib4Call(iscntrl, 444);
Clib4Call(isdigit, 448);
Clib4Call(isgraph, 452);
Clib4Call(islower, 456);
Clib4Call(isprint, 460);
Clib4Call(ispunct, 464);
Clib4Call(isspace, 468);
Clib4Call(isupper, 472);
Clib4Call(isxdigit, 476);
Clib4Call(tolower, 480);
Clib4Call(toupper, 484);
Clib4Call(isblank, 488);
Clib4Call(isascii, 492);
Clib4Call(toascii, 496);
Clib4Call(opendir, 500);
Clib4Call(readdir, 504);
Clib4Call(rewinddir, 508);
Clib4Call(closedir, 512);
Clib4Call(fdopendir, 516);
Clib4Call(alphasort, 520);
Clib4Call(dirfd, 524);
Clib4Call(scandir, 528);
Clib4Call(readdir_r, 532);
Clib4Call(readdir64_r, 536);
Clib4Call(dlclose, 540);
Clib4Call(dlerror, 544);
Clib4Call(dlopen, 548);
Clib4Call(dlsym, 552);
Clib4Call(envz_entry, 556);
Clib4Call(envz_get, 560);
Clib4Call(envz_add, 564);
Clib4Call(envz_merge, 568);
Clib4Call(envz_remove, 572);
Clib4Call(envz_strip, 576);
Clib4Call(warn, 580);
Clib4Call(vwarn, 584);
Clib4Call(warnx, 588);
Clib4Call(vwarnx, 592);
Clib4Call(err, 596);
Clib4Call(verr, 600);
Clib4Call(errx, 604);
Clib4Call(verrx, 608);
Clib4Call(__errno, 612);
Clib4Call(__h_errno, 616);
Clib4Call(open, 620);
Clib4Call(openat, 624);
Clib4Call(creat, 628);
Clib4Call(close, 632);
Clib4Call(read, 636);
Clib4Call(write, 640);
Clib4Call(fcntl, 644);
Clib4Call(fnmatch, 648);
Clib4Call(ftw, 652);
Clib4Call(nftw, 656);
Clib4Call(glob, 660);
Clib4Call(globfree, 664);
Clib4Call(endgrent, 668);
Clib4Call(getgrent, 672);
Clib4Call(getgrgid, 676);
Clib4Call(getgrnam, 680);
Clib4Call(setgrent, 684);
Clib4Call(iconv_open, 688);
Clib4Call(iconv, 692);
Clib4Call(iconv_close, 696);
Clib4Call(getifaddrs, 700);
Clib4Call(freeifaddrs, 704);
Clib4Call(imaxabs, 708);
Clib4Call(imaxdiv, 712);
Clib4Call(strtoimax, 716);
Clib4Call(strtoumax, 720);
Clib4Call(wcstoimax, 724);
Clib4Call(wcstoumax, 728);
Clib4Call(nl_langinfo, 732);
Clib4Call(basename, 736);
Clib4Call(dirname, 740);
Clib4Call(setlocale, 744);
Clib4Call(localeconv, 748);
Clib4Call(memalign, 752);
Clib4Call(acos, 756);
Clib4Call(asin, 760);
Clib4Call(atan, 764);
Clib4Call(atan2, 768);
Clib4Call(ceil, 772);
Clib4Call(cos, 776);
Clib4Call(cosh, 780);
Clib4Call(sincos, 784);
Clib4Call(sincosf, 788);
Clib4Call(sincosl, 792);
Clib4Call(exp10, 796);
Clib4Call(exp10f, 800);
Clib4Call(exp10l, 804);
Clib4Call(exp, 808);
Clib4Call(fabs, 812);
Clib4Call(floor, 816);
Clib4Call(fmod, 820);
Clib4Call(frexp, 824);
Clib4Call(ldexp, 828);
Clib4Call(log, 832);
Clib4Call(log10, 836);
Clib4Call(modf, 840);
Clib4Call(pow, 844);
Clib4Call(pow10, 848);
Clib4Call(pow10f, 852);
Clib4Call(pow10l, 856);
Clib4Call(sin, 860);
Clib4Call(sinh, 864);
Clib4Call(sqrt, 868);
Clib4Call(tan, 872);
Clib4Call(tanh, 876);
Clib4Call(j0, 880);
Clib4Call(y0, 884);
Clib4Call(j0f, 888);
Clib4Call(y0f, 892);
Clib4Call(j1, 896);
Clib4Call(y1, 900);
Clib4Call(j1f, 904);
Clib4Call(y1f, 908);
Clib4Call(jn, 912);
Clib4Call(yn, 916);
Clib4Call(jnf, 920);
Clib4Call(ynf, 924);
Clib4Call(__fpclassify_float, 928);
Clib4Call(__fpclassify_double, 932);
Clib4Call(__fpclassify_long_double, 936);
Clib4Call(__signbit_float, 940);
Clib4Call(__signbit_double, 944);
Clib4Call(__signbit_long_double, 948);
Clib4Call(__signgam, 952);
Clib4Call(acosf, 956);
Clib4Call(asinf, 960);
Clib4Call(atanf, 964);
Clib4Call(atan2f, 968);
Clib4Call(ceilf, 972);
Clib4Call(cosf, 976);
Clib4Call(coshf, 980);
Clib4Call(expf, 984);
Clib4Call(fabsf, 988);
Clib4Call(floorf, 992);
Clib4Call(fmodf, 996);
Clib4Call(frexpf, 1000);
Clib4Call(ldexpf, 1004);
Clib4Call(logf, 1008);
Clib4Call(log10f, 1012);
Clib4Call(modff, 1016);
Clib4Call(powf, 1020);
Clib4Call(sinf, 1024);
Clib4Call(sinhf, 1028);
Clib4Call(sqrtf, 1032);
Clib4Call(tanf, 1036);
Clib4Call(tanhf, 1040);
Clib4Call(acoshf, 1044);
Clib4Call(asinhf, 1048);
Clib4Call(atanhf, 1052);
Clib4Call(cbrtf, 1056);
Clib4Call(copysignf, 1060);
Clib4Call(erfcf, 1064);
Clib4Call(erff, 1068);
Clib4Call(expm1f, 1072);
Clib4Call(fdimf, 1076);
Clib4Call(fmaf, 1080);
Clib4Call(fmaxf, 1084);
Clib4Call(fminf, 1088);
Clib4Call(hypotf, 1092);
Clib4Call(lgammaf, 1096);
Clib4Call(log1pf, 1100);
Clib4Call(logbf, 1104);
Clib4Call(llrintf, 1108);
Clib4Call(lrintf, 1112);
Clib4Call(lroundf, 1116);
Clib4Call(llround, 1120);
Clib4Call(llroundf, 1124);
Clib4Call(nanf, 1128);
Clib4Call(nearbyintf, 1132);
Clib4Call(nextafterf, 1136);
Clib4Call(nexttowardf, 1140);
Clib4Call(remainderf, 1144);
Clib4Call(remquof, 1148);
Clib4Call(rintf, 1152);
Clib4Call(roundf, 1156);
Clib4Call(scalblnf, 1160);
Clib4Call(scalbnf, 1164);
Clib4Call(tgammaf, 1168);
Clib4Call(truncf, 1172);
Clib4Call(ilogbf, 1176);
Clib4Call(finite, 1180);
Clib4Call(acosh, 1184);
Clib4Call(asinh, 1188);
Clib4Call(atanh, 1192);
Clib4Call(cbrt, 1196);
Clib4Call(copysign, 1200);
Clib4Call(erf, 1204);
Clib4Call(erfc, 1208);
Clib4Call(expm1, 1212);
Clib4Call(fdim, 1216);
Clib4Call(fma, 1220);
Clib4Call(fmax, 1224);
Clib4Call(fmin, 1228);
Clib4Call(hypot, 1232);
Clib4Call(lgamma, 1236);
Clib4Call(log1p, 1240);
Clib4Call(logb, 1244);
Clib4Call(llrint, 1248);
Clib4Call(lrint, 1252);
Clib4Call(lround, 1256);
Clib4Call(nan, 1260);
Clib4Call(nearbyint, 1264);
Clib4Call(nexttoward, 1268);
Clib4Call(nextafter, 1272);
Clib4Call(remainder, 1276);
Clib4Call(remquo, 1280);
Clib4Call(rint, 1284);
Clib4Call(round, 1288);
Clib4Call(scalbln, 1292);
Clib4Call(scalbn, 1296);
Clib4Call(tgamma, 1300);
Clib4Call(trunc, 1304);
Clib4Call(ilogb, 1308);
Clib4Call(exp2f, 1312);
Clib4Call(exp2, 1316);
Clib4Call(exp2l, 1320);
Clib4Call(log2, 1324);
Clib4Call(log2f, 1328);
Clib4Call(log2l, 1332);
Clib4Call(acosl, 1336);
Clib4Call(asinl, 1340);
Clib4Call(atanl, 1344);
Clib4Call(atan2l, 1348);
Clib4Call(ceill, 1352);
Clib4Call(cosl, 1356);
Clib4Call(coshl, 1360);
Clib4Call(expl, 1364);
Clib4Call(fabsl, 1368);
Clib4Call(floorl, 1372);
Clib4Call(fmodl, 1376);
Clib4Call(frexpl, 1380);
Clib4Call(ldexpl, 1384);
Clib4Call(logl, 1388);
Clib4Call(log10l, 1392);
Clib4Call(modfl, 1396);
Clib4Call(powl, 1400);
Clib4Call(sinl, 1404);
Clib4Call(sinhl, 1408);
Clib4Call(sqrtl, 1412);
Clib4Call(tanl, 1416);
Clib4Call(tanhl, 1420);
Clib4Call(acoshl, 1424);
Clib4Call(asinhl, 1428);
Clib4Call(atanhl, 1432);
Clib4Call(cbrtl, 1436);
Clib4Call(copysignl, 1440);
Clib4Call(erfcl, 1444);
Clib4Call(erfl, 1448);
Clib4Call(expm1l, 1452);
Clib4Call(fdiml, 1456);
Clib4Call(fmal, 1460);
Clib4Call(fmaxl, 1464);
Clib4Call(fminl, 1468);
Clib4Call(hypotl, 1472);
Clib4Call(lgammal, 1476);
Clib4Call(log1pl, 1480);
Clib4Call(logbl, 1484);
Clib4Call(llrintl, 1488);
Clib4Call(lrintl, 1492);
Clib4Call(llroundl, 1496);
Clib4Call(lroundl, 1500);
Clib4Call(nanl, 1504);
Clib4Call(nearbyintl, 1508);
Clib4Call(nextafterl, 1512);
Clib4Call(nexttowardl, 1516);
Clib4Call(remainderl, 1520);
Clib4Call(remquol, 1524);
Clib4Call(rintl, 1528);
Clib4Call(roundl, 1532);
Clib4Call(scalblnl, 1536);
Clib4Call(scalbnl, 1540);
Clib4Call(tgammal, 1544);
Clib4Call(truncl, 1548);
Clib4Call(ilogbl, 1552);
Clib4Call(gethostbyaddr, 1556);
Clib4Call(gethostbyname, 1560);
Clib4Call(getnetbyaddr, 1564);
Clib4Call(getnetbyname, 1568);
Clib4Call(getprotobyname, 1572);
Clib4Call(getprotobynumber, 1576);
Clib4Call(getservbyname, 1580);
Clib4Call(getservbyport, 1584);
Clib4Call(herror, 1588);
Clib4Call(hstrerror, 1592);
Clib4Call(gethostbyname_r, 1596);
Clib4Call(gethostbyname2_r, 1600);
Clib4Call(gethostbyname2, 1604);
Clib4Call(gethostbyaddr_r, 1608);
Clib4Call(getservbyport_r, 1612);
Clib4Call(getservbyname_r, 1616);
Clib4Call(gai_strerror, 1620);
Clib4Call(getaddrinfo, 1624);
Clib4Call(freeaddrinfo, 1628);
Clib4Call(getnameinfo, 1632);
Clib4Call(catopen, 1636);
Clib4Call(catgets, 1640);
Clib4Call(catclose, 1644);
Clib4Call(poll, 1648);
Clib4Call(endpwent, 1652);
Clib4Call(getpwent, 1656);
Clib4Call(getpwnam, 1660);
Clib4Call(getpwnam_r, 1664);
Clib4Call(getpwuid, 1668);
Clib4Call(getpwuid_r, 1672);
Clib4Call(setpwent, 1676);
Clib4Call(regcomp, 1680);
Clib4Call(regexec, 1684);
Clib4Call(regfree, 1688);
Clib4Call(regerror, 1692);
Clib4Call(__res_state, 1696);
Clib4Call(res_init, 1700);
Clib4Call(res_query, 1704);
Clib4Call(res_querydomain, 1708);
Clib4Call(res_search, 1712);
Clib4Call(res_mkquery, 1716);
Clib4Call(res_send, 1720);
Clib4Call(dn_comp, 1724);
Clib4Call(dn_expand, 1728);
Clib4Call(dn_skipname, 1732);
Clib4Call(hcreate, 1736);
Clib4Call(hdestroy, 1740);
Clib4Call(hsearch, 1744);
Clib4Call(hcreate_r, 1748);
Clib4Call(hdestroy_r, 1752);
Clib4Call(hsearch_r, 1756);
Clib4Call(lfind, 1760);
Clib4Call(lsearch, 1764);
Clib4Call(tdelete, 1768);
Clib4Call(tdestroy, 1772);
Clib4Call(tfind, 1776);
Clib4Call(tsearch, 1780);
Clib4Call(twalk, 1784);
Clib4Call(setjmp, 1788);
Clib4Call(__sigsetjmp, 1792);
Clib4Call(_setjmp, 1796);
Clib4Call(longjmp, 1800);
Clib4Call(_longjmp, 1804);
Clib4Call(siglongjmp, 1808);
Clib4Call(__sigjmp_save, 1812);
Clib4Call(signal, 1816);
Clib4Call(raise, 1820);
Clib4Call(sigmask, 1824);
Clib4Call(sigblock, 1828);
Clib4Call(sigsetmask, 1832);
Clib4Call(sigprocmask, 1836);
Clib4Call(sigismember, 1840);
Clib4Call(sigemptyset, 1844);
Clib4Call(sigfillset, 1848);
Clib4Call(sigdelset, 1852);
Clib4Call(sigaddset, 1856);
Clib4Call(kill, 1860);
Clib4Call(sigaction, 1864);
Clib4Call(perror, 1868);
Clib4Call(fdopen64, 1872);
Clib4Call(fopen64, 1876);
Clib4Call(freopen64, 1880);
Clib4Call(ftello64, 1884);
Clib4Call(fseeko64, 1888);
Clib4Call(fgetpos64, 1892);
Clib4Call(fsetpos64, 1896);
Clib4Call(tmpfile64, 1900);
Clib4Call(fopen, 1904);
Clib4Call(fclose, 1908);
Clib4Call(fflush, 1912);
Clib4Call(freopen, 1916);
Clib4Call(setvbuf, 1920);
Clib4Call(setbuf, 1924);
Clib4Call(fseek, 1928);
Clib4Call(ftell, 1932);
Clib4Call(rewind, 1936);
Clib4Call(fgetpos, 1940);
Clib4Call(fsetpos, 1944);
Clib4Call(fgetc, 1948);
Clib4Call(getc, 1952);
Clib4Call(getchar, 1956);
Clib4Call(ungetc, 1960);
Clib4Call(fputc, 1964);
Clib4Call(putc, 1968);
Clib4Call(putchar, 1972);
Clib4Call(fgets, 1976);
Clib4Call(gets, 1980);
Clib4Call(fscanf, 1984);
Clib4Call(scanf, 1988);
Clib4Call(sscanf, 1992);
Clib4Call(fputs, 1996);
Clib4Call(puts, 2000);
Clib4Call(dprintf, 2004);
Clib4Call(fprintf, 2008);
Clib4Call(printf, 2012);
Clib4Call(sprintf, 2016);
Clib4Call(vdprintf, 2020);
Clib4Call(vfprintf, 2024);
Clib4Call(vprintf, 2028);
Clib4Call(vsprintf, 2032);
Clib4Call(fread, 2036);
Clib4Call(fwrite, 2040);
Clib4Call(feof, 2044);
Clib4Call(ferror, 2048);
Clib4Call(clearerr, 2052);
Clib4Call(rename, 2056);
Clib4Call(remove, 2060);
Clib4Call(tmpfile, 2064);
Clib4Call(tmpnam, 2068);
Clib4Call(tempnam, 2072);
Clib4Call(ctermid, 2076);
Clib4Call(__flush, 2080);
Clib4Call(__unlockfile, 2084);
Clib4Call(getc_unlocked, 2088);
Clib4Call(getchar_unlocked, 2092);
Clib4Call(putc_unlocked, 2096);
Clib4Call(putchar_unlocked, 2100);
Clib4Call(getline, 2104);
Clib4Call(getdelim, 2108);
Clib4Call(fdopen, 2112);
Clib4Call(fileno, 2116);
Clib4Call(asprintf, 2120);
Clib4Call(vsnprintf, 2124);
Clib4Call(pclose, 2128);
Clib4Call(popen, 2132);
Clib4Call(fseeko, 2136);
Clib4Call(ftello, 2140);
Clib4Call(flockfile, 2144);
Clib4Call(funlockfile, 2148);
Clib4Call(ftrylockfile, 2152);
Clib4Call(vasprintf, 2156);
Clib4Call(vfscanf, 2160);
Clib4Call(vsscanf, 2164);
Clib4Call(vscanf, 2168);
Clib4Call(snprintf, 2172);
Clib4Call(_flushlbf, 2176);
Clib4Call(__fsetlocking, 2180);
Clib4Call(__fwriting, 2184);
Clib4Call(__freading, 2188);
Clib4Call(__freadable, 2192);
Clib4Call(__fwritable, 2196);
Clib4Call(__flbf, 2200);
Clib4Call(__fbufsize, 2204);
Clib4Call(__fpending, 2208);
Clib4Call(__fpurge, 2212);
Clib4Call(fpurge, 2216);
Clib4Call(__fseterr, 2220);
Clib4Call(__freadahead, 2224);
Clib4Call(__freadptrinc, 2228);
Clib4Call(__mb_cur_max, 2232);
Clib4Call(__getprogname, 2236);
Clib4Call(mblen, 2240);
Clib4Call(mbtowc, 2244);
Clib4Call(_mbtowc_r, 2248);
Clib4Call(_mbstowcs_r, 2252);
Clib4Call(wctomb, 2256);
Clib4Call(_wctomb_r, 2260);
Clib4Call(mbstowcs, 2264);
Clib4Call(wcstombs, 2268);
Clib4Call(_wcstombs_r, 2272);
Clib4Call(malloc, 2276);
Clib4Call(calloc, 2280);
Clib4Call(free, 2284);
Clib4Call(realloc, 2288);
Clib4Call(valloc, 2292);
Clib4Call(aligned_alloc, 2296);
Clib4Call(posix_memalign, 2300);
Clib4Call(abs, 2304);
Clib4Call(labs, 2308);
Clib4Call(div, 2312);
Clib4Call(ldiv, 2316);
Clib4Call(rand, 2320);
Clib4Call(srand, 2324);
Clib4Call(random, 2328);
Clib4Call(srandom, 2332);
Clib4Call(initstate, 2336);
Clib4Call(setstate, 2340);
Clib4Call(l64a, 2344);
Clib4Call(a64l, 2348);
Clib4Call(setkey, 2352);
Clib4Call(drand48, 2356);
Clib4Call(erand48, 2360);
Clib4Call(lrand48, 2364);
Clib4Call(nrand48, 2368);
Clib4Call(mrand48, 2372);
Clib4Call(jrand48, 2376);
Clib4Call(srand48, 2380);
Clib4Call(seed48, 2384);
Clib4Call(lcong48, 2388);
Clib4Call(system, 2392);
Clib4Call(exit, 2396);
Clib4Call(abort, 2400);
Clib4Call(atexit, 2404);
Clib4Call(getenv, 2408);
Clib4Call(bsearch, 2412);
Clib4Call(qsort, 2416);
Clib4Call(strtod, 2420);
Clib4Call(strtol, 2424);
Clib4Call(strtoul, 2428);
Clib4Call(strtoq, 2432);
Clib4Call(atof, 2436);
Clib4Call(atoi, 2440);
Clib4Call(atol, 2444);
Clib4Call(itoa, 2448);
Clib4Call(lltoa, 2452);
Clib4Call(_exit, 2456);
Clib4Call(rand_r, 2460);
Clib4Call(mktemp, 2464);
Clib4Call(mkstemp, 2468);
Clib4Call(unsetenv, 2472);
Clib4Call(setenv, 2476);
Clib4Call(putenv, 2480);
Clib4Call(mkdtemp, 2484);
Clib4Call(getexecname, 2488);
Clib4Call(strtoll, 2492);
Clib4Call(strtold, 2496);
Clib4Call(strtoull, 2500);
Clib4Call(atoll, 2504);
Clib4Call(llabs, 2508);
Clib4Call(lldiv, 2512);
Clib4Call(strtof, 2516);
Clib4Call(atoff, 2520);
Clib4Call(_Exit, 2524);
Clib4Call(ecvt, 2528);
Clib4Call(fcvt, 2532);
Clib4Call(gcvt, 2536);
Clib4Call(secure_getenv, 2540);
Clib4Call(reallocarray, 2544);
Clib4Call(qsort_r, 2548);
Clib4Call(arc4random, 2552);
Clib4Call(arc4random_buf, 2556);
Clib4Call(arc4random_uniform, 2560);
Clib4Call(arc4random_stir, 2564);
Clib4Call(arc4random_addrandom, 2568);
Clib4Call(strerror, 2572);
Clib4Call(strcat, 2576);
Clib4Call(strncat, 2580);
Clib4Call(strcmp, 2584);
Clib4Call(strncmp, 2588);
Clib4Call(strcpy, 2592);
Clib4Call(strncpy, 2596);
Clib4Call(strnlen, 2600);
Clib4Call(strlen, 2604);
Clib4Call(strchr, 2608);
Clib4Call(strrchr, 2612);
Clib4Call(strspn, 2616);
Clib4Call(strcspn, 2620);
Clib4Call(strpbrk, 2624);
Clib4Call(strtok, 2628);
Clib4Call(strstr, 2632);
Clib4Call(strnstr, 2636);
Clib4Call(strsep, 2640);
Clib4Call(stpcpy, 2644);
Clib4Call(stpncpy, 2648);
Clib4Call(stccpy, 2652);
Clib4Call(strcoll, 2656);
Clib4Call(strxfrm, 2660);
Clib4Call(memmove, 2664);
Clib4Call(memchr, 2668);
Clib4Call(memcmp, 2672);
Clib4Call(memcpy, 2676);
Clib4Call(memset, 2680);
Clib4Call(strerror_r, 2684);
Clib4Call(strdup, 2688);
Clib4Call(strndup, 2692);
Clib4Call(bcopy, 2696);
Clib4Call(bzero, 2700);
Clib4Call(explicit_bzero, 2704);
Clib4Call(bcmp, 2708);
Clib4Call(strlcpy, 2712);
Clib4Call(strlcat, 2716);
Clib4Call(strtok_r, 2720);
Clib4Call(strsignal, 2724);
Clib4Call(memccpy, 2728);
Clib4Call(index, 2732);
Clib4Call(rindex, 2736);
Clib4Call(strverscmp, 2740);
Clib4Call(strchrnul, 2744);
Clib4Call(strcasestr, 2748);
Clib4Call(memmem, 2752);
Clib4Call(memrchr, 2756);
Clib4Call(mempcpy, 2760);
Clib4Call(strcasecmp, 2764);
Clib4Call(strncasecmp, 2768);
Clib4Call(ffs, 2772);
Clib4Call(ffsl, 2776);
Clib4Call(ffsll, 2780);
Clib4Call(tgetent, 2784);
Clib4Call(tgetnum, 2788);
Clib4Call(tgetflag, 2792);
Clib4Call(tgetstr, 2796);
Clib4Call(tputs, 2800);
Clib4Call(tparam, 2804);
Clib4Call(tgoto, 2808);
Clib4Call(tcgetattr, 2812);
Clib4Call(tcsetattr, 2816);
Clib4Call(tcsendbreak, 2820);
Clib4Call(tcdrain, 2824);
Clib4Call(tcflush, 2828);
Clib4Call(tcflow, 2832);
Clib4Call(cfmakeraw, 2836);
Clib4Call(cfgetispeed, 2840);
Clib4Call(cfgetospeed, 2844);
Clib4Call(cfsetispeed, 2848);
Clib4Call(cfsetospeed, 2852);
Clib4Call(clock, 2856);
Clib4Call(time, 2860);
Clib4Call(asctime, 2864);
Clib4Call(ctime, 2868);
Clib4Call(gmtime, 2872);
Clib4Call(localtime, 2876);
Clib4Call(mktime, 2880);
Clib4Call(difftime, 2884);
Clib4Call(strftime, 2888);
Clib4Call(strptime, 2892);
Clib4Call(asctime_r, 2896);
Clib4Call(ctime_r, 2900);
Clib4Call(gmtime_r, 2904);
Clib4Call(localtime_r, 2908);
Clib4Call(tzset, 2912);
Clib4Call(nanosleep, 2916);
Clib4Call(clock_gettime, 2920);
Clib4Call(clock_settime, 2924);
Clib4Call(clock_getres, 2928);
Clib4Call(clock_nanosleep, 2932);
Clib4Call(rdtsc, 2936);
Clib4Call(clock_gettime64, 2940);
Clib4Call(c16rtomb, 2944);
Clib4Call(mbrtoc16, 2948);
Clib4Call(c32rtomb, 2952);
Clib4Call(mbrtoc32, 2956);
Clib4Call(ulimit, 2960);
Clib4Call(__environ, 2964);
Clib4Call(isatty, 2968);
Clib4Call(dup, 2972);
Clib4Call(dup2, 2976);
Clib4Call(lseek, 2980);
Clib4Call(access, 2984);
Clib4Call(chown, 2988);
Clib4Call(fchown, 2992);
Clib4Call(lchown, 2996);
Clib4Call(truncate, 3000);
Clib4Call(ftruncate, 3004);
Clib4Call(getpagesize, 3008);
Clib4Call(ftruncate64, 3012);
Clib4Call(truncate64, 3016);
Clib4Call(lseek64, 3020);
Clib4Call(alarm, 3024);
Clib4Call(ualarm, 3028);
Clib4Call(link, 3032);
Clib4Call(unlink, 3036);
Clib4Call(symlink, 3040);
Clib4Call(readlink, 3044);
Clib4Call(chdir, 3048);
Clib4Call(fchdir, 3052);
Clib4Call(lockf, 3056);
Clib4Call(sleep, 3060);
Clib4Call(usleep, 3064);
Clib4Call(pause, 3068);
Clib4Call(getpid, 3072);
Clib4Call(getppid, 3076);
Clib4Call(getpgrp, 3080);
Clib4Call(tcgetpgrp, 3084);
Clib4Call(tcsetpgrp, 3088);
Clib4Call(realpath, 3092);
Clib4Call(fsync, 3096);
Clib4Call(fdatasync, 3100);
Clib4Call(ttyname, 3104);
Clib4Call(ttyname_r, 3108);
Clib4Call(execl, 3112);
Clib4Call(execle, 3116);
Clib4Call(execlp, 3120);
Clib4Call(execv, 3124);
Clib4Call(execve, 3128);
Clib4Call(execvp, 3132);
Clib4Call(encrypt, 3136);
Clib4Call(spawnv, 3140);
Clib4Call(spawnvp, 3144);
Clib4Call(sysconf, 3148);
Clib4Call(enableUnixPaths, 3152);
Clib4Call(disableUnixPaths, 3156);
Clib4Call(enableAltivec, 3160);
Clib4Call(disableAltivec, 3164);
Clib4Call(enableOptimizedFunctions, 3168);
Clib4Call(disableOptimizedFunctions, 3172);
Clib4Call(getcwd, 3176);
Clib4Call(getwd, 3180);
Clib4Call(get_current_dir_name, 3184);
Clib4Call(gethostid, 3188);
Clib4Call(gethostname, 3192);
Clib4Call(getdomainname, 3196);
Clib4Call(setdomainname, 3200);
Clib4Call(getlogin, 3204);
Clib4Call(getlogin_r, 3208);
Clib4Call(crypt, 3212);
Clib4Call(getegid, 3216);
Clib4Call(geteuid, 3220);
Clib4Call(getgid, 3224);
Clib4Call(getgroups, 3228);
Clib4Call(getpass, 3232);
Clib4Call(getuid, 3236);
Clib4Call(initgroups, 3240);
Clib4Call(setegid, 3244);
Clib4Call(seteuid, 3248);
Clib4Call(setgid, 3252);
Clib4Call(setgroups, 3256);
Clib4Call(setregid, 3260);
Clib4Call(setreuid, 3264);
Clib4Call(setsid, 3268);
Clib4Call(setuid, 3272);
Clib4Call(setlogin, 3276);
Clib4Call(pathconf, 3280);
Clib4Call(fpathconf, 3284);
Clib4Call(pipe, 3288);
Clib4Call(pipe2, 3292);
Clib4Call(pread, 3296);
Clib4Call(pwrite, 3300);
Clib4Call(pread64, 3304);
Clib4Call(pwrite64, 3308);
Clib4Call(utime, 3312);
Clib4Call(btowc, 3316);
Clib4Call(wctob, 3320);
Clib4Call(wcscat, 3324);
Clib4Call(wcsncat, 3328);
Clib4Call(wcscmp, 3332);
Clib4Call(wcsncmp, 3336);
Clib4Call(wcscpy, 3340);
Clib4Call(wcsncpy, 3344);
Clib4Call(wcslen, 3348);
Clib4Call(wcschr, 3352);
Clib4Call(wcsspn, 3356);
Clib4Call(wcspbrk, 3360);
Clib4Call(wcstok, 3364);
Clib4Call(wcsstr, 3368);
Clib4Call(wcswidth, 3372);
Clib4Call(wcwidth, 3376);
Clib4Call(wcstod, 3380);
Clib4Call(wcstol, 3384);
Clib4Call(wcstoul, 3388);
Clib4Call(wcstof, 3392);
Clib4Call(wscoll, 3396);
Clib4Call(wcsxfrm, 3400);
Clib4Call(wmemchr, 3404);
Clib4Call(wmemcmp, 3408);
Clib4Call(wmemcpy, 3412);
Clib4Call(wmemmove, 3416);
Clib4Call(wmemset, 3420);
Clib4Call(fwide, 3424);
Clib4Call(fgetwc, 3428);
Clib4Call(getwc, 3432);
Clib4Call(getwchar, 3436);
Clib4Call(ungetwc, 3440);
Clib4Call(fgetws, 3444);
Clib4Call(fwscanf, 3448);
Clib4Call(swscanf, 3452);
Clib4Call(vfwscanf, 3456);
Clib4Call(vswscanf, 3460);
Clib4Call(vwscanf, 3464);
Clib4Call(wscanf, 3468);
Clib4Call(fputwc, 3472);
Clib4Call(putwc, 3476);
Clib4Call(putwchar, 3480);
Clib4Call(fputws, 3484);
Clib4Call(fwprintf, 3488);
Clib4Call(swprintf, 3492);
Clib4Call(vfwprintf, 3496);
Clib4Call(vswprintf, 3500);
Clib4Call(vwprintf, 3504);
Clib4Call(wprintf, 3508);
Clib4Call(wcsftime, 3512);
Clib4Call(mbrlen, 3516);
Clib4Call(mbrtowc, 3520);
Clib4Call(mbsinit, 3524);
Clib4Call(mbsrtowcs, 3528);
Clib4Call(wcrtomb, 3532);
Clib4Call(wcscoll, 3536);
Clib4Call(wcscspn, 3540);
Clib4Call(wcsrchr, 3544);
Clib4Call(wcsrtombs, 3548);
Clib4Call(wcstoll, 3552);
Clib4Call(wcstoull, 3556);
Clib4Call(wcstold, 3560);
Clib4Call(mbsnrtowcs, 3564);
Clib4Call(wcsnrtombs, 3568);
Clib4Call(wcsdup, 3572);
Clib4Call(wcsnlen, 3576);
Clib4Call(wcpcpy, 3580);
Clib4Call(wcpncpy, 3584);
Clib4Call(wcscasecmp, 3588);
Clib4Call(wcscasecmp_l, 3592);
Clib4Call(wcsncasecmp, 3596);
Clib4Call(wcsncasecmp_l, 3600);
Clib4Call(wcscoll_l, 3604);
Clib4Call(wcsxfrm_l, 3608);
Clib4Call(iswalnum, 3612);
Clib4Call(iswalpha, 3616);
Clib4Call(iswcntrl, 3620);
Clib4Call(iswdigit, 3624);
Clib4Call(iswxdigit, 3628);
Clib4Call(iswgraph, 3632);
Clib4Call(iswpunct, 3636);
Clib4Call(iswprint, 3640);
Clib4Call(iswlower, 3644);
Clib4Call(iswupper, 3648);
Clib4Call(iswspace, 3652);
Clib4Call(iswblank, 3656);
Clib4Call(towlower, 3660);
Clib4Call(towupper, 3664);
Clib4Call(wctype, 3668);
Clib4Call(iswctype, 3672);
Clib4Call(wctrans, 3676);
Clib4Call(towctrans, 3680);
Clib4Call(inet_addr, 3684);
Clib4Call(inet_aton, 3688);
Clib4Call(inet_lnaof, 3692);
Clib4Call(inet_makeaddr, 3696);
Clib4Call(inet_netof, 3700);
Clib4Call(inet_network, 3704);
Clib4Call(inet_ntoa, 3708);
Clib4Call(inet_ntop, 3712);
Clib4Call(inet_pton, 3716);
Clib4Call(ns_get16, 3720);
Clib4Call(ns_get32, 3724);
Clib4Call(ns_put16, 3728);
Clib4Call(ns_put32, 3732);
Clib4Call(ns_initparse, 3736);
Clib4Call(ns_parserr, 3740);
Clib4Call(ns_skiprr, 3744);
Clib4Call(ns_name_uncompress, 3748);
Clib4Call(if_nametoindex, 3752);
Clib4Call(if_indextoname, 3756);
Clib4Call(bindresvport, 3760);
Clib4Call(bindresvport6, 3764);
Clib4Call(bswap16, 3768);
Clib4Call(bswap24, 3772);
Clib4Call(bswap32, 3776);
Clib4Call(bswap64, 3780);
Clib4Call(swab, 3784);
Clib4Call(swab24, 3788);
Clib4Call(swab32, 3792);
Clib4Call(swab64, 3796);
Clib4Call(flock, 3800);
Clib4Call(ioctl, 3804);
Clib4Call(ftok, 3808);
Clib4Call(mmap, 3812);
Clib4Call(munmap, 3816);
Clib4Call(msync, 3820);
Clib4Call(statfs, 3824);
Clib4Call(fstatfs, 3828);
Clib4Call(_msgctl, 3832);
Clib4Call(_msgget, 3836);
Clib4Call(_msgrcv, 3840);
Clib4Call(_msgsnd, 3844);
Clib4Call(_msgsnap, 3848);
Clib4Call(_msgids, 3852);
Clib4Call(getrlimit, 3856);
Clib4Call(setrlimit, 3860);
Clib4Call(getrusage, 3864);
Clib4Call(select, 3868);
Clib4Call(waitselect, 3872);
Clib4Call(_semctl, 3876);
Clib4Call(_semget, 3880);
Clib4Call(_semop, 3884);
Clib4Call(_semids, 3888);
Clib4Call(_semtimedop, 3892);
Clib4Call(_shmat, 3896);
Clib4Call(_shmctl, 3900);
Clib4Call(_shmdt, 3904);
Clib4Call(_shmget, 3908);
Clib4Call(_shmids, 3912);
Clib4Call(accept, 3916);
Clib4Call(bind, 3920);
Clib4Call(connect, 3924);
Clib4Call(getpeername, 3928);
Clib4Call(getsockname, 3932);
Clib4Call(getsockopt, 3936);
Clib4Call(listen, 3940);
Clib4Call(recv, 3944);
Clib4Call(recvfrom, 3948);
Clib4Call(recvmsg, 3952);
Clib4Call(send, 3956);
Clib4Call(sendmsg, 3960);
Clib4Call(sendto, 3964);
Clib4Call(setsockopt, 3968);
Clib4Call(shutdown, 3972);
Clib4Call(socket, 3976);
Clib4Call(socketpair, 3980);
Clib4Call(stat, 3984);
Clib4Call(fstat, 3988);
Clib4Call(lstat, 3992);
Clib4Call(chmod, 3996);
Clib4Call(fchmod, 4000);
Clib4Call(mkdir, 4004);
Clib4Call(rmdir, 4008);
Clib4Call(umask, 4012);
Clib4Call(statvfs, 4016);
Clib4Call(fstatvfs, 4020);
Clib4Call(closelog, 4024);
Clib4Call(openlog, 4028);
Clib4Call(setlogmask, 4032);
Clib4Call(syslog, 4036);
Clib4Call(vsyslog, 4040);
Clib4Call(sysinfo, 4044);
Clib4Call(gettimeofday, 4048);
Clib4Call(settimeofday, 4052);
Clib4Call(utimes, 4056);
Clib4Call(getitimer, 4060);
Clib4Call(setitimer, 4064);
Clib4Call(ftime, 4068);
Clib4Call(times, 4072);
Clib4Call(readv, 4076);
Clib4Call(writev, 4080);
Clib4Call(uname, 4084);
/* END OF CLIB4 VERSION 1.0   */
/* New function will go below */
Clib4Call(futimens, 4088);
Clib4Call(utimensat, 4092);
Clib4Call(__isnan, 4096);
Clib4Call(__isnanf, 4100);
Clib4Call(__isnanl, 4104);
Clib4Call(__isinf, 4108);
Clib4Call(__isinff, 4112);
Clib4Call(__isinfl, 4116);
Clib4Call(__isnormal, 4120);
Clib4Call(__isnormalf, 4124);
Clib4Call(__isnormall, 4128);
Clib4Call(__isfinite_double, 4132);
Clib4Call(__isfinite_float, 4136);
Clib4Call(__isfinite_long_double, 4140);
Clib4Call(strtouq, 4144);

Clib4Call(gettext, 4148);
Clib4Call(dgettext, 4152);
Clib4Call(dcgettext, 4156);
Clib4Call(ngettext, 4160);
Clib4Call(dngettext, 4164);
Clib4Call(dcngettext, 4168);
Clib4Call(textdomain, 4172);
Clib4Call(bindtextdomain, 4176);
Clib4Call(bind_textdomain_codeset, 4180);

Clib4Call(ether_ntoa, 4184);
Clib4Call(ether_aton, 4188);
Clib4Call(ether_ntoa_r, 4192);
Clib4Call(ether_aton_r, 4196);
Clib4Call(ether_line, 4200);
Clib4Call(ether_ntohost, 4204);
Clib4Call(ether_hostton, 4208);

Clib4Call(getrandom, 4212);
Clib4Call(getentropy, 4216);

Clib4Call(timegm, 4220);
Clib4Call(stime, 4224);

Clib4Call(dbm_clearerr, 4228);
Clib4Call(dbm_close, 4232);
Clib4Call(dbm_delete, 4236);
Clib4Call(dbm_error, 4240);
Clib4Call(dbm_fetch, 4244);
Clib4Call(dbm_firstkey, 4248);
Clib4Call(dbm_nextkey, 4252);
Clib4Call(dbm_open, 4256);
Clib4Call(dbm_store, 4260);
Clib4Call(dbm_dirfno, 4264);
Clib4Call(dbopen, 4268);
Clib4Call(mkostemp, 4272);
Clib4Call(mkostemps, 4276);

Clib4Call(strtof_l, 4280);
Clib4Call(strtod_l, 4284);

Clib4Call(fpgetround, 4288);
Clib4Call(fpsetround, 4292);
Clib4Call(fpgetmask, 4296);
Clib4Call(fpsetmask, 4300);
Clib4Call(fpgetsticky, 4304);

Clib4Call(fts_children, 4308);
Clib4Call(fts_close, 4312);
Clib4Call(fts_open, 4316);
Clib4Call(fts_read, 4320);
Clib4Call(fts_set, 4324);
