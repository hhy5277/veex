前一阵子着力研究 [weex](https://github.com/apache/incubator-weex) 的实现原理，然而水平有限，且 Java 和 C++ 方面的知识尤其缺乏，所以成效甚微。
效率太低，就暂告一段落。目前仅有的成果是：通过 JNI，使得 Java 能够调用 C++ 写的代码，这也是目前本代码仓库所实现的功能。

整理所得参考资料：

1. [Weex原理概述](https://github.com/weexteam/article/issues/32)，By lvscar
2. [Weex Android SDK源码分析](http://www.jianshu.com/p/3160a0297345)，By 郑海波mobctrl
3. [Weex SDK Android 源码解析](https://zhuanlan.zhihu.com/p/25326775), By lybeen
4. [J2V8](https://github.com/eclipsesource/J2V8)
5. [J2V8入门教程](http://blog.csdn.net/zyzzate/article/details/52303376) ，By zyzz1995
6. [关于V8 JavaScript Engine的使用方法研究（三）](http://blog.chinaunix.net/uid-8272118-id-2033361.html), By chenwayne
7. [JNI/NDK开发指南（开山篇）](http://blog.csdn.net/xyang81/article/details/41759643), By xyang0917
8. [JNI完全手册](http://www.wy182000.com/2013/12/24/jni%E5%AE%8C%E5%85%A8%E6%89%8B%E5%86%8C/) ，By wy182000
9. [NDK-JNI实战教程（一） 在Android Studio运行第一个NDK程序](http://blog.csdn.net/yanbober/article/details/45309049), By 工匠若水
10. [Chrome V8 引擎移植到 Android](http://blog.csdn.net/ft2028739/article/details/52313060), By GYGG
11. [VATEDROID - Part 2 - Linking V8](http://lorinbeer.github.io/tutorial/2013/04/19/vatedroid-p2-linking-v8.html), By Lorin Beer