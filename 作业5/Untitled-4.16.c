#
stranger_give = 100000 * 30  
a1 = 0.01
q = 2
n = 30
millionaire_give = a1 * (q ** n - 1) / (q - 1)  

# 输出结果
print("陌生人给了百万富翁", stranger_give, "元")
print("百万富翁给了陌生人", round(millionaire_give, 2), "元")