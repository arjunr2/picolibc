/*
 * Copyright (c) 1994 Cygnus Support.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * and/or other materials related to such
 * distribution and use acknowledge that the software was developed
 * at Cygnus Support, Inc.  Cygnus Support, Inc. may not be used to
 * endorse or promote products derived from this software without
 * specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */
#include "test.h"
 one_line_type log2_vec[] = {
{64, 0,123,__LINE__, 0xc01149a7, 0x84bcd1b9, 0x3fa99999, 0x9999999a},	/* -4.32193=f(0.05)*/
{64, 0,123,__LINE__, 0xc00a934f, 0x0979a371, 0x3fb99999, 0x9999999a},	/* -3.32193=f(0.1)*/
{63, 0,123,__LINE__, 0xc005e54e, 0x37a9c4bd, 0x3fc33333, 0x33333334},	/* -2.73697=f(0.15)*/
{64, 0,123,__LINE__, 0xc002934f, 0x0979a371, 0x3fc99999, 0x9999999a},	/* -2.32193=f(0.2)*/
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0x3fd00000, 0x00000000},	/* -2=f(0.25)*/
{63, 0,123,__LINE__, 0xbffbca9c, 0x6f53897b, 0x3fd33333, 0x33333333},	/* -1.73697=f(0.3)*/
{63, 0,123,__LINE__, 0xbff83bb1, 0x144b3e89, 0x3fd66666, 0x66666666},	/* -1.51457=f(0.35)*/
{64, 0,123,__LINE__, 0xbff5269e, 0x12f346e3, 0x3fd99999, 0x99999999},	/* -1.32193=f(0.4)*/
{64, 0,123,__LINE__, 0xbff26e9a, 0xcbb3cc12, 0x3fdccccc, 0xcccccccc},	/* -1.152=f(0.45)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000001, 0x3fdfffff, 0xffffffff},	/* -1=f(0.5)*/
{64, 0,123,__LINE__, 0xbfe79538, 0xdea712f5, 0x3fe33333, 0x33333333},	/* -0.736966=f(0.6)*/
{64, 0,123,__LINE__, 0xbfe3e33b, 0x979f04f9, 0x3fe4cccc, 0xcccccccd},	/* -0.621488=f(0.65)*/
{64, 0,123,__LINE__, 0xbfe07762, 0x28967d11, 0x3fe66666, 0x66666667},	/* -0.514573=f(0.7)*/
{64, 0,123,__LINE__, 0xbfda8ff9, 0x71810a5a, 0x3fe80000, 0x00000001},	/* -0.415037=f(0.75)*/
{64, 0,123,__LINE__, 0xbfd49a78, 0x4bcd1b86, 0x3fe99999, 0x9999999b},	/* -0.321928=f(0.8)*/
{64, 0,123,__LINE__, 0xbfce02f5, 0x1a35ad7f, 0x3feb3333, 0x33333335},	/* -0.234465=f(0.85)*/
{64, 0,123,__LINE__, 0xbfc374d6, 0x5d9e6080, 0x3feccccc, 0xcccccccf},	/* -0.152003=f(0.9)*/
{64, 0,123,__LINE__, 0xbfb2f1b3, 0xbd2f9df8, 0x3fee6666, 0x66666669},	/* -0.0740006=f(0.95)*/
{64, 0,123,__LINE__, 0x3cb71547, 0x652b82fd, 0x3ff00000, 0x00000001},	/* 3.20343e-16=f(1)*/
{64, 0,123,__LINE__, 0x3fb20508, 0xf547ee11, 0x3ff0cccc, 0xccccccce},	/* 0.0703893=f(1.05)*/
{64, 0,123,__LINE__, 0x3fc199b7, 0x28cb9d17, 0x3ff19999, 0x9999999b},	/* 0.137504=f(1.1)*/
{63, 0,123,__LINE__, 0x3fc9cf23, 0x6bbeb393, 0x3ff26666, 0x66666668},	/* 0.201634=f(1.15)*/
{63, 0,123,__LINE__, 0x3fd0d58e, 0x42b1da20, 0x3ff33333, 0x33333335},	/* 0.263034=f(1.2)*/
{64, 0,123,__LINE__, 0x3fd49a78, 0x4bcd1b94, 0x3ff40000, 0x00000002},	/* 0.321928=f(1.25)*/
{63, 0,123,__LINE__, 0x3fd83988, 0xd0c1f616, 0x3ff4cccc, 0xcccccccf},	/* 0.378512=f(1.3)*/
{64, 0,123,__LINE__, 0x3fdbb59b, 0x5fafc565, 0x3ff59999, 0x9999999c},	/* 0.432959=f(1.35)*/
{64, 0,123,__LINE__, 0x3fe12758, 0x696ea51a, 0x3ff73333, 0x33333336},	/* 0.536053=f(1.45)*/
{64, 0,123,__LINE__, 0x3fe2b803, 0x473f7ad7, 0x3ff80000, 0x00000003},	/* 0.584963=f(1.5)*/
{64, 0,123,__LINE__, 0x3fe43b8a, 0x8d7bdcb3, 0x3ff8cccc, 0xccccccd0},	/* 0.632268=f(1.55)*/
{63, 0,123,__LINE__, 0x3fe5b2c3, 0xda197241, 0x3ff99999, 0x9999999d},	/* 0.678072=f(1.6)*/
{64, 0,123,__LINE__, 0x3fe71e71, 0x11726219, 0x3ffa6666, 0x6666666a},	/* 0.722466=f(1.65)*/
{64, 0,123,__LINE__, 0x3fe87f42, 0xb97294a4, 0x3ffb3333, 0x33333337},	/* 0.765535=f(1.7)*/
{64, 0,123,__LINE__, 0x3fe9d5d9, 0xfd5010ba, 0x3ffc0000, 0x00000004},	/* 0.807355=f(1.75)*/
{64, 0,123,__LINE__, 0x3feb22ca, 0x689867e3, 0x3ffccccc, 0xccccccd1},	/* 0.847997=f(1.8)*/
{64, 0,123,__LINE__, 0x3fec669b, 0x6586ad66, 0x3ffd9999, 0x9999999e},	/* 0.887525=f(1.85)*/
{63, 0,123,__LINE__, 0x3feda1c9, 0x885a0c44, 0x3ffe6666, 0x6666666b},	/* 0.925999=f(1.9)*/
{64, 0,123,__LINE__, 0x3feed4c7, 0xafa075de, 0x3fff3333, 0x33333338},	/* 0.963474=f(1.95)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000003, 0x40000000, 0x00000002},	/* 1=f(2)*/
{64, 0,123,__LINE__, 0x3ff091ea, 0x6073fc57, 0x40006666, 0x66666668},	/* 1.03562=f(2.05)*/
{64, 0,123,__LINE__, 0x3ff12050, 0x8f547ee1, 0x4000cccc, 0xccccccce},	/* 1.07039=f(2.1)*/
{64, 0,123,__LINE__, 0x3ff1ab5c, 0xeadad9c6, 0x40013333, 0x33333334},	/* 1.10434=f(2.15)*/
{64, 0,123,__LINE__, 0x3ff23336, 0xe51973a2, 0x40019999, 0x9999999a},	/* 1.1375=f(2.2)*/
{64, 0,123,__LINE__, 0x3ff2b803, 0x473f7ad1, 0x40020000, 0x00000000},	/* 1.16993=f(2.25)*/
{64, 0,123,__LINE__, 0x3ff339e4, 0x6d77d670, 0x40026666, 0x66666666},	/* 1.20163=f(2.3)*/
{64, 0,123,__LINE__, 0x3ff3b8fa, 0x7c57a123, 0x4002cccc, 0xcccccccc},	/* 1.23266=f(2.35)*/
{64, 0,123,__LINE__, 0x3ff43563, 0x90ac7684, 0x40033333, 0x33333332},	/* 1.26303=f(2.4)*/
{64, 0,123,__LINE__, 0x3ff4af3b, 0xea5cc9cf, 0x40039999, 0x99999998},	/* 1.29278=f(2.45)*/
{64, 0,123,__LINE__, 0x3ff5269e, 0x12f346e0, 0x4003ffff, 0xfffffffe},	/* 1.32193=f(2.5)*/
{64, 0,123,__LINE__, 0x3ff59ba3, 0x005907b4, 0x40046666, 0x66666664},	/* 1.3505=f(2.55)*/
{64, 0,123,__LINE__, 0x3ff60e62, 0x34307d80, 0x4004cccc, 0xccccccca},	/* 1.37851=f(2.6)*/
{64, 0,123,__LINE__, 0x3ff67ef1, 0xd833bcc4, 0x40053333, 0x33333330},	/* 1.40599=f(2.65)*/
{64, 0,123,__LINE__, 0x3ff6ed66, 0xd7ebf153, 0x40059999, 0x99999996},	/* 1.43296=f(2.7)*/
{64, 0,123,__LINE__, 0x3ff759d4, 0xf80cba80, 0x4005ffff, 0xfffffffc},	/* 1.45943=f(2.75)*/
{64, 0,123,__LINE__, 0x3ff7c44e, 0xebb4c172, 0x40066666, 0x66666662},	/* 1.48543=f(2.8)*/
{64, 0,123,__LINE__, 0x3ff82ce6, 0x67ccc382, 0x4006cccc, 0xccccccc8},	/* 1.51096=f(2.85)*/
{64, 0,123,__LINE__, 0x3ff893ac, 0x34b75285, 0x40073333, 0x3333332e},	/* 1.53605=f(2.9)*/
{64, 0,123,__LINE__, 0x3ff8f8b0, 0x3e7d8942, 0x40079999, 0x99999994},	/* 1.56071=f(2.95)*/
{63, 0,123,__LINE__, 0x3ff95c01, 0xa39fbd63, 0x4007ffff, 0xfffffffa},	/* 1.58496=f(3)*/
{64, 0,123,__LINE__, 0x3ff9bdae, 0xc2acb3cd, 0x40086666, 0x66666660},	/* 1.60881=f(3.05)*/
{64, 0,123,__LINE__, 0x3ffa1dc5, 0x46bdee50, 0x4008cccc, 0xccccccc6},	/* 1.63227=f(3.1)*/
{63, 0,123,__LINE__, 0x3ffa7c52, 0x32f43c41, 0x40093333, 0x3333332c},	/* 1.65535=f(3.15)*/
{64, 0,123,__LINE__, 0x3ffad961, 0xed0cb916, 0x40099999, 0x99999992},	/* 1.67807=f(3.2)*/
{64, 0,123,__LINE__, 0x3ffb3500, 0x4723c45f, 0x4009ffff, 0xfffffff8},	/* 1.70044=f(3.25)*/
{64, 0,123,__LINE__, 0x3ffb8f38, 0x88b93102, 0x400a6666, 0x6666665e},	/* 1.72247=f(3.3)*/
{63, 0,123,__LINE__, 0x3ffbe815, 0x7706e30f, 0x400acccc, 0xccccccc4},	/* 1.74416=f(3.35)*/
{63, 0,123,__LINE__, 0x3ffc3fa1, 0x5cb94a47, 0x400b3333, 0x3333332a},	/* 1.76553=f(3.4)*/
{64, 0,123,__LINE__, 0x3ffc95e6, 0x111793d1, 0x400b9999, 0x99999990},	/* 1.7866=f(3.45)*/
{63, 0,123,__LINE__, 0x3ffceaec, 0xfea80851, 0x400bffff, 0xfffffff6},	/* 1.80735=f(3.5)*/
{64, 0,123,__LINE__, 0x3ffd3ebf, 0x295bced8, 0x400c6666, 0x6666665c},	/* 1.82782=f(3.55)*/
{64, 0,123,__LINE__, 0x3ffd9165, 0x344c33e6, 0x400ccccc, 0xccccccc2},	/* 1.848=f(3.6)*/
{64, 0,123,__LINE__, 0x3ffde2e7, 0x6712998b, 0x400d3333, 0x33333328},	/* 1.8679=f(3.65)*/
{63, 0,123,__LINE__, 0x3ffe334d, 0xb2c356a7, 0x400d9999, 0x9999998e},	/* 1.88753=f(3.7)*/
{64, 0,123,__LINE__, 0x3ffe829f, 0xb6930442, 0x400dffff, 0xfffffff4},	/* 1.90689=f(3.75)*/
{63, 0,123,__LINE__, 0x3ffed0e4, 0xc42d0615, 0x400e6666, 0x6666665a},	/* 1.926=f(3.8)*/
{64, 0,123,__LINE__, 0x3fff1e23, 0xe3c17bf1, 0x400ecccc, 0xccccccc0},	/* 1.94486=f(3.85)*/
{64, 0,123,__LINE__, 0x3fff6a63, 0xd7d03ae2, 0x400f3333, 0x33333326},	/* 1.96347=f(3.9)*/
{63, 0,123,__LINE__, 0x3fffb5ab, 0x20b5ec8f, 0x400f9999, 0x9999998c},	/* 1.98185=f(3.95)*/
{64, 0,123,__LINE__, 0x3fffffff, 0xfffffff6, 0x400fffff, 0xfffffff2},	/* 2=f(4)*/
{64, 0,123,__LINE__, 0x400024b4, 0x3dc5d75a, 0x40103333, 0x3333332c},	/* 2.01792=f(4.05)*/
{64, 0,123,__LINE__, 0x400048f5, 0x3039fe25, 0x40106666, 0x6666665f},	/* 2.03562=f(4.1)*/
{64, 0,123,__LINE__, 0x40006cc5, 0xa2e92014, 0x40109999, 0x99999992},	/* 2.05311=f(4.15)*/
{64, 0,123,__LINE__, 0x40009028, 0x47aa3f6a, 0x4010cccc, 0xccccccc5},	/* 2.07039=f(4.2)*/
{64, 0,123,__LINE__, 0x4000b31f, 0xb7d64893, 0x4010ffff, 0xfffffff8},	/* 2.08746=f(4.25)*/
{64, 0,123,__LINE__, 0x4000d5ae, 0x756d6cdd, 0x40113333, 0x3333332b},	/* 2.10434=f(4.3)*/
{64, 0,123,__LINE__, 0x4000f7d6, 0xec2b87f4, 0x40116666, 0x6666665e},	/* 2.12102=f(4.35)*/
{64, 0,123,__LINE__, 0x4001199b, 0x728cb9cb, 0x40119999, 0x99999991},	/* 2.1375=f(4.4)*/
{64, 0,123,__LINE__, 0x40013afe, 0x4ac34723, 0x4011cccc, 0xccccccc4},	/* 2.15381=f(4.45)*/
{64, 0,123,__LINE__, 0x40015c01, 0xa39fbd63, 0x4011ffff, 0xfffffff7},	/* 2.16993=f(4.5)*/
{64, 0,123,__LINE__, 0x40017ca7, 0x996c42e9, 0x40123333, 0x3333332a},	/* 2.18587=f(4.55)*/
{64, 0,123,__LINE__, 0x40019cf2, 0x36bbeb32, 0x40126666, 0x6666665d},	/* 2.20163=f(4.6)*/
{64, 0,123,__LINE__, 0x4001bce3, 0x752ed5da, 0x40129999, 0x99999990},	/* 2.21723=f(4.65)*/
{64, 0,123,__LINE__, 0x4001dc7d, 0x3e2bd08c, 0x4012cccc, 0xccccccc3},	/* 2.23266=f(4.7)*/
{63, 0,123,__LINE__, 0x4001fbc1, 0x6b90267b, 0x4012ffff, 0xfffffff6},	/* 2.24793=f(4.75)*/
{64, 0,123,__LINE__, 0x40021ab1, 0xc8563b3d, 0x40133333, 0x33333329},	/* 2.26303=f(4.8)*/
{64, 0,123,__LINE__, 0x40023950, 0x113383b2, 0x40136666, 0x6666665c},	/* 2.27798=f(4.85)*/
{64, 0,123,__LINE__, 0x4002579d, 0xf52e64e2, 0x40139999, 0x9999998f},	/* 2.29278=f(4.9)*/
{64, 0,123,__LINE__, 0x4002759d, 0x162c7733, 0x4013cccc, 0xccccccc2},	/* 2.30743=f(4.95)*/
{64, 0,123,__LINE__, 0x4002934f, 0x0979a36b, 0x4013ffff, 0xfffffff5},	/* 2.32193=f(5)*/
{64, 0,123,__LINE__, 0x4002b0b5, 0x584886c6, 0x40143333, 0x33333328},	/* 2.33628=f(5.05)*/
{64, 0,123,__LINE__, 0x4002cdd1, 0x802c83d5, 0x40146666, 0x6666665b},	/* 2.3505=f(5.1)*/
{64, 0,123,__LINE__, 0x4002eaa4, 0xf38ddef4, 0x40149999, 0x9999998e},	/* 2.36457=f(5.15)*/
{64, 0,123,__LINE__, 0x40030731, 0x1a183ebb, 0x4014cccc, 0xccccccc1},	/* 2.37851=f(5.2)*/
{64, 0,123,__LINE__, 0x40032377, 0x5123e2da, 0x4014ffff, 0xfffffff4},	/* 2.39232=f(5.25)*/
{64, 0,123,__LINE__, 0x40033f78, 0xec19de5d, 0x40153333, 0x33333327},	/* 2.40599=f(5.3)*/
{64, 0,123,__LINE__, 0x40035b37, 0x34d39d41, 0x40156666, 0x6666665a},	/* 2.41954=f(5.35)*/
{63, 0,123,__LINE__, 0x400376b3, 0x6bf5f8a5, 0x40159999, 0x9999998d},	/* 2.43296=f(5.4)*/
{64, 0,123,__LINE__, 0x400391ee, 0xc948186b, 0x4015cccc, 0xccccccc0},	/* 2.44626=f(5.45)*/
{64, 0,123,__LINE__, 0x4003acea, 0x7c065d3b, 0x4015ffff, 0xfffffff3},	/* 2.45943=f(5.5)*/
{64, 0,123,__LINE__, 0x4003c7a7, 0xab318a05, 0x40163333, 0x33333326},	/* 2.47249=f(5.55)*/
{63, 0,123,__LINE__, 0x4003e227, 0x75da60b5, 0x40166666, 0x66666659},	/* 2.48543=f(5.6)*/
{64, 0,123,__LINE__, 0x4003fc6a, 0xf369e28f, 0x40169999, 0x9999998c},	/* 2.49825=f(5.65)*/
{63, 0,123,__LINE__, 0x40041673, 0x33e661bd, 0x4016cccc, 0xccccccbf},	/* 2.51096=f(5.7)*/
{63, 0,123,__LINE__, 0x40043041, 0x40358ea3, 0x4016ffff, 0xfffffff2},	/* 2.52356=f(5.75)*/
{64, 0,123,__LINE__, 0x400449d6, 0x1a5ba93e, 0x40173333, 0x33333325},	/* 2.53605=f(5.8)*/
{64, 0,123,__LINE__, 0x40046332, 0xbdb7fc23, 0x40176666, 0x66666658},	/* 2.54844=f(5.85)*/
{64, 0,123,__LINE__, 0x40047c58, 0x1f3ec49d, 0x40179999, 0x9999998b},	/* 2.56071=f(5.9)*/
{64, 0,123,__LINE__, 0x40049547, 0x2db0a94d, 0x4017cccc, 0xccccccbe},	/* 2.57289=f(5.95)*/
{64, 0,123,__LINE__, 0x4004ae00, 0xd1cfdead, 0x4017ffff, 0xfffffff1},	/* 2.58496=f(6)*/
{64, 0,123,__LINE__, 0x4004c685, 0xee93170b, 0x40183333, 0x33333324},	/* 2.59694=f(6.05)*/
{64, 0,123,__LINE__, 0x4004ded7, 0x615659e2, 0x40186666, 0x66666657},	/* 2.60881=f(6.1)*/
{64, 0,123,__LINE__, 0x4004f6f6, 0x0209dcd7, 0x40189999, 0x9999998a},	/* 2.62059=f(6.15)*/
{64, 0,123,__LINE__, 0x40050ee2, 0xa35ef724, 0x4018cccc, 0xccccccbd},	/* 2.63227=f(6.2)*/
{63, 0,123,__LINE__, 0x4005269e, 0x12f346db, 0x4018ffff, 0xfffffff0},	/* 2.64386=f(6.25)*/
{63, 0,123,__LINE__, 0x40053e29, 0x197a1e1d, 0x40193333, 0x33333323},	/* 2.65535=f(6.3)*/
{64, 0,123,__LINE__, 0x40055584, 0x7ae44d14, 0x40196666, 0x66666656},	/* 2.66676=f(6.35)*/
{64, 0,123,__LINE__, 0x40056cb0, 0xf6865c87, 0x40199999, 0x99999989},	/* 2.67807=f(6.4)*/
{63, 0,123,__LINE__, 0x400583af, 0x473d4b8f, 0x4019cccc, 0xccccccbc},	/* 2.6893=f(6.45)*/
{63, 0,123,__LINE__, 0x40059a80, 0x2391e22b, 0x4019ffff, 0xffffffef},	/* 2.70044=f(6.5)*/
{64, 0,123,__LINE__, 0x4005b124, 0x3ddaa957, 0x401a3333, 0x33333322},	/* 2.71149=f(6.55)*/
{64, 0,123,__LINE__, 0x4005c79c, 0x445c987d, 0x401a6666, 0x66666655},	/* 2.72247=f(6.6)*/
{64, 0,123,__LINE__, 0x4005dde8, 0xe16a8734, 0x401a9999, 0x99999988},	/* 2.73335=f(6.65)*/
{64, 0,123,__LINE__, 0x4005f40a, 0xbb837184, 0x401acccc, 0xccccccbb},	/* 2.74416=f(6.7)*/
{64, 0,123,__LINE__, 0x40060a02, 0x756f9c15, 0x401affff, 0xffffffee},	/* 2.75489=f(6.75)*/
{64, 0,123,__LINE__, 0x40061fd0, 0xae5ca520, 0x401b3333, 0x33333321},	/* 2.76553=f(6.8)*/
{64, 0,123,__LINE__, 0x40063576, 0x01f88e22, 0x401b6666, 0x66666654},	/* 2.7761=f(6.85)*/
{63, 0,123,__LINE__, 0x40064af3, 0x088bc9e5, 0x401b9999, 0x99999987},	/* 2.7866=f(6.9)*/
{64, 0,123,__LINE__, 0x40066048, 0x571259b4, 0x401bcccc, 0xccccccba},	/* 2.79701=f(6.95)*/
{64, 0,123,__LINE__, 0x40067576, 0x7f540425, 0x401bffff, 0xffffffed},	/* 2.80735=f(7)*/
{64, 0,123,__LINE__, 0x40068a7e, 0x0ffbaf3e, 0x401c3333, 0x33333320},	/* 2.81762=f(7.05)*/
{64, 0,123,__LINE__, 0x40069f5f, 0x94ade768, 0x401c6666, 0x66666653},	/* 2.82782=f(7.1)*/
{64, 0,123,__LINE__, 0x4006b41b, 0x961e9bfc, 0x401c9999, 0x99999986},	/* 2.83794=f(7.15)*/
{64, 0,123,__LINE__, 0x4006c8b2, 0x9a2619ef, 0x401ccccc, 0xccccccb9},	/* 2.848=f(7.2)*/
{63, 0,123,__LINE__, 0x4006dd25, 0x23d54caf, 0x401cffff, 0xffffffec},	/* 2.85798=f(7.25)*/
{64, 0,123,__LINE__, 0x4006f173, 0xb3894cc2, 0x401d3333, 0x3333331f},	/* 2.8679=f(7.3)*/
{64, 0,123,__LINE__, 0x4007059e, 0xc6fe4395, 0x401d6666, 0x66666652},	/* 2.87774=f(7.35)*/
{64, 0,123,__LINE__, 0x400719a6, 0xd961ab50, 0x401d9999, 0x99999985},	/* 2.88753=f(7.4)*/
{63, 0,123,__LINE__, 0x40072d8c, 0x6363f165, 0x401dcccc, 0xccccccb8},	/* 2.89724=f(7.45)*/
{64, 0,123,__LINE__, 0x4007414f, 0xdb49821e, 0x401dffff, 0xffffffeb},	/* 2.90689=f(7.5)*/
{64, 0,123,__LINE__, 0x400754f1, 0xb4fb432b, 0x401e3333, 0x3333331e},	/* 2.91648=f(7.55)*/
{64, 0,123,__LINE__, 0x40076872, 0x62168307, 0x401e6666, 0x66666651},	/* 2.926=f(7.6)*/
{64, 0,123,__LINE__, 0x40077bd2, 0x51fc6288, 0x401e9999, 0x99999984},	/* 2.93546=f(7.65)*/
{64, 0,123,__LINE__, 0x40078f11, 0xf1e0bdf5, 0x401ecccc, 0xccccccb7},	/* 2.94486=f(7.7)*/
{64, 0,123,__LINE__, 0x4007a231, 0xacd89a94, 0x401effff, 0xffffffea},	/* 2.9542=f(7.75)*/
{64, 0,123,__LINE__, 0x4007b531, 0xebe81d6e, 0x401f3333, 0x3333331d},	/* 2.96347=f(7.8)*/
{64, 0,123,__LINE__, 0x4007c813, 0x16100fdc, 0x401f6666, 0x66666650},	/* 2.97269=f(7.85)*/
{64, 0,123,__LINE__, 0x4007dad5, 0x905af644, 0x401f9999, 0x99999983},	/* 2.98185=f(7.9)*/
{63, 0,123,__LINE__, 0x4007ed79, 0xbde9bd10, 0x401fcccc, 0xccccccb6},	/* 2.99095=f(7.95)*/
{64, 0,123,__LINE__, 0x4007ffff, 0xfffffff8, 0x401fffff, 0xffffffe9},	/* 3=f(8)*/
{64, 0,123,__LINE__, 0x40081268, 0xb60fef5d, 0x40201999, 0x9999998e},	/* 3.00899=f(8.05)*/
{64, 0,123,__LINE__, 0x400824b4, 0x3dc5d758, 0x40203333, 0x33333328},	/* 3.01792=f(8.1)*/
{64, 0,123,__LINE__, 0x400836e2, 0xf3134bfc, 0x40204ccc, 0xccccccc2},	/* 3.0268=f(8.15)*/
{64, 0,123,__LINE__, 0x400848f5, 0x3039fe23, 0x40206666, 0x6666665c},	/* 3.03562=f(8.2)*/
{64, 0,123,__LINE__, 0x40085aeb, 0x4dd63bef, 0x40207fff, 0xfffffff6},	/* 3.04439=f(8.25)*/
{64, 0,123,__LINE__, 0x40086cc5, 0xa2e92012, 0x40209999, 0x99999990},	/* 3.05311=f(8.3)*/
{64, 0,123,__LINE__, 0x40087e84, 0x84e272cd, 0x4020b333, 0x3333332a},	/* 3.06178=f(8.35)*/
{64, 0,123,__LINE__, 0x40089028, 0x47aa3f6a, 0x4020cccc, 0xccccccc4},	/* 3.07039=f(8.4)*/
{64, 0,123,__LINE__, 0x4008a1b1, 0x3daa20ef, 0x4020e666, 0x6666665e},	/* 3.07895=f(8.45)*/
{64, 0,123,__LINE__, 0x4008b31f, 0xb7d64893, 0x4020ffff, 0xfffffff8},	/* 3.08746=f(8.5)*/
{64, 0,123,__LINE__, 0x4008c474, 0x05b64073, 0x40211999, 0x99999992},	/* 3.09592=f(8.55)*/
{64, 0,123,__LINE__, 0x4008d5ae, 0x756d6cde, 0x40213333, 0x3333332c},	/* 3.10434=f(8.6)*/
{64, 0,123,__LINE__, 0x4008e6cf, 0x53c34e90, 0x40214ccc, 0xccccccc6},	/* 3.1127=f(8.65)*/
{64, 0,123,__LINE__, 0x4008f7d6, 0xec2b87f5, 0x40216666, 0x66666660},	/* 3.12102=f(8.7)*/
{64, 0,123,__LINE__, 0x400908c5, 0x88cda79a, 0x40217fff, 0xfffffffa},	/* 3.12928=f(8.75)*/
{64, 0,123,__LINE__, 0x4009199b, 0x728cb9cd, 0x40219999, 0x99999994},	/* 3.1375=f(8.8)*/
{64, 0,123,__LINE__, 0x40092a58, 0xf10ea355, 0x4021b333, 0x3333332e},	/* 3.14568=f(8.85)*/
{64, 0,123,__LINE__, 0x40093afe, 0x4ac34726, 0x4021cccc, 0xccccccc8},	/* 3.15381=f(8.9)*/
{64, 0,123,__LINE__, 0x40094b8b, 0xc4eb78d0, 0x4021e666, 0x66666662},	/* 3.16189=f(8.95)*/
{64, 0,123,__LINE__, 0x40095c01, 0xa39fbd66, 0x4021ffff, 0xfffffffc},	/* 3.16993=f(9)*/
{64, 0,123,__LINE__, 0x40096c60, 0x29d6dc80, 0x40221999, 0x99999996},	/* 3.17792=f(9.05)*/
{64, 0,123,__LINE__, 0x40097ca7, 0x996c42ec, 0x40223333, 0x33333330},	/* 3.18587=f(9.1)*/
{64, 0,123,__LINE__, 0x40098cd8, 0x3326389c, 0x40224ccc, 0xccccccca},	/* 3.19377=f(9.15)*/
{64, 0,123,__LINE__, 0x40099cf2, 0x36bbeb37, 0x40226666, 0x66666664},	/* 3.20163=f(9.2)*/
{64, 0,123,__LINE__, 0x4009acf5, 0xe2db4ec8, 0x40227fff, 0xfffffffe},	/* 3.20945=f(9.25)*/
{63, 0,123,__LINE__, 0x4009bce3, 0x752ed5df, 0x40229999, 0x99999998},	/* 3.21723=f(9.3)*/
{64, 0,123,__LINE__, 0x4009ccbb, 0x2a630268, 0x4022b333, 0x33333332},	/* 3.22497=f(9.35)*/
{64, 0,123,__LINE__, 0x4009dc7d, 0x3e2bd092, 0x4022cccc, 0xcccccccc},	/* 3.23266=f(9.4)*/
{64, 0,123,__LINE__, 0x4009ec29, 0xeb49fcd8, 0x4022e666, 0x66666666},	/* 3.24031=f(9.45)*/
{64, 0,123,__LINE__, 0x4009fbc1, 0x6b902681, 0x40230000, 0x00000000},	/* 3.24793=f(9.5)*/
{64, 0,123,__LINE__, 0x400a0b43, 0xf7e7cf8d, 0x40231999, 0x9999999a},	/* 3.2555=f(9.55)*/
{64, 0,123,__LINE__, 0x400a1ab1, 0xc8563b43, 0x40233333, 0x33333334},	/* 3.26303=f(9.6)*/
{64, 0,123,__LINE__, 0x400a2a0b, 0x14012c59, 0x40234ccc, 0xccccccce},	/* 3.27053=f(9.65)*/
{64, 0,123,__LINE__, 0x400a3950, 0x113383b9, 0x40236666, 0x66666668},	/* 3.27798=f(9.7)*/
{64, 0,123,__LINE__, 0x400a4880, 0xf561c0e8, 0x40238000, 0x00000002},	/* 3.2854=f(9.75)*/
{64, 0,123,__LINE__, 0x400a579d, 0xf52e64ea, 0x40239999, 0x9999999c},	/* 3.29278=f(9.8)*/
{64, 0,123,__LINE__, 0x400a66a7, 0x446e3896, 0x4023b333, 0x33333336},	/* 3.30012=f(9.85)*/
{64, 0,123,__LINE__, 0x400a759d, 0x162c773b, 0x4023cccc, 0xccccccd0},	/* 3.30743=f(9.9)*/
{64, 0,123,__LINE__, 0x400a847f, 0x9caede5f, 0x4023e666, 0x6666666a},	/* 3.3147=f(9.95)*/
{64, 0,123,__LINE__, 0x400a934f, 0x0979a374, 0x40240000, 0x00000004},	/* 3.32193=f(10)*/
{64, 0,123,__LINE__, 0x400aa20b, 0x8d535042, 0x40241999, 0x9999999e},	/* 3.32912=f(10.05)*/
{64, 0,123,__LINE__, 0x400ab0b5, 0x584886d0, 0x40243333, 0x33333338},	/* 3.33628=f(10.1)*/
{64, 0,123,__LINE__, 0x400abf4c, 0x99afad75, 0x40244ccc, 0xccccccd2},	/* 3.34341=f(10.15)*/
{64, 0,123,__LINE__, 0x400acdd1, 0x802c83df, 0x40246666, 0x6666666c},	/* 3.3505=f(10.2)*/
{64, 0,123,__LINE__, 0x400adc44, 0x39b3a19f, 0x40248000, 0x00000006},	/* 3.35755=f(10.25)*/
{64, 0,123,__LINE__, 0x400aeaa4, 0xf38ddefe, 0x40249999, 0x999999a0},	/* 3.36457=f(10.3)*/
{64, 0,123,__LINE__, 0x400af8f3, 0xda5ba8a4, 0x4024b333, 0x3333333a},	/* 3.37156=f(10.35)*/
{64, 0,123,__LINE__, 0x400b0731, 0x1a183ec6, 0x4024cccc, 0xccccccd4},	/* 3.37851=f(10.4)*/
{64, 0,123,__LINE__, 0x400b155c, 0xde1ce055, 0x4024e666, 0x6666666e},	/* 3.38543=f(10.45)*/
{64, 0,123,__LINE__, 0x400b2377, 0x5123e2e5, 0x40250000, 0x00000008},	/* 3.39232=f(10.5)*/
{64, 0,123,__LINE__, 0x400b3180, 0x9d4bb7b2, 0x40251999, 0x999999a2},	/* 3.39917=f(10.55)*/
{64, 0,123,__LINE__, 0x400b3f78, 0xec19de68, 0x40253333, 0x3333333c},	/* 3.40599=f(10.6)*/
{63, 0,123,__LINE__, 0x400b4d60, 0x667dc629, 0x40254ccc, 0xccccccd6},	/* 3.41278=f(10.65)*/
{64, 0,123,__LINE__, 0x400b5b37, 0x34d39d4d, 0x40256666, 0x66666670},	/* 3.41954=f(10.7)*/
{64, 0,123,__LINE__, 0x400b68fd, 0x7ee71059, 0x40258000, 0x0000000a},	/* 3.42626=f(10.75)*/
{64, 0,123,__LINE__, 0x400b76b3, 0x6bf5f8b1, 0x40259999, 0x999999a4},	/* 3.43296=f(10.8)*/
{64, 0,123,__LINE__, 0x400b8459, 0x22b2fb5e, 0x4025b333, 0x3333333e},	/* 3.43962=f(10.85)*/
{64, 0,123,__LINE__, 0x400b91ee, 0xc9481877, 0x4025cccc, 0xccccccd8},	/* 3.44626=f(10.9)*/
{64, 0,123,__LINE__, 0x400b9f74, 0x85592b84, 0x4025e666, 0x66666672},	/* 3.45286=f(10.95)*/
{64, 0,123,__LINE__, 0x400bacea, 0x7c065d48, 0x40260000, 0x0000000c},	/* 3.45943=f(11)*/
{64, 0,123,__LINE__, 0x400bba50, 0xd1ee8761, 0x40261999, 0x999999a6},	/* 3.46597=f(11.05)*/
{64, 0,123,__LINE__, 0x400bc7a7, 0xab318a13, 0x40263333, 0x33333340},	/* 3.47249=f(11.1)*/
{63, 0,123,__LINE__, 0x400bd4ef, 0x2b7294a9, 0x40264ccc, 0xccccccda},	/* 3.47897=f(11.15)*/
{64, 0,123,__LINE__, 0x400be227, 0x75da60c2, 0x40266666, 0x66666674},	/* 3.48543=f(11.2)*/
{64, 0,123,__LINE__, 0x400bef50, 0xad1960e1, 0x40268000, 0x0000000e},	/* 3.49185=f(11.25)*/
{64, 0,123,__LINE__, 0x400bfc6a, 0xf369e29e, 0x40269999, 0x999999a8},	/* 3.49825=f(11.3)*/
{64, 0,123,__LINE__, 0x400c0976, 0x6a9224c8, 0x4026b333, 0x33333342},	/* 3.50462=f(11.35)*/
{64, 0,123,__LINE__, 0x400c1673, 0x33e661cb, 0x4026cccc, 0xccccccdc},	/* 3.51096=f(11.4)*/
{64, 0,123,__LINE__, 0x400c2361, 0x704acea3, 0x4026e666, 0x66666676},	/* 3.51728=f(11.45)*/
{64, 0,123,__LINE__, 0x400c3041, 0x40358eb2, 0x40270000, 0x00000010},	/* 3.52356=f(11.5)*/
{64, 0,123,__LINE__, 0x400c3d12, 0xc3b09cba, 0x40271999, 0x999999aa},	/* 3.52982=f(11.55)*/
{64, 0,123,__LINE__, 0x400c49d6, 0x1a5ba94e, 0x40273333, 0x33333344},	/* 3.53605=f(11.6)*/
{64, 0,123,__LINE__, 0x400c568b, 0x636deef0, 0x40274ccc, 0xccccccde},	/* 3.54226=f(11.65)*/
{64, 0,123,__LINE__, 0x400c6332, 0xbdb7fc33, 0x40276666, 0x66666678},	/* 3.54844=f(11.7)*/
{64, 0,123,__LINE__, 0x400c6fcc, 0x47a5740c, 0x40278000, 0x00000012},	/* 3.55459=f(11.75)*/
{64, 0,123,__LINE__, 0x400c7c58, 0x1f3ec4ad, 0x40279999, 0x999999ac},	/* 3.56071=f(11.8)*/
{64, 0,123,__LINE__, 0x400c88d6, 0x622ad50a, 0x4027b333, 0x33333346},	/* 3.56682=f(11.85)*/
{63, 0,123,__LINE__, 0x400c9547, 0x2db0a95d, 0x4027cccc, 0xcccccce0},	/* 3.57289=f(11.9)*/
{64, 0,123,__LINE__, 0x400ca1aa, 0x9eb8feda, 0x4027e666, 0x6666667a},	/* 3.57894=f(11.95)*/
{64, 0,123,__LINE__, 0x400cae00, 0xd1cfdebe, 0x40280000, 0x00000014},	/* 3.58496=f(12)*/
{64, 0,123,__LINE__, 0x400cba49, 0xe326290e, 0x40281999, 0x999999ae},	/* 3.59096=f(12.05)*/
{64, 0,123,__LINE__, 0x400cc685, 0xee93171c, 0x40283333, 0x33333348},	/* 3.59694=f(12.1)*/
{64, 0,123,__LINE__, 0x400cd2b5, 0x0f95b61e, 0x40284ccc, 0xcccccce2},	/* 3.60288=f(12.15)*/
{64, 0,123,__LINE__, 0x400cded7, 0x615659f4, 0x40286666, 0x6666667c},	/* 3.60881=f(12.2)*/
{64, 0,123,__LINE__, 0x400ceaec, 0xfea80864, 0x40288000, 0x00000016},	/* 3.61471=f(12.25)*/
{64, 0,123,__LINE__, 0x400cf6f6, 0x0209dce9, 0x40289999, 0x999999b0},	/* 3.62059=f(12.3)*/
{64, 0,123,__LINE__, 0x400d02f2, 0x85a8654d, 0x4028b333, 0x3333334a},	/* 3.62644=f(12.35)*/
{64, 0,123,__LINE__, 0x400d0ee2, 0xa35ef736, 0x4028cccc, 0xcccccce4},	/* 3.63227=f(12.4)*/
{64, 0,123,__LINE__, 0x400d1ac6, 0x74b8fed8, 0x4028e666, 0x6666667e},	/* 3.63807=f(12.45)*/
{64, 0,123,__LINE__, 0x400d269e, 0x12f346ee, 0x40290000, 0x00000018},	/* 3.64386=f(12.5)*/
{64, 0,123,__LINE__, 0x400d3269, 0x96fd3a26, 0x40291999, 0x999999b2},	/* 3.64962=f(12.55)*/
{64, 0,123,__LINE__, 0x400d3e29, 0x197a1e2f, 0x40293333, 0x3333334c},	/* 3.65535=f(12.6)*/
{64, 0,123,__LINE__, 0x400d49dc, 0xb2c24886, 0x40294ccc, 0xcccccce6},	/* 3.66107=f(12.65)*/
{64, 0,123,__LINE__, 0x400d5584, 0x7ae44d27, 0x40296666, 0x66666680},	/* 3.66676=f(12.7)*/
{64, 0,123,__LINE__, 0x400d6120, 0x89a62759, 0x40298000, 0x0000001a},	/* 3.67243=f(12.75)*/
{63, 0,123,__LINE__, 0x400d6cb0, 0xf6865c9b, 0x40299999, 0x999999b4},	/* 3.67807=f(12.8)*/
{64, 0,123,__LINE__, 0x400d7835, 0xd8bd19f1, 0x4029b333, 0x3333334e},	/* 3.6837=f(12.85)*/
{64, 0,123,__LINE__, 0x400d83af, 0x473d4ba3, 0x4029cccc, 0xcccccce8},	/* 3.6893=f(12.9)*/
{64, 0,123,__LINE__, 0x400d8f1d, 0x58b5af91, 0x4029e666, 0x66666682},	/* 3.69488=f(12.95)*/
{63, 0,123,__LINE__, 0x400d9a80, 0x2391e23f, 0x402a0000, 0x0000001c},	/* 3.70044=f(13)*/
{64, 0,123,__LINE__, 0x400da5d7, 0xbdfb66ba, 0x402a1999, 0x999999b6},	/* 3.70598=f(13.05)*/
{64, 0,123,__LINE__, 0x400db124, 0x3ddaa96c, 0x402a3333, 0x33333350},	/* 3.71149=f(13.1)*/
{64, 0,123,__LINE__, 0x400dbc65, 0xb8d7fe04, 0x402a4ccc, 0xccccccea},	/* 3.71699=f(13.15)*/
{64, 0,123,__LINE__, 0x400dc79c, 0x445c9892, 0x402a6666, 0x66666684},	/* 3.72247=f(13.2)*/
{64, 0,123,__LINE__, 0x400dd2c7, 0xf59381e2, 0x402a8000, 0x0000001e},	/* 3.72792=f(13.25)*/
{64, 0,123,__LINE__, 0x400ddde8, 0xe16a8749, 0x402a9999, 0x999999b8},	/* 3.73335=f(13.3)*/
{64, 0,123,__LINE__, 0x400de8ff, 0x1c9325ea, 0x402ab333, 0x33333352},	/* 3.73877=f(13.35)*/
{64, 0,123,__LINE__, 0x400df40a, 0xbb837199, 0x402acccc, 0xccccccec},	/* 3.74416=f(13.4)*/
{64, 0,123,__LINE__, 0x400dff0b, 0xd276f76e, 0x402ae666, 0x66666686},	/* 3.74953=f(13.45)*/
{64, 0,123,__LINE__, 0x400e0a02, 0x756f9c2a, 0x402b0000, 0x00000020},	/* 3.75489=f(13.5)*/
{64, 0,123,__LINE__, 0x400e14ee, 0xb836767a, 0x402b1999, 0x999999ba},	/* 3.76022=f(13.55)*/
{64, 0,123,__LINE__, 0x400e1fd0, 0xae5ca535, 0x402b3333, 0x33333354},	/* 3.76553=f(13.6)*/
{64, 0,123,__LINE__, 0x400e2aa8, 0x6b3c21b1, 0x402b4ccc, 0xccccccee},	/* 3.77083=f(13.65)*/
{64, 0,123,__LINE__, 0x400e3576, 0x01f88e38, 0x402b6666, 0x66666688},	/* 3.7761=f(13.7)*/
{64, 0,123,__LINE__, 0x400e4039, 0x858000c2, 0x402b8000, 0x00000022},	/* 3.78136=f(13.75)*/
{64, 0,123,__LINE__, 0x400e4af3, 0x088bc9fb, 0x402b9999, 0x999999bc},	/* 3.7866=f(13.8)*/
{64, 0,123,__LINE__, 0x400e55a2, 0x9da138b4, 0x402bb333, 0x33333356},	/* 3.79181=f(13.85)*/
{64, 0,123,__LINE__, 0x400e6048, 0x571259cb, 0x402bcccc, 0xccccccf0},	/* 3.79701=f(13.9)*/
{64, 0,123,__LINE__, 0x400e6ae4, 0x46feb4a2, 0x402be666, 0x6666668a},	/* 3.80219=f(13.95)*/
{64, 0,123,__LINE__, 0x400e7576, 0x7f54043c, 0x402c0000, 0x00000024},	/* 3.80735=f(14)*/
{64, 0,123,__LINE__, 0x400e7fff, 0x11ceed00, 0x402c1999, 0x999999be},	/* 3.8125=f(14.05)*/
{63, 0,123,__LINE__, 0x400e8a7e, 0x0ffbaf55, 0x402c3333, 0x33333358},	/* 3.81762=f(14.1)*/
{64, 0,123,__LINE__, 0x400e94f3, 0x8b36d702, 0x402c4ccc, 0xccccccf2},	/* 3.82273=f(14.15)*/
{64, 0,123,__LINE__, 0x400e9f5f, 0x94ade780, 0x402c6666, 0x6666668c},	/* 3.82782=f(14.2)*/
{64, 0,123,__LINE__, 0x400ea9c2, 0x3d600544, 0x402c8000, 0x00000026},	/* 3.83289=f(14.25)*/
{64, 0,123,__LINE__, 0x400eb41b, 0x961e9c13, 0x402c9999, 0x999999c0},	/* 3.83794=f(14.3)*/
{64, 0,123,__LINE__, 0x400ebe6b, 0xaf8e0267, 0x402cb333, 0x3333335a},	/* 3.84298=f(14.35)*/
{64, 0,123,__LINE__, 0x400ec8b2, 0x9a261a07, 0x402ccccc, 0xccccccf4},	/* 3.848=f(14.4)*/
{64, 0,123,__LINE__, 0x400ed2f0, 0x6632edd0, 0x402ce666, 0x6666668e},	/* 3.853=f(14.45)*/
{64, 0,123,__LINE__, 0x400edd25, 0x23d54cc6, 0x402d0000, 0x00000028},	/* 3.85798=f(14.5)*/
{64, 0,123,__LINE__, 0x400ee750, 0xe303627d, 0x402d1999, 0x999999c2},	/* 3.86295=f(14.55)*/
{64, 0,123,__LINE__, 0x400ef173, 0xb3894cda, 0x402d3333, 0x3333335c},	/* 3.8679=f(14.6)*/
{64, 0,123,__LINE__, 0x400efb8d, 0xa509af56, 0x402d4ccc, 0xccccccf6},	/* 3.87283=f(14.65)*/
{64, 0,123,__LINE__, 0x400f059e, 0xc6fe43ad, 0x402d6666, 0x66666690},	/* 3.87774=f(14.7)*/
{64, 0,123,__LINE__, 0x400f0fa7, 0x28b86826, 0x402d8000, 0x0000002a},	/* 3.88264=f(14.75)*/
{64, 0,123,__LINE__, 0x400f19a6, 0xd961ab68, 0x402d9999, 0x999999c4},	/* 3.88753=f(14.8)*/
{64, 0,123,__LINE__, 0x400f239d, 0xe7fc55fe, 0x402db333, 0x3333335e},	/* 3.89239=f(14.85)*/
{64, 0,123,__LINE__, 0x400f2d8c, 0x6363f17e, 0x402dcccc, 0xccccccf8},	/* 3.89724=f(14.9)*/
{64, 0,123,__LINE__, 0x400f3772, 0x5a4dcd7c, 0x402de666, 0x66666692},	/* 3.90207=f(14.95)*/
{63, 0,123,__LINE__, 0x400f414f, 0xdb498237, 0x402e0000, 0x0000002c},	/* 3.90689=f(15)*/
{63, 0,123,__LINE__, 0x400f4b24, 0xf4c17121, 0x402e1999, 0x999999c6},	/* 3.91169=f(15.05)*/
{63, 0,123,__LINE__, 0x400f54f1, 0xb4fb4345, 0x402e3333, 0x33333360},	/* 3.91648=f(15.1)*/
{64, 0,123,__LINE__, 0x400f5eb6, 0x2a186592, 0x402e4ccc, 0xccccccfa},	/* 3.92125=f(15.15)*/
{64, 0,123,__LINE__, 0x400f6872, 0x62168321, 0x402e6666, 0x66666694},	/* 3.926=f(15.2)*/
{64, 0,123,__LINE__, 0x400f7226, 0x6acffd6c, 0x402e8000, 0x0000002e},	/* 3.93074=f(15.25)*/
{64, 0,123,__LINE__, 0x400f7bd2, 0x51fc62a1, 0x402e9999, 0x999999c8},	/* 3.93546=f(15.3)*/
{64, 0,123,__LINE__, 0x400f8576, 0x2530e1f2, 0x402eb333, 0x33333362},	/* 3.94017=f(15.35)*/
{64, 0,123,__LINE__, 0x400f8f11, 0xf1e0be0f, 0x402ecccc, 0xccccccfc},	/* 3.94486=f(15.4)*/
{64, 0,123,__LINE__, 0x400f98a5, 0xc55dbdc0, 0x402ee666, 0x66666696},	/* 3.94953=f(15.45)*/
{64, 0,123,__LINE__, 0x400fabb5, 0xb5616e63, 0x402f1999, 0x999999ca},	/* 3.95884=f(15.55)*/
{64, 0,123,__LINE__, 0x400fb531, 0xebe81d88, 0x402f3333, 0x33333364},	/* 3.96347=f(15.6)*/
{64, 0,123,__LINE__, 0x400fbea6, 0x5d3cc171, 0x402f4ccc, 0xccccccfe},	/* 3.96809=f(15.65)*/
{64, 0,123,__LINE__, 0x400fc813, 0x16100ff7, 0x402f6666, 0x66666698},	/* 3.97269=f(15.7)*/
{64, 0,123,__LINE__, 0x400fd178, 0x22f3c1a8, 0x402f8000, 0x00000032},	/* 3.97728=f(15.75)*/
{64, 0,123,__LINE__, 0x400fdad5, 0x905af65f, 0x402f9999, 0x999999cc},	/* 3.98185=f(15.8)*/
{64, 0,123,__LINE__, 0x400fe42b, 0x6a9a9840, 0x402fb333, 0x33333366},	/* 3.98641=f(15.85)*/
{64, 0,123,__LINE__, 0x400fed79, 0xbde9bd2a, 0x402fcccc, 0xcccccd00},	/* 3.99095=f(15.9)*/
{64, 0,123,__LINE__, 0x400ff6c0, 0x9662069a, 0x402fe666, 0x6666669a},	/* 3.99548=f(15.95)*/
{64, 0,123,__LINE__, 0x40100000, 0x00000009, 0x40300000, 0x0000001a},	/* 4=f(16)*/
{64, 0,123,__LINE__, 0x4010049c, 0x0351be07, 0x40300ccc, 0xcccccce7},	/* 4.0045=f(16.05)*/
{64, 0,123,__LINE__, 0x40100934, 0x5b07f7bc, 0x40301999, 0x999999b4},	/* 4.00899=f(16.1)*/
{64, 0,123,__LINE__, 0x40100dc9, 0x0cf665dd, 0x40302666, 0x66666681},	/* 4.01346=f(16.15)*/
{64, 0,123,__LINE__, 0x4010125a, 0x1ee2ebb9, 0x40303333, 0x3333334e},	/* 4.01792=f(16.2)*/
{64, 0,123,__LINE__, 0x401016e7, 0x9685c2dc, 0x40304000, 0x0000001b},	/* 4.02237=f(16.25)*/
{64, 0,123,__LINE__, 0x40101b71, 0x7989a60b, 0x40304ccc, 0xcccccce8},	/* 4.0268=f(16.3)*/
{64, 0,123,__LINE__, 0x40101ff7, 0xcd8bfb9d, 0x40305999, 0x999999b5},	/* 4.03122=f(16.35)*/
{64, 0,123,__LINE__, 0x4010247a, 0x981cff1f, 0x40306666, 0x66666682},	/* 4.03562=f(16.4)*/
{64, 0,123,__LINE__, 0x401028f9, 0xdebfea69, 0x40307333, 0x3333334f},	/* 4.04002=f(16.45)*/
{64, 0,123,__LINE__, 0x40102d75, 0xa6eb1e05, 0x40308000, 0x0000001c},	/* 4.04439=f(16.5)*/
{64, 0,123,__LINE__, 0x401031ed, 0xf60848fd, 0x40308ccc, 0xcccccce9},	/* 4.04876=f(16.55)*/
{64, 0,123,__LINE__, 0x40103662, 0xd1749016, 0x40309999, 0x999999b6},	/* 4.05311=f(16.6)*/
{64, 0,123,__LINE__, 0x40103ad4, 0x3e80b46a, 0x4030a666, 0x66666683},	/* 4.05745=f(16.65)*/
{64, 0,123,__LINE__, 0x40103f42, 0x42713974, 0x4030b333, 0x33333350},	/* 4.06178=f(16.7)*/
{64, 0,123,__LINE__, 0x401043ac, 0xe27e8a88, 0x4030c000, 0x0000001d},	/* 4.06609=f(16.75)*/
{64, 0,123,__LINE__, 0x40104814, 0x23d51fc2, 0x4030cccc, 0xccccccea},	/* 4.07039=f(16.8)*/
{64, 0,123,__LINE__, 0x40104c78, 0x0b95a25b, 0x4030d999, 0x999999b7},	/* 4.07468=f(16.85)*/
{64, 0,123,__LINE__, 0x401050d8, 0x9ed51084, 0x4030e666, 0x66666684},	/* 4.07895=f(16.9)*/
{64, 0,123,__LINE__, 0x40105535, 0xe29ce0af, 0x4030f333, 0x33333351},	/* 4.08321=f(16.95)*/
{64, 0,123,__LINE__, 0x4010598f, 0xdbeb2457, 0x40310000, 0x0000001e},	/* 4.08746=f(17)*/
{64, 0,123,__LINE__, 0x40105de6, 0x8fb2aa41, 0x40310ccc, 0xcccccceb},	/* 4.0917=f(17.05)*/
{64, 0,123,__LINE__, 0x4010623a, 0x02db2046, 0x40311999, 0x999999b8},	/* 4.09592=f(17.1)*/
{64, 0,123,__LINE__, 0x4010668a, 0x3a413495, 0x40312666, 0x66666685},	/* 4.10014=f(17.15)*/
{64, 0,123,__LINE__, 0x40106ad7, 0x3ab6b67c, 0x40313333, 0x33333352},	/* 4.10434=f(17.2)*/
{64, 0,123,__LINE__, 0x40106f21, 0x0902b6b9, 0x40314000, 0x0000001f},	/* 4.10852=f(17.25)*/
{64, 0,123,__LINE__, 0x40107367, 0xa9e1a755, 0x40314ccc, 0xccccccec},	/* 4.1127=f(17.3)*/
{64, 0,123,__LINE__, 0x401077ab, 0x22057b00, 0x40315999, 0x999999b9},	/* 4.11686=f(17.35)*/
{64, 0,123,__LINE__, 0x40107beb, 0x7615c407, 0x40316666, 0x66666686},	/* 4.12102=f(17.4)*/
{64, 0,123,__LINE__, 0x40108028, 0xaaafd2cd, 0x40317333, 0x33333353},	/* 4.12516=f(17.45)*/
{64, 0,123,__LINE__, 0x40108462, 0xc466d3da, 0x40318000, 0x00000020},	/* 4.12928=f(17.5)*/
{64, 0,123,__LINE__, 0x40108899, 0xc7c3ed7a, 0x40318ccc, 0xcccccced},	/* 4.1334=f(17.55)*/
{64, 0,123,__LINE__, 0x40108ccd, 0xb9465cf3, 0x40319999, 0x999999ba},	/* 4.1375=f(17.6)*/
{64, 0,123,__LINE__, 0x401090fe, 0x9d63934e, 0x4031a666, 0x66666687},	/* 4.1416=f(17.65)*/
{64, 0,123,__LINE__, 0x4010952c, 0x788751b7, 0x4031b333, 0x33333354},	/* 4.14568=f(17.7)*/
{64, 0,123,__LINE__, 0x40109957, 0x4f13c57c, 0x4031c000, 0x00000021},	/* 4.14975=f(17.75)*/
{64, 0,123,__LINE__, 0x40109d7f, 0x2561a39f, 0x4031cccc, 0xccccccee},	/* 4.15381=f(17.8)*/
{64, 0,123,__LINE__, 0x4010a1a3, 0xffc0440f, 0x4031d999, 0x999999bb},	/* 4.15785=f(17.85)*/
{64, 0,123,__LINE__, 0x4010a5c5, 0xe275bc74, 0x4031e666, 0x66666688},	/* 4.16189=f(17.9)*/
{64, 0,123,__LINE__, 0x4010a9e4, 0xd1befaa6, 0x4031f333, 0x33333355},	/* 4.16591=f(17.95)*/
{64, 0,123,__LINE__, 0x4010ae00, 0xd1cfdebf, 0x40320000, 0x00000022},	/* 4.16993=f(18)*/
{64, 0,123,__LINE__, 0x4010b219, 0xe6d354d3, 0x40320ccc, 0xccccccef},	/* 4.17393=f(18.05)*/
{64, 0,123,__LINE__, 0x4010b630, 0x14eb6e4c, 0x40321999, 0x999999bc},	/* 4.17792=f(18.1)*/
{64, 0,123,__LINE__, 0x4010ba43, 0x60317aee, 0x40322666, 0x66666689},	/* 4.1819=f(18.15)*/
{64, 0,123,__LINE__, 0x4010be53, 0xccb62182, 0x40323333, 0x33333356},	/* 4.18587=f(18.2)*/
{64, 0,123,__LINE__, 0x4010c261, 0x5e817829, 0x40324000, 0x00000023},	/* 4.18982=f(18.25)*/
{64, 0,123,__LINE__, 0x4010c66c, 0x19931c5a, 0x40324ccc, 0xccccccf0},	/* 4.19377=f(18.3)*/
{64, 0,123,__LINE__, 0x4010ca74, 0x01e24a92, 0x40325999, 0x999999bd},	/* 4.19771=f(18.35)*/
{64, 0,123,__LINE__, 0x4010ce79, 0x1b5df5a7, 0x40326666, 0x6666668a},	/* 4.20163=f(18.4)*/
{64, 0,123,__LINE__, 0x4010d27b, 0x69ecddd5, 0x40327333, 0x33333357},	/* 4.20555=f(18.45)*/
{64, 0,123,__LINE__, 0x4010d67a, 0xf16da770, 0x40328000, 0x00000024},	/* 4.20945=f(18.5)*/
{64, 0,123,__LINE__, 0x4010da77, 0xb5b6f153, 0x40328ccc, 0xccccccf1},	/* 4.21335=f(18.55)*/
{64, 0,123,__LINE__, 0x4010de71, 0xba976afb, 0x40329999, 0x999999be},	/* 4.21723=f(18.6)*/
{64, 0,123,__LINE__, 0x4010e269, 0x03d5ea53, 0x4032a666, 0x6666668b},	/* 4.2211=f(18.65)*/
{64, 0,123,__LINE__, 0x4010e65d, 0x95318140, 0x4032b333, 0x33333358},	/* 4.22497=f(18.7)*/
{64, 0,123,__LINE__, 0x4010ea4f, 0x726192d7, 0x4032c000, 0x00000025},	/* 4.22882=f(18.75)*/
{64, 0,123,__LINE__, 0x4010ee3e, 0x9f15e854, 0x4032cccc, 0xccccccf2},	/* 4.23266=f(18.8)*/
{64, 0,123,__LINE__, 0x4010f22b, 0x1ef6c5c8, 0x4032d999, 0x999999bf},	/* 4.23649=f(18.85)*/
{64, 0,123,__LINE__, 0x4010f614, 0xf5a4fe78, 0x4032e666, 0x6666668c},	/* 4.24031=f(18.9)*/
{64, 0,123,__LINE__, 0x4010f9fc, 0x26ba0906, 0x4032f333, 0x33333359},	/* 4.24413=f(18.95)*/
{64, 0,123,__LINE__, 0x4010fde0, 0xb5c8134c, 0x40330000, 0x00000026},	/* 4.24793=f(19)*/
{64, 0,123,__LINE__, 0x401101c2, 0xa65a15f3, 0x40330ccc, 0xccccccf3},	/* 4.25172=f(19.05)*/
{64, 0,123,__LINE__, 0x401105a1, 0xfbf3e7d2, 0x40331999, 0x999999c0},	/* 4.2555=f(19.1)*/
{64, 0,123,__LINE__, 0x4011097e, 0xba1250ff, 0x40332666, 0x6666668d},	/* 4.25927=f(19.15)*/
{64, 0,123,__LINE__, 0x40110d58, 0xe42b1dad, 0x40333333, 0x3333335a},	/* 4.26303=f(19.2)*/
{64, 0,123,__LINE__, 0x40111130, 0x7dad30c3, 0x40334000, 0x00000027},	/* 4.26679=f(19.25)*/
{64, 0,123,__LINE__, 0x40111505, 0x8a009638, 0x40334ccc, 0xccccccf4},	/* 4.27053=f(19.3)*/
{64, 0,123,__LINE__, 0x401118d8, 0x0c869531, 0x40335999, 0x999999c1},	/* 4.27426=f(19.35)*/
{64, 0,123,__LINE__, 0x40111ca8, 0x0899c1e8, 0x40336666, 0x6666668e},	/* 4.27798=f(19.4)*/
{64, 0,123,__LINE__, 0x40112075, 0x818e0f4e, 0x40337333, 0x3333335b},	/* 4.2817=f(19.45)*/
{64, 0,123,__LINE__, 0x40112440, 0x7ab0e07f, 0x40338000, 0x00000028},	/* 4.2854=f(19.5)*/
{64, 0,123,__LINE__, 0x40112808, 0xf74919f4, 0x40338ccc, 0xccccccf5},	/* 4.2891=f(19.55)*/
{64, 0,123,__LINE__, 0x40112bce, 0xfa973280, 0x40339999, 0x999999c2},	/* 4.29278=f(19.6)*/
{64, 0,123,__LINE__, 0x40112f92, 0x87d54416, 0x4033a666, 0x6666668f},	/* 4.29646=f(19.65)*/
{64, 0,123,__LINE__, 0x40113353, 0xa2371c56, 0x4033b333, 0x3333335c},	/* 4.30012=f(19.7)*/
{64, 0,123,__LINE__, 0x40113712, 0x4cea4ceb, 0x4033c000, 0x00000029},	/* 4.30378=f(19.75)*/
{64, 0,123,__LINE__, 0x40113ace, 0x8b163ba8, 0x4033cccc, 0xccccccf6},	/* 4.30743=f(19.8)*/
{64, 0,123,__LINE__, 0x40113e88, 0x5fdc3280, 0x4033d999, 0x999999c3},	/* 4.31107=f(19.85)*/
{64, 0,123,__LINE__, 0x4011423f, 0xce576f3a, 0x4033e666, 0x66666690},	/* 4.3147=f(19.9)*/
{64, 0,123,__LINE__, 0x401145f4, 0xd99d3304, 0x4033f333, 0x3333335d},	/* 4.31832=f(19.95)*/
0,};
void test_log2(m)   {run_vector_1(m,log2_vec,(char *)(log2),"log2","dd");   }	
