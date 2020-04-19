### Problem-Projecting-tool

当你想要做题的时候，它可以帮你自动生成 `.cpp`、`.in` 和 `.out` 文件。

---

修改程序里的 `std::string dir = "W"` 代码来设置默认的目录。（此时最后 **不要** 加 `\`）

例如，如果我要保存在 `G:\Codes` 下，我就修改为 `std::string dir = "G:\\Codes"`。

注意，这里不能写为 `std::string dir = "G:\\Codes\\"`。

将此程序目录添加到 `PATH` 里，然后使用

`work AAA "BBB" ccc`，

在 `W\AAA\BBB` 下会自动建立 `ccc.cpp`、`ccc.in` 和 `ccc.out`。
