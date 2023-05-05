#include "interface.h"

asm(".section	\".text\"             \n\
	.align 2                          \n\
	.globl __Clib2Call                \n\
	.type  __Clib2Call, @function     \n\
__Clib2Call:                          \n\
	 lis   %r11, IClib2@ha            \n\
	 lwz   %r0, IClib2@l(%r11)        \n\
	 lwzx  %r11, %r12, %r0            \n\
	 mtctr %r11                       \n\
	 bctr                             \n\
	.size	__Clib2Call, .-__Clib2Call");

Clib2Call(__getClib2, 84);
//Clib2Call(__getGlobalClib2, 88);
Clib2Call(__translate_amiga_to_unix_path_name, 92);
Clib2Call(__translate_unix_to_amiga_path_name, 96);
//Clib2Call(__restore_path_name, 100);
Clib2Call(__print_termination_message, 104);

/* Functions defined stubs starts here */
Clib2Call(argz_create, 116);
Clib2Call(argz_create_sep, 120);
Clib2Call(argz_count, 124);
Clib2Call(argz_extract, 128);
Clib2Call(argz_stringify, 132);
Clib2Call(argz_add, 136);
Clib2Call(argz_add_sep, 140);
Clib2Call(argz_append, 144);
Clib2Call(argz_delete, 148);
Clib2Call(argz_insert, 152);
Clib2Call(argz_next, 156);
Clib2Call(argz_replace, 160);
Clib2Call(__assertion_failure, 164);
Clib2Call(cacos, 168);
Clib2Call(cacosf, 172);
Clib2Call(cacosl, 176);
Clib2Call(casin, 180);
Clib2Call(casinf, 184);
Clib2Call(casinl, 188);
Clib2Call(catan, 192);
Clib2Call(catanf, 196);
Clib2Call(catanl, 200);
Clib2Call(ccos, 204);
Clib2Call(ccosf, 208);
Clib2Call(ccosl, 212);
Clib2Call(csin, 216);
Clib2Call(csinf, 220);
Clib2Call(csinl, 224);
Clib2Call(ctan, 228);
Clib2Call(ctanf, 232);
Clib2Call(ctanl, 236);
Clib2Call(cacosh, 240);
Clib2Call(cacoshf, 244);
Clib2Call(cacoshl, 248);
Clib2Call(casinh, 252);
Clib2Call(casinhf, 256);
Clib2Call(casinhl, 260);
Clib2Call(catanh, 264);
Clib2Call(catanhf, 268);
Clib2Call(catanhl, 272);
Clib2Call(ccosh, 276);
Clib2Call(ccoshf, 280);
Clib2Call(ccoshl, 284);
Clib2Call(csinh, 288);
Clib2Call(csinhf, 292);
Clib2Call(csinhl, 296);
Clib2Call(ctanh, 300);
Clib2Call(ctanhf, 304);
Clib2Call(ctanhl, 308);
Clib2Call(cexp, 312);
Clib2Call(cexpf, 316);
Clib2Call(cexpl, 320);
Clib2Call(clog, 324);
Clib2Call(clogf, 328);
Clib2Call(clogl, 332);
Clib2Call(cabs, 336);
Clib2Call(cabsf, 340);
Clib2Call(cabsl, 344);
Clib2Call(cpow, 348);
Clib2Call(cpowf, 352);
Clib2Call(cpowl, 356);
Clib2Call(csqrt, 360);
Clib2Call(csqrtf, 364);
Clib2Call(csqrtl, 368);
Clib2Call(carg, 372);
Clib2Call(cargf, 376);
Clib2Call(cargl, 380);
Clib2Call(conj, 384);
Clib2Call(conjf, 388);
Clib2Call(conjl, 392);
Clib2Call(cproj, 396);
Clib2Call(cprojf, 400);
Clib2Call(cprojl, 404);
Clib2Call(cimag, 408);
Clib2Call(cimagf, 412);
Clib2Call(cimagl, 416);
Clib2Call(creal, 420);
Clib2Call(crealf, 424);
Clib2Call(creall, 428);
Clib2Call(crypt_r, 432);
Clib2Call(isalnum, 436);
Clib2Call(isalpha, 440);
Clib2Call(iscntrl, 444);
Clib2Call(isdigit, 448);
Clib2Call(isgraph, 452);
Clib2Call(islower, 456);
Clib2Call(isprint, 460);
Clib2Call(ispunct, 464);
Clib2Call(isspace, 468);
Clib2Call(isupper, 472);
Clib2Call(isxdigit, 476);
Clib2Call(tolower, 480);
Clib2Call(toupper, 484);
Clib2Call(isblank, 488);
Clib2Call(isascii, 492);
Clib2Call(toascii, 496);
Clib2Call(opendir, 500);
Clib2Call(readdir, 504);
Clib2Call(rewinddir, 508);
Clib2Call(closedir, 512);
Clib2Call(fdopendir, 516);
Clib2Call(alphasort, 520);
Clib2Call(dirfd, 524);
Clib2Call(scandir, 528);
Clib2Call(readdir_r, 532);
Clib2Call(readdir64_r, 536);
Clib2Call(dlclose, 540);
Clib2Call(dlerror, 544);
Clib2Call(dlopen, 548);
Clib2Call(dlsym, 552);
Clib2Call(envz_entry, 556);
Clib2Call(envz_get, 560);
Clib2Call(envz_add, 564);
Clib2Call(envz_merge, 568);
Clib2Call(envz_remove, 572);
Clib2Call(envz_strip, 576);
Clib2Call(warn, 580);
Clib2Call(vwarn, 584);
Clib2Call(warnx, 588);
Clib2Call(vwarnx, 592);
Clib2Call(err, 596);
Clib2Call(verr, 600);
Clib2Call(errx, 604);
Clib2Call(verrx, 608);
Clib2Call(__errno, 612);
Clib2Call(__h_errno, 616);
Clib2Call(open, 620);
Clib2Call(openat, 624);
Clib2Call(creat, 628);
Clib2Call(close, 632);
Clib2Call(read, 636);
Clib2Call(write, 640);
Clib2Call(fcntl, 644);
Clib2Call(fnmatch, 648);
Clib2Call(ftw, 652);
Clib2Call(nftw, 656);
Clib2Call(glob, 660);
Clib2Call(globfree, 664);
Clib2Call(endgrent, 668);
Clib2Call(getgrent, 672);
Clib2Call(getgrgid, 676);
Clib2Call(getgrnam, 680);
Clib2Call(setgrent, 684);
Clib2Call(iconv_open, 688);
Clib2Call(iconv, 692);
Clib2Call(iconv_close, 696);
Clib2Call(getifaddrs, 700);
Clib2Call(freeifaddrs, 704);
Clib2Call(imaxabs, 708);
Clib2Call(imaxdiv, 712);
Clib2Call(strtoimax, 716);
Clib2Call(strtoumax, 720);
Clib2Call(wcstoimax, 724);
Clib2Call(wcstoumax, 728);
Clib2Call(nl_langinfo, 732);
Clib2Call(basename, 736);
Clib2Call(dirname, 740);
Clib2Call(setlocale, 744);
Clib2Call(localeconv, 748);
Clib2Call(memalign, 752);
Clib2Call(acos, 756);
Clib2Call(asin, 760);
Clib2Call(atan, 764);
Clib2Call(atan2, 768);
Clib2Call(ceil, 772);
Clib2Call(cos, 776);
Clib2Call(cosh, 780);
Clib2Call(sincos, 784);
Clib2Call(sincosf, 788);
Clib2Call(sincosl, 792);
Clib2Call(exp10, 796);
Clib2Call(exp10f, 800);
Clib2Call(exp10l, 804);
Clib2Call(exp, 808);
Clib2Call(fabs, 812);
Clib2Call(floor, 816);
Clib2Call(fmod, 820);
Clib2Call(frexp, 824);
Clib2Call(ldexp, 828);
Clib2Call(log, 832);
Clib2Call(log10, 836);
Clib2Call(modf, 840);
Clib2Call(pow, 844);
Clib2Call(pow10, 848);
Clib2Call(pow10f, 852);
Clib2Call(pow10l, 856);
Clib2Call(sin, 860);
Clib2Call(sinh, 864);
Clib2Call(sqrt, 868);
Clib2Call(tan, 872);
Clib2Call(tanh, 876);
Clib2Call(j0, 880);
Clib2Call(y0, 884);
Clib2Call(j0f, 888);
Clib2Call(y0f, 892);
Clib2Call(j1, 896);
Clib2Call(y1, 900);
Clib2Call(j1f, 904);
Clib2Call(y1f, 908);
Clib2Call(jn, 912);
Clib2Call(yn, 916);
Clib2Call(jnf, 920);
Clib2Call(ynf, 924);
Clib2Call(__fpclassify_float, 928);
Clib2Call(__fpclassify_double, 932);
Clib2Call(__fpclassify_long_double, 936);
Clib2Call(__isfinite_float, 940);
Clib2Call(__isfinite_double, 944);
Clib2Call(__isfinite_long_double, 948);
Clib2Call(__signbit_float, 952);
Clib2Call(__signbit_double, 956);
Clib2Call(__signbit_long_double, 960);
Clib2Call(__isnan, 964);
Clib2Call(__isnanf, 968);
Clib2Call(__isnanl, 972);
Clib2Call(__isinf, 976);
Clib2Call(__isinff, 980);
Clib2Call(__isinfl, 984);
Clib2Call(__isnormalf, 988);
Clib2Call(__isnormal, 992);
Clib2Call(__isnormall, 996);
Clib2Call(acosf, 1000);
Clib2Call(asinf, 1004);
Clib2Call(atanf, 1008);
Clib2Call(atan2f, 1012);
Clib2Call(ceilf, 1016);
Clib2Call(cosf, 1020);
Clib2Call(coshf, 1024);
Clib2Call(expf, 1028);
Clib2Call(fabsf, 1032);
Clib2Call(floorf, 1036);
Clib2Call(fmodf, 1040);
Clib2Call(frexpf, 1044);
Clib2Call(ldexpf, 1048);
Clib2Call(logf, 1052);
Clib2Call(log10f, 1056);
Clib2Call(modff, 1060);
Clib2Call(powf, 1064);
Clib2Call(sinf, 1068);
Clib2Call(sinhf, 1072);
Clib2Call(sqrtf, 1076);
Clib2Call(tanf, 1080);
Clib2Call(tanhf, 1084);
Clib2Call(acoshf, 1088);
Clib2Call(asinhf, 1092);
Clib2Call(atanhf, 1096);
Clib2Call(cbrtf, 1100);
Clib2Call(copysignf, 1104);
Clib2Call(erfcf, 1108);
Clib2Call(erff, 1112);
Clib2Call(expm1f, 1116);
Clib2Call(fdimf, 1120);
Clib2Call(fmaf, 1124);
Clib2Call(fmaxf, 1128);
Clib2Call(fminf, 1132);
Clib2Call(hypotf, 1136);
Clib2Call(lgammaf, 1140);
Clib2Call(log1pf, 1144);
Clib2Call(logbf, 1148);
Clib2Call(llrintf, 1152);
Clib2Call(lrintf, 1156);
Clib2Call(lroundf, 1160);
Clib2Call(llround, 1164);
Clib2Call(llroundf, 1168);
Clib2Call(nanf, 1172);
Clib2Call(nearbyintf, 1176);
Clib2Call(nextafterf, 1180);
Clib2Call(nexttowardf, 1184);
Clib2Call(remainderf, 1188);
Clib2Call(remquof, 1192);
Clib2Call(rintf, 1196);
Clib2Call(roundf, 1200);
Clib2Call(scalblnf, 1204);
Clib2Call(scalbnf, 1208);
Clib2Call(tgammaf, 1212);
Clib2Call(truncf, 1216);
Clib2Call(ilogbf, 1220);
Clib2Call(finite, 1224);
Clib2Call(acosh, 1228);
Clib2Call(asinh, 1232);
Clib2Call(atanh, 1236);
Clib2Call(cbrt, 1240);
Clib2Call(copysign, 1244);
Clib2Call(erf, 1248);
Clib2Call(erfc, 1252);
Clib2Call(expm1, 1256);
Clib2Call(fdim, 1260);
Clib2Call(fma, 1264);
Clib2Call(fmax, 1268);
Clib2Call(fmin, 1272);
Clib2Call(hypot, 1276);
Clib2Call(lgamma, 1280);
Clib2Call(log1p, 1284);
Clib2Call(logb, 1288);
Clib2Call(llrint, 1292);
Clib2Call(lrint, 1296);
Clib2Call(lround, 1300);
Clib2Call(nan, 1304);
Clib2Call(nearbyint, 1308);
Clib2Call(nexttoward, 1312);
Clib2Call(nextafter, 1316);
Clib2Call(remainder, 1320);
Clib2Call(remquo, 1324);
Clib2Call(rint, 1328);
Clib2Call(round, 1332);
Clib2Call(scalbln, 1336);
Clib2Call(scalbn, 1340);
Clib2Call(tgamma, 1344);
Clib2Call(trunc, 1348);
Clib2Call(ilogb, 1352);
Clib2Call(exp2f, 1356);
Clib2Call(exp2, 1360);
Clib2Call(exp2l, 1364);
Clib2Call(log2, 1368);
Clib2Call(log2f, 1372);
Clib2Call(log2l, 1376);
Clib2Call(acosl, 1380);
Clib2Call(asinl, 1384);
Clib2Call(atanl, 1388);
Clib2Call(atan2l, 1392);
Clib2Call(ceill, 1396);
Clib2Call(cosl, 1400);
Clib2Call(coshl, 1404);
Clib2Call(expl, 1408);
Clib2Call(fabsl, 1412);
Clib2Call(floorl, 1416);
Clib2Call(fmodl, 1420);
Clib2Call(frexpl, 1424);
Clib2Call(ldexpl, 1428);
Clib2Call(logl, 1432);
Clib2Call(log10l, 1436);
Clib2Call(modfl, 1440);
Clib2Call(powl, 1444);
Clib2Call(sinl, 1448);
Clib2Call(sinhl, 1452);
Clib2Call(sqrtl, 1456);
Clib2Call(tanl, 1460);
Clib2Call(tanhl, 1464);
Clib2Call(acoshl, 1468);
Clib2Call(asinhl, 1472);
Clib2Call(atanhl, 1476);
Clib2Call(cbrtl, 1480);
Clib2Call(copysignl, 1484);
Clib2Call(erfcl, 1488);
Clib2Call(erfl, 1492);
Clib2Call(expm1l, 1496);
Clib2Call(fdiml, 1500);
Clib2Call(fmal, 1504);
Clib2Call(fmaxl, 1508);
Clib2Call(fminl, 1512);
Clib2Call(hypotl, 1516);
Clib2Call(lgammal, 1520);
Clib2Call(log1pl, 1524);
Clib2Call(logbl, 1528);
Clib2Call(llrintl, 1532);
Clib2Call(lrintl, 1536);
Clib2Call(llroundl, 1540);
Clib2Call(lroundl, 1544);
Clib2Call(nanl, 1548);
Clib2Call(nearbyintl, 1552);
Clib2Call(nextafterl, 1556);
Clib2Call(nexttowardl, 1560);
Clib2Call(remainderl, 1564);
Clib2Call(remquol, 1568);
Clib2Call(rintl, 1572);
Clib2Call(roundl, 1576);
Clib2Call(scalblnl, 1580);
Clib2Call(scalbnl, 1584);
Clib2Call(tgammal, 1588);
Clib2Call(truncl, 1592);
Clib2Call(ilogbl, 1596);
Clib2Call(gethostbyaddr, 1600);
Clib2Call(gethostbyname, 1604);
Clib2Call(getnetbyaddr, 1608);
Clib2Call(getnetbyname, 1612);
Clib2Call(getprotobyname, 1616);
Clib2Call(getprotobynumber, 1620);
Clib2Call(getservbyname, 1624);
Clib2Call(getservbyport, 1628);
Clib2Call(herror, 1632);
Clib2Call(hstrerror, 1636);
Clib2Call(gethostbyname_r, 1640);
Clib2Call(gethostbyname2_r, 1644);
Clib2Call(gethostbyname2, 1648);
Clib2Call(gethostbyaddr_r, 1652);
Clib2Call(getservbyport_r, 1656);
Clib2Call(getservbyname_r, 1660);
Clib2Call(gai_strerror, 1664);
Clib2Call(getaddrinfo, 1668);
Clib2Call(freeaddrinfo, 1672);
Clib2Call(getnameinfo, 1676);
Clib2Call(catopen, 1680);
Clib2Call(catgets, 1684);
Clib2Call(catclose, 1688);
Clib2Call(poll, 1692);
Clib2Call(endpwent, 1696);
Clib2Call(getpwent, 1700);
Clib2Call(getpwnam, 1704);
Clib2Call(getpwnam_r, 1708);
Clib2Call(getpwuid, 1712);
Clib2Call(getpwuid_r, 1716);
Clib2Call(setpwent, 1720);
Clib2Call(regcomp, 1724);
Clib2Call(regexec, 1728);
Clib2Call(regfree, 1732);
Clib2Call(regerror, 1736);
Clib2Call(__res_state, 1740);
Clib2Call(res_init, 1744);
Clib2Call(res_query, 1748);
Clib2Call(res_querydomain, 1752);
Clib2Call(res_search, 1756);
Clib2Call(res_mkquery, 1760);
Clib2Call(res_send, 1764);
Clib2Call(dn_comp, 1768);
Clib2Call(dn_expand, 1772);
Clib2Call(dn_skipname, 1776);
Clib2Call(hcreate, 1780);
Clib2Call(hdestroy, 1784);
Clib2Call(hsearch, 1788);
Clib2Call(hcreate_r, 1792);
Clib2Call(hdestroy_r, 1796);
Clib2Call(hsearch_r, 1800);
Clib2Call(lfind, 1804);
Clib2Call(lsearch, 1808);
Clib2Call(tdelete, 1812);
Clib2Call(tdestroy, 1816);
Clib2Call(tfind, 1820);
Clib2Call(tsearch, 1824);
Clib2Call(twalk, 1828);
Clib2Call(setjmp, 1832);
Clib2Call(__sigsetjmp, 1836);
Clib2Call(_setjmp, 1840);
Clib2Call(longjmp, 1844);
Clib2Call(_longjmp, 1848);
Clib2Call(siglongjmp, 1852);
Clib2Call(__sigjmp_save, 1856);
Clib2Call(signal, 1860);
Clib2Call(raise, 1864);
Clib2Call(sigmask, 1868);
Clib2Call(sigblock, 1872);
Clib2Call(sigsetmask, 1876);
Clib2Call(sigprocmask, 1880);
Clib2Call(sigismember, 1884);
Clib2Call(sigemptyset, 1888);
Clib2Call(sigfillset, 1892);
Clib2Call(sigdelset, 1896);
Clib2Call(sigaddset, 1900);
Clib2Call(kill, 1904);
Clib2Call(sigaction, 1908);
Clib2Call(perror, 1912);
Clib2Call(fdopen64, 1916);
Clib2Call(fopen64, 1920);
Clib2Call(freopen64, 1924);
Clib2Call(ftello64, 1928);
Clib2Call(fseeko64, 1932);
Clib2Call(fgetpos64, 1936);
Clib2Call(fsetpos64, 1940);
Clib2Call(tmpfile64, 1944);
Clib2Call(fopen, 1948);
Clib2Call(fclose, 1952);
Clib2Call(fflush, 1956);
Clib2Call(freopen, 1960);
Clib2Call(setvbuf, 1964);
Clib2Call(setbuf, 1968);
Clib2Call(fseek, 1972);
Clib2Call(ftell, 1976);
Clib2Call(rewind, 1980);
Clib2Call(fgetpos, 1984);
Clib2Call(fsetpos, 1988);
Clib2Call(fgetc, 1992);
Clib2Call(getc, 1996);
Clib2Call(getchar, 2000);
Clib2Call(ungetc, 2004);
Clib2Call(fputc, 2008);
Clib2Call(putc, 2012);
Clib2Call(putchar, 2016);
Clib2Call(fgets, 2020);
Clib2Call(gets, 2024);
Clib2Call(fscanf, 2028);
Clib2Call(scanf, 2032);
Clib2Call(sscanf, 2036);
Clib2Call(fputs, 2040);
Clib2Call(puts, 2044);
Clib2Call(dprintf, 2048);
Clib2Call(fprintf, 2052);
Clib2Call(printf, 2056);
Clib2Call(sprintf, 2060);
Clib2Call(vdprintf, 2064);
Clib2Call(vfprintf, 2068);
Clib2Call(vprintf, 2072);
Clib2Call(vsprintf, 2076);
Clib2Call(fread, 2080);
Clib2Call(fwrite, 2084);
Clib2Call(feof, 2088);
Clib2Call(ferror, 2092);
Clib2Call(clearerr, 2096);
Clib2Call(rename, 2100);
Clib2Call(remove, 2104);
Clib2Call(tmpfile, 2108);
Clib2Call(tmpnam, 2112);
Clib2Call(tempnam, 2116);
Clib2Call(ctermid, 2120);
Clib2Call(__flush, 2124);
Clib2Call(__unlockfile, 2128);
Clib2Call(getc_unlocked, 2132);
Clib2Call(getchar_unlocked, 2136);
Clib2Call(putc_unlocked, 2140);
Clib2Call(putchar_unlocked, 2144);
Clib2Call(getline, 2148);
Clib2Call(getdelim, 2152);
Clib2Call(fdopen, 2156);
Clib2Call(fileno, 2160);
Clib2Call(asprintf, 2164);
Clib2Call(vsnprintf, 2168);
Clib2Call(pclose, 2172);
Clib2Call(popen, 2176);
Clib2Call(fseeko, 2180);
Clib2Call(ftello, 2184);
Clib2Call(flockfile, 2188);
Clib2Call(funlockfile, 2192);
Clib2Call(ftrylockfile, 2196);
Clib2Call(vasprintf, 2200);
Clib2Call(vfscanf, 2204);
Clib2Call(vsscanf, 2208);
Clib2Call(vscanf, 2212);
Clib2Call(snprintf, 2216);
Clib2Call(_flushlbf, 2220);
Clib2Call(__fsetlocking, 2224);
Clib2Call(__fwriting, 2228);
Clib2Call(__freading, 2232);
Clib2Call(__freadable, 2236);
Clib2Call(__fwritable, 2240);
Clib2Call(__flbf, 2244);
Clib2Call(__fbufsize, 2248);
Clib2Call(__fpending, 2252);
Clib2Call(__fpurge, 2256);
Clib2Call(fpurge, 2260);
Clib2Call(__fseterr, 2264);
Clib2Call(__freadahead, 2268);
Clib2Call(__freadptrinc, 2272);
Clib2Call(__mb_cur_max, 2276);
Clib2Call(__getprogname, 2280);
Clib2Call(mblen, 2284);
Clib2Call(mbtowc, 2288);
Clib2Call(_mbtowc_r, 2292);
Clib2Call(_mbstowcs_r, 2296);
Clib2Call(wctomb, 2300);
Clib2Call(_wctomb_r, 2304);
Clib2Call(mbstowcs, 2308);
Clib2Call(wcstombs, 2312);
Clib2Call(_wcstombs_r, 2316);
Clib2Call(malloc, 2320);
Clib2Call(calloc, 2324);
Clib2Call(free, 2328);
Clib2Call(realloc, 2332);
Clib2Call(valloc, 2336);
Clib2Call(aligned_alloc, 2340);
Clib2Call(posix_memalign, 2344);
Clib2Call(abs, 2348);
Clib2Call(labs, 2352);
Clib2Call(div, 2356);
Clib2Call(ldiv, 2360);
Clib2Call(rand, 2364);
Clib2Call(srand, 2368);
Clib2Call(random, 2372);
Clib2Call(srandom, 2376);
Clib2Call(initstate, 2380);
Clib2Call(setstate, 2384);
Clib2Call(l64a, 2388);
Clib2Call(a64l, 2392);
Clib2Call(setkey, 2396);
Clib2Call(drand48, 2400);
Clib2Call(erand48, 2404);
Clib2Call(lrand48, 2408);
Clib2Call(nrand48, 2412);
Clib2Call(mrand48, 2416);
Clib2Call(jrand48, 2420);
Clib2Call(srand48, 2424);
Clib2Call(seed48, 2428);
Clib2Call(lcong48, 2432);
Clib2Call(system, 2436);
Clib2Call(exit, 2440);
Clib2Call(abort, 2444);
Clib2Call(atexit, 2448);
Clib2Call(getenv, 2452);
Clib2Call(bsearch, 2456);
Clib2Call(qsort, 2460);
Clib2Call(strtod, 2464);
Clib2Call(strtol, 2468);
Clib2Call(strtoul, 2472);
Clib2Call(strtoq, 2476);
Clib2Call(atof, 2480);
Clib2Call(atoi, 2484);
Clib2Call(atol, 2488);
Clib2Call(itoa, 2492);
Clib2Call(lltoa, 2496);
Clib2Call(_exit, 2500);
Clib2Call(rand_r, 2504);
Clib2Call(mktemp, 2508);
Clib2Call(mkstemp, 2512);
Clib2Call(unsetenv, 2516);
Clib2Call(setenv, 2520);
Clib2Call(putenv, 2524);
Clib2Call(mkdtemp, 2528);
Clib2Call(getexecname, 2532);
Clib2Call(strtoll, 2536);
Clib2Call(strtold, 2540);
Clib2Call(strtoull, 2544);
Clib2Call(atoll, 2548);
Clib2Call(llabs, 2552);
Clib2Call(lldiv, 2556);
Clib2Call(strtof, 2560);
Clib2Call(atoff, 2564);
Clib2Call(_Exit, 2568);
Clib2Call(ecvt, 2572);
Clib2Call(fcvt, 2576);
Clib2Call(gcvt, 2580);
Clib2Call(secure_getenv, 2584);
Clib2Call(reallocarray, 2588);
Clib2Call(qsort_r, 2592);
Clib2Call(arc4random, 2596);
Clib2Call(arc4random_buf, 2600);
Clib2Call(arc4random_uniform, 2604);
Clib2Call(arc4random_stir, 2608);
Clib2Call(arc4random_addrandom, 2612);
Clib2Call(strerror, 2616);
Clib2Call(strcat, 2620);
Clib2Call(strncat, 2624);
Clib2Call(strcmp, 2628);
Clib2Call(strncmp, 2632);
Clib2Call(strcpy, 2636);
Clib2Call(strncpy, 2640);
Clib2Call(strnlen, 2644);
Clib2Call(strlen, 2648);
Clib2Call(strchr, 2652);
Clib2Call(strrchr, 2656);
Clib2Call(strspn, 2660);
Clib2Call(strcspn, 2664);
Clib2Call(strpbrk, 2668);
Clib2Call(strtok, 2672);
Clib2Call(strstr, 2676);
Clib2Call(strnstr, 2680);
Clib2Call(strsep, 2684);
Clib2Call(stpcpy, 2688);
Clib2Call(stpncpy, 2692);
Clib2Call(stccpy, 2696);
Clib2Call(strcoll, 2700);
Clib2Call(strxfrm, 2704);
Clib2Call(memmove, 2708);
Clib2Call(memchr, 2712);
Clib2Call(memcmp, 2716);
Clib2Call(memcpy, 2720);
Clib2Call(memset, 2724);
Clib2Call(strerror_r, 2728);
Clib2Call(strdup, 2732);
Clib2Call(strndup, 2736);
Clib2Call(bcopy, 2740);
Clib2Call(bzero, 2744);
Clib2Call(explicit_bzero, 2748);
Clib2Call(bcmp, 2752);
Clib2Call(strlcpy, 2756);
Clib2Call(strlcat, 2760);
Clib2Call(strtok_r, 2764);
Clib2Call(strsignal, 2768);
Clib2Call(memccpy, 2772);
Clib2Call(index, 2776);
Clib2Call(rindex, 2780);
Clib2Call(strverscmp, 2784);
Clib2Call(strchrnul, 2788);
Clib2Call(strcasestr, 2792);
Clib2Call(memmem, 2796);
Clib2Call(memrchr, 2800);
Clib2Call(mempcpy, 2804);
Clib2Call(strcasecmp, 2808);
Clib2Call(strncasecmp, 2812);
Clib2Call(ffs, 2816);
Clib2Call(ffsl, 2820);
Clib2Call(ffsll, 2824);
Clib2Call(tgetent, 2828);
Clib2Call(tgetnum, 2832);
Clib2Call(tgetflag, 2836);
Clib2Call(tgetstr, 2840);
Clib2Call(tputs, 2844);
Clib2Call(tparam, 2848);
Clib2Call(tgoto, 2852);
Clib2Call(tcgetattr, 2856);
Clib2Call(tcsetattr, 2860);
Clib2Call(tcsendbreak, 2864);
Clib2Call(tcdrain, 2868);
Clib2Call(tcflush, 2872);
Clib2Call(tcflow, 2876);
Clib2Call(cfmakeraw, 2880);
Clib2Call(cfgetispeed, 2884);
Clib2Call(cfgetospeed, 2888);
Clib2Call(cfsetispeed, 2892);
Clib2Call(cfsetospeed, 2896);
Clib2Call(clock, 2900);
Clib2Call(time, 2904);
Clib2Call(asctime, 2908);
Clib2Call(ctime, 2912);
Clib2Call(gmtime, 2916);
Clib2Call(localtime, 2920);
Clib2Call(mktime, 2924);
Clib2Call(difftime, 2928);
Clib2Call(strftime, 2932);
Clib2Call(strptime, 2936);
Clib2Call(asctime_r, 2940);
Clib2Call(ctime_r, 2944);
Clib2Call(gmtime_r, 2948);
Clib2Call(localtime_r, 2952);
Clib2Call(tzset, 2956);
Clib2Call(nanosleep, 2960);
Clib2Call(clock_gettime, 2964);
Clib2Call(clock_settime, 2968);
Clib2Call(clock_getres, 2972);
Clib2Call(clock_nanosleep, 2976);
Clib2Call(rdtsc, 2980);
Clib2Call(clock_gettime64, 2984);
Clib2Call(c16rtomb, 2988);
Clib2Call(mbrtoc16, 2992);
Clib2Call(c32rtomb, 2996);
Clib2Call(mbrtoc32, 3000);
Clib2Call(ulimit, 3004);
Clib2Call(isatty, 3008);
Clib2Call(dup, 3012);
Clib2Call(dup2, 3016);
Clib2Call(lseek, 3020);
Clib2Call(access, 3024);
Clib2Call(chown, 3028);
Clib2Call(fchown, 3032);
Clib2Call(lchown, 3036);
Clib2Call(truncate, 3040);
Clib2Call(ftruncate, 3044);
Clib2Call(getpagesize, 3048);
Clib2Call(ftruncate64, 3052);
Clib2Call(truncate64, 3056);
Clib2Call(lseek64, 3060);
Clib2Call(alarm, 3064);
Clib2Call(ualarm, 3068);
Clib2Call(link, 3072);
Clib2Call(unlink, 3076);
Clib2Call(symlink, 3080);
Clib2Call(readlink, 3084);
Clib2Call(chdir, 3088);
Clib2Call(fchdir, 3092);
Clib2Call(lockf, 3096);
Clib2Call(sleep, 3100);
Clib2Call(usleep, 3104);
Clib2Call(pause, 3108);
Clib2Call(getpid, 3112);
Clib2Call(getppid, 3116);
Clib2Call(getpgrp, 3120);
Clib2Call(tcgetpgrp, 3124);
Clib2Call(tcsetpgrp, 3128);
Clib2Call(realpath, 3132);
Clib2Call(fsync, 3136);
Clib2Call(fdatasync, 3140);
Clib2Call(ttyname, 3144);
Clib2Call(ttyname_r, 3148);
Clib2Call(execl, 3152);
Clib2Call(execle, 3156);
Clib2Call(execlp, 3160);
Clib2Call(execv, 3164);
Clib2Call(execve, 3168);
Clib2Call(execvp, 3172);
Clib2Call(encrypt, 3176);
Clib2Call(spawnv, 3180);
Clib2Call(spawnvp, 3184);
Clib2Call(sysconf, 3188);
Clib2Call(enableUnixPaths, 3192);
Clib2Call(disableUnixPaths, 3196);
Clib2Call(enableAltivec, 3200);
Clib2Call(disableAltivec, 3204);
Clib2Call(enableOptimizedFunctions, 3208);
Clib2Call(disableOptimizedFunctions, 3212);
Clib2Call(getcwd, 3216);
Clib2Call(getwd, 3220);
Clib2Call(get_current_dir_name, 3224);
Clib2Call(gethostid, 3228);
Clib2Call(gethostname, 3232);
Clib2Call(getdomainname, 3236);
Clib2Call(setdomainname, 3240);
Clib2Call(getlogin, 3244);
Clib2Call(getlogin_r, 3248);
Clib2Call(crypt, 3252);
Clib2Call(getegid, 3256);
Clib2Call(geteuid, 3260);
Clib2Call(getgid, 3264);
Clib2Call(getgroups, 3268);
Clib2Call(getpass, 3272);
Clib2Call(getuid, 3276);
Clib2Call(initgroups, 3280);
Clib2Call(setegid, 3284);
Clib2Call(seteuid, 3288);
Clib2Call(setgid, 3292);
Clib2Call(setgroups, 3296);
Clib2Call(setregid, 3300);
Clib2Call(setreuid, 3304);
Clib2Call(setsid, 3308);
Clib2Call(setuid, 3312);
Clib2Call(setlogin, 3316);
Clib2Call(pathconf, 3320);
Clib2Call(fpathconf, 3324);
Clib2Call(pipe, 3328);
Clib2Call(pipe2, 3332);
Clib2Call(pread, 3336);
Clib2Call(pwrite, 3340);
Clib2Call(pread64, 3344);
Clib2Call(pwrite64, 3348);
Clib2Call(utime, 3352);
Clib2Call(btowc, 3356);
Clib2Call(wctob, 3360);
Clib2Call(wcscat, 3364);
Clib2Call(wcsncat, 3368);
Clib2Call(wcscmp, 3372);
Clib2Call(wcsncmp, 3376);
Clib2Call(wcscpy, 3380);
Clib2Call(wcsncpy, 3384);
Clib2Call(wcslen, 3388);
Clib2Call(wcschr, 3392);
Clib2Call(wcsspn, 3396);
Clib2Call(wcspbrk, 3400);
Clib2Call(wcstok, 3404);
Clib2Call(wcsstr, 3408);
Clib2Call(wcswidth, 3412);
Clib2Call(wcwidth, 3416);
Clib2Call(wcstod, 3420);
Clib2Call(wcstol, 3424);
Clib2Call(wcstoul, 3428);
Clib2Call(wcstof, 3432);
Clib2Call(wscoll, 3436);
Clib2Call(wcsxfrm, 3440);
Clib2Call(wmemchr, 3444);
Clib2Call(wmemcmp, 3448);
Clib2Call(wmemcpy, 3452);
Clib2Call(wmemmove, 3456);
Clib2Call(wmemset, 3460);
Clib2Call(fwide, 3464);
Clib2Call(fgetwc, 3468);
Clib2Call(getwc, 3472);
Clib2Call(getwchar, 3476);
Clib2Call(ungetwc, 3480);
Clib2Call(fgetws, 3484);
Clib2Call(fwscanf, 3488);
Clib2Call(swscanf, 3492);
Clib2Call(vfwscanf, 3496);
Clib2Call(vswscanf, 3500);
Clib2Call(vwscanf, 3504);
Clib2Call(wscanf, 3508);
Clib2Call(fputwc, 3512);
Clib2Call(putwc, 3516);
Clib2Call(putwchar, 3520);
Clib2Call(fputws, 3524);
Clib2Call(fwprintf, 3528);
Clib2Call(swprintf, 3532);
Clib2Call(vfwprintf, 3536);
Clib2Call(vswprintf, 3540);
Clib2Call(vwprintf, 3544);
Clib2Call(wprintf, 3548);
Clib2Call(wcsftime, 3552);
Clib2Call(mbrlen, 3556);
Clib2Call(mbrtowc, 3560);
Clib2Call(mbsinit, 3564);
Clib2Call(mbsrtowcs, 3568);
Clib2Call(wcrtomb, 3572);
Clib2Call(wcscoll, 3576);
Clib2Call(wcscspn, 3580);
Clib2Call(wcsrchr, 3584);
Clib2Call(wcsrtombs, 3588);
Clib2Call(wcstoll, 3592);
Clib2Call(wcstoull, 3596);
Clib2Call(wcstold, 3600);
Clib2Call(mbsnrtowcs, 3604);
Clib2Call(wcsnrtombs, 3608);
Clib2Call(wcsdup, 3612);
Clib2Call(wcsnlen, 3616);
Clib2Call(wcpcpy, 3620);
Clib2Call(wcpncpy, 3624);
Clib2Call(wcscasecmp, 3628);
Clib2Call(wcscasecmp_l, 3632);
Clib2Call(wcsncasecmp, 3636);
Clib2Call(wcsncasecmp_l, 3640);
Clib2Call(wcscoll_l, 3644);
Clib2Call(wcsxfrm_l, 3648);
Clib2Call(iswalnum, 3652);
Clib2Call(iswalpha, 3656);
Clib2Call(iswcntrl, 3660);
Clib2Call(iswdigit, 3664);
Clib2Call(iswxdigit, 3668);
Clib2Call(iswgraph, 3672);
Clib2Call(iswpunct, 3676);
Clib2Call(iswprint, 3680);
Clib2Call(iswlower, 3684);
Clib2Call(iswupper, 3688);
Clib2Call(iswspace, 3692);
Clib2Call(iswblank, 3696);
Clib2Call(towlower, 3700);
Clib2Call(towupper, 3704);
Clib2Call(wctype, 3708);
Clib2Call(iswctype, 3712);
Clib2Call(wctrans, 3716);
Clib2Call(towctrans, 3720);
Clib2Call(inet_addr, 3724);
Clib2Call(inet_aton, 3728);
Clib2Call(inet_lnaof, 3732);
Clib2Call(inet_makeaddr, 3736);
Clib2Call(inet_netof, 3740);
Clib2Call(inet_network, 3744);
Clib2Call(inet_ntoa, 3748);
Clib2Call(inet_ntop, 3752);
Clib2Call(inet_pton, 3756);
Clib2Call(ns_get16, 3760);
Clib2Call(ns_get32, 3764);
Clib2Call(ns_put16, 3768);
Clib2Call(ns_put32, 3772);
Clib2Call(ns_initparse, 3776);
Clib2Call(ns_parserr, 3780);
Clib2Call(ns_skiprr, 3784);
Clib2Call(ns_name_uncompress, 3788);
Clib2Call(if_nametoindex, 3792);
Clib2Call(if_indextoname, 3796);
Clib2Call(bindresvport, 3800);
Clib2Call(bindresvport6, 3804);
Clib2Call(bswap16, 3808);
Clib2Call(bswap24, 3812);
Clib2Call(bswap32, 3816);
Clib2Call(bswap64, 3820);
Clib2Call(swab, 3824);
Clib2Call(swab24, 3828);
Clib2Call(swab32, 3832);
Clib2Call(swab64, 3836);
Clib2Call(flock, 3840);
Clib2Call(ioctl, 3844);
Clib2Call(ftok, 3848);
Clib2Call(mmap, 3852);
Clib2Call(munmap, 3856);
Clib2Call(msync, 3860);
Clib2Call(statfs, 3864);
Clib2Call(fstatfs, 3868);
Clib2Call(_msgctl, 3872);
Clib2Call(_msgget, 3876);
Clib2Call(_msgrcv, 3880);
Clib2Call(_msgsnd, 3884);
Clib2Call(_msgsnap, 3888);
Clib2Call(_msgids, 3892);
Clib2Call(getrlimit, 3896);
Clib2Call(setrlimit, 3900);
Clib2Call(getrusage, 3904);
Clib2Call(select, 3908);
Clib2Call(waitselect, 3912);
Clib2Call(_semctl, 3916);
Clib2Call(_semget, 3920);
Clib2Call(_semop, 3924);
Clib2Call(_semids, 3928);
Clib2Call(_semtimedop, 3932);
Clib2Call(_shmat, 3936);
Clib2Call(_shmctl, 3940);
Clib2Call(_shmdt, 3944);
Clib2Call(_shmget, 3948);
Clib2Call(_shmids, 3952);
Clib2Call(accept, 3956);
Clib2Call(bind, 3960);
Clib2Call(connect, 3964);
Clib2Call(getpeername, 3968);
Clib2Call(getsockname, 3972);
Clib2Call(getsockopt, 3976);
Clib2Call(listen, 3980);
Clib2Call(recv, 3984);
Clib2Call(recvfrom, 3988);
Clib2Call(recvmsg, 3992);
Clib2Call(send, 3996);
Clib2Call(sendmsg, 4000);
Clib2Call(sendto, 4004);
Clib2Call(setsockopt, 4008);
Clib2Call(shutdown, 4012);
Clib2Call(socket, 4016);
Clib2Call(socketpair, 4020);
Clib2Call(stat, 4024);
Clib2Call(fstat, 4028);
Clib2Call(lstat, 4032);
Clib2Call(chmod, 4036);
Clib2Call(fchmod, 4040);
Clib2Call(mkdir, 4044);
Clib2Call(rmdir, 4048);
Clib2Call(umask, 4052);
Clib2Call(statvfs, 4056);
Clib2Call(fstatvfs, 4060);
Clib2Call(closelog, 4064);
Clib2Call(openlog, 4068);
Clib2Call(setlogmask, 4072);
Clib2Call(syslog, 4076);
Clib2Call(vsyslog, 4080);
Clib2Call(sysinfo, 4084);
Clib2Call(gettimeofday, 4088);
Clib2Call(settimeofday, 4092);
Clib2Call(utimes, 4096);
Clib2Call(getitimer, 4100);
Clib2Call(setitimer, 4104);
Clib2Call(ftime, 4108);
Clib2Call(times, 4112);
Clib2Call(readv, 4116);
Clib2Call(writev, 4120);
Clib2Call(uname, 4124);
