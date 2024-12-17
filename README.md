# Linux-kernel-experiment By Shuyang Xing, School of information, Xiamen University

## 内核版本

- **版本**：5.4.284

## 源码下载

- 完整的内核源代码放在Release中

## 功能

- **自定义系统调用**：实现了一个名为 `hello_world` 的系统调用，可以通过用户空间程序调用，返回字符串“hello world！”。
- **自定义SHELL**：创建了一个简单的SHELL，支持基本命令的输入和执行，能够与用户进行交互。

## 安装步骤

1. **下载内核文件**：`my_kernel.tar.gz` 。

2. **解压文件**：

   ```bash
   tar -xzvf my_kernel.tar.gz
   ```

3. **移动内核文件**：

   ```bash
   sudo mv vmlinuz-5.4.284 /boot/
   sudo mv initrd.img-5.4.284 /boot/
   ```

4. **新引导加载器**：

   ```bash
   sudo update-grub
   ```

5. **重启系统**，并在GRUB菜单中选择新的内核版本。
