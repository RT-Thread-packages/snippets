# snippets

## 1. 介绍

这个软件包是一些RT-Thread下的代码片段，这些代码片段可能是一些小工具，或者一些小示例，用于参考或简单验证、测试。

### 1.1 许可证

snippets 遵循非常宽松的许可证，MIT 许可证，详见 `LICENSE` 文件。因为主要用于代码复用，示例，所以每个代码文件上并未包含代码许可证协议文件头信息。

## 2. 内容

这些代码片段按照目录的方式分类，包括如下：

| 目录 | 说明                       |
| ---- | ------------------------- |
| libc | |
|  +- print.c | 对标准libc库中的printf简单测试 |
| threads | |
|  +- second.c | 以秒任务的方式输出控制台信息，用于简单测试OS tick是否工作及大致的精度 |

## 3. 如何使用snippets

使用 snippets package 可以在 RT-Thread 的包管理器中选择它，具体路径如下：

```
RT-Thread online packages
    miscellaneous packages --->
        [*] snippets
```

然后让 RT-Thread 的包管理器自动更新，或者使用 `pkgs --update` 命令更新包到 BSP 中。后期也会集成到 RT-Thread 的辅助工具中，而不见得以完整软件包方式来使用。

## 4、联系方式 & 感谢

* 主页：https://github.com/RT-Thread-packages/snippets
