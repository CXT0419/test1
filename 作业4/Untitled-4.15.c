# 初始化第10天剩余的巧克力数量
remaining = 1  
# 从第9天倒推到第1天，共9次循环
for day in range(9, 0, -1):  
    # 根据规律计算前一天的巧克力数量：(当天剩余 + 1) × 2
    remaining = (remaining + 1) * 2  
# 输出最终结果
print("小明妈妈总共买了", remaining, "块巧克力")  