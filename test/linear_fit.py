import numpy as np

# 定义两个点的坐标
point1 = (x1, y1)
point2 = (x2, y2)

# 计算斜率 (m) 和截距 (b)
x_coords = np.array([point1[0], point2[0]])
y_coords = np.array([point1[1], point2[1]])

# 使用numpy的polyfit函数拟合一次多项式（直线）
m, b = np.polyfit(x_coords, y_coords, 1)

print(f"斜率 (m): {m}")
print(f"截距 (b): {b}")