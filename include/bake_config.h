/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef CORTO_HTTPLOGIN_BAKE_CONFIG_H
#define CORTO_HTTPLOGIN_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <corto.httprouter>
#include <corto.httpserver>
#include <corto.x>
#include <corto>
#include <corto.httprouter.c>
#include <corto.httpserver.c>
#include <corto.x.c>
#include <corto.c>
#include <corto.httpserver>
#include <corto.x>
#include <bake.util>

/* Headers of private dependencies */
#ifdef CORTO_HTTPLOGIN_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#if CORTO_HTTPLOGIN_IMPL && defined _MSC_VER
#define CORTO_HTTPLOGIN_EXPORT __declspec(dllexport)
#elif CORTO_HTTPLOGIN_IMPL
#define CORTO_HTTPLOGIN_EXPORT __attribute__((__visibility__("default")))
#elif defined _MSC_VER
#define CORTO_HTTPLOGIN_EXPORT __declspec(dllimport)
#else
#define CORTO_HTTPLOGIN_EXPORT
#endif

#endif

