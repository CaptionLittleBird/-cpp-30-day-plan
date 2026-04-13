# Day01 — 构建与运行说明

示例使用 SFML 库。下面是常见平台的快速构建说明。

Windows (MSYS2 / MinGW-w64):

1. 在 MSYS2 MinGW 64-bit 环境中安装工具和 SFML：

```bash
pacman -Syu
pacman -S mingw-w64-x86_64-toolchain mingw-w64-x86_64-cmake mingw-w64-x86_64-SFML
```

2. 在仓库根目录下构建：

```bash
mkdir -p examples/day01/build
cd examples/day01/build
cmake -G "MSYS Makefiles" -DCMAKE_PREFIX_PATH="/mingw64" ..
cmake --build .
```

Windows (Visual Studio / CMake):

1. 在系统上安装 SFML（官网下载并解压），记下 SFML 的安装路径。
2. 在 `examples/day01` 目录运行 CMake GUI 或命令行，设置 `CMAKE_PREFIX_PATH` 为 SFML 的路径，然后生成并打开解决方案进行构建。

注意
- 如果无法找到 SFML，请确保安装了与编译器对应的 SFML 版本（MSVC vs MinGW）。
- 运行时若缺少 DLL，可将 SFML 的 DLL 复制到可执行文件所在目录，或将 SFML 的 bin 目录加入系统 PATH。
