.section .text
.global _start

_start:
    # 初始化寄存器
    li t0, 0x12345678  # 加载立即数
    li t1, 0x87654321  # 加载立即数
    li t2, 0x00000010  # 移位测试用

    # 存储数据到内存
    la s5, data       # 加载 data 地址  
    sw t0, 0(s5)      # 存储 t0
    sw t1, 4(s5)      # 存储 t1
    sw t2, 8(s5)      # 存储 t2

    # 从内存加载数据到寄存器
    lw s6, 0(s5)      # 读取 t0 到 s6
    lw s7, 4(s5)      # 读取 t1 到 s7
    lw a0, 8(s5)      # 读取 t2 到 a0

    # 算术运算
    add a1, s6, s7    # a1 = s6 + s7
    sub a2, s6, s7    # a2 = s6 - s7

    # 逻辑运算
    and a6, s6, s7    # a6 = s6 & s7
    or  a7, s6, s7    # a7 = s6 | s7
    xor s0, s6, s7    # s0 = s6 ^ s7

    # 移位操作
    sll s1, s6, a0    # s1 = s6 << a0
    srl s2, s6, a0    # s2 = s6 >> a0 (逻辑右移)
    sra s3, s6, a0    # s3 = s6 >>> a0 (算术右移)

    # 比较操作
    slt s4, s6, s7    # s4 = (s6 < s7) ? 1 : 0
    sltu s5, s6, s7   # s5 = (s6 < s7 无符号) ? 1 : 0

		# immediate
		addi a3, s6, 5    # a3 = s6 + 5
    andi a4, s6, 0xFF # a4 = s6 & 0xFF
    xori a5, s6, 0xAA # a5 = s6 ^ 0xAA
    ori  a6, s6, 0xFF # a6 = s6 | 0xFF
    slti a7, s6, 0x100 # a7 = (s6 < 0x100) ? 1 : 0

    # 跳转和分支
    beq s6, s7, label_equal  # 如果 s6 == s7, 跳转
    bne s6, s7, label_not_equal  # 如果 s6 != s7, 跳转

    # 测试 jalr
    li t3, 0x1000       # 跳转地址
    jalr t4, t3, 0      # 将返回地址存储在 t4，跳转到 t3 指向的地址

    j end_program    # 直接跳转

label_equal:
    li s7, 0x1  # 标记相等
    j end_program

label_not_equal:
    li s7, 0x2  # 标记不相等
    j end_program

end_program:
    # 进入死循环，防止程序退出
    j end_program

.section .bss
    .align 2
    .space 12  # 为 3 个 32-bit 变量预留空间
data:

