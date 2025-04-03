.section .text
.global _start

_start:
    # ---- 初始化 ----
    li x1, 10       # x1 = 10
    li x2, 20       # x2 = 20
    li x3, -5       # x3 = -5
    li x4, 0xFF     # x4 = 255 (0xFF)

    # ---- 算术运算 ----
    add x5, x1, x2    # x5 = x1 + x2 = 10 + 20 = 30
    sub x6, x2, x1    # x6 = x2 - x1 = 20 - 10 = 10
    addi x7, x1, 5    # x7 = x1 + 5 = 10 + 5 = 15
    lui x8, 0x12345   # x8 = 0x12345000 (加载高 20 位)

    # ---- 逻辑运算 ----
    and x9, x1, x4    # x9 = x1 & x4
    or x10, x1, x4    # x10 = x1 | x4
    xor x11, x1, x4   # x11 = x1 ^ x4
    andi x12, x1, 0xF # x12 = x1 & 0xF

    # ---- 移位操作 ----
    sll x13, x1, x3   # x13 = x1 << x3 (左移)
    srl x14, x1, x3   # x14 = x1 >> x3 (逻辑右移)
    sra x15, x1, x3   # x15 = x1 >> x3 (算术右移)

    # ---- 比较操作 ----
    slt x16, x3, x1   # x16 = (x3 < x1) ? 1 : 0
    sltu x17, x3, x1  # x17 = (x3 < x1) (无符号)

    # ---- 分支跳转 ----
    beq x1, x2, label1  # if (x1 == x2) 跳转到 label1
    bne x1, x2, label2  # if (x1 != x2) 跳转到 label2
    blt x3, x1, label3  # if (x3 < x1) 跳转到 label3
    bge x1, x2, label4  # if (x1 >= x2) 跳转到 label4

label1:
    j label_end  # 直接跳转到结束

label2:
    j label_end

label3:
    j label_end

label4:
    j label_end

    # ---- 加载/存储 ----
    la x18, data       # x18 = 数据地址
    lw x19, 0(x18)     # x19 = 读取数据
    sw x19, 4(x18)     # 存储数据

label_end:
    nop                # 空操作 (停止执行)
    j label_end        # 死循环

.section .data
data:
    .word 0xDEADBEEF   # 预设内存数据

