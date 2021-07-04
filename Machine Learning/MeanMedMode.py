import numpy as np
from scipy import stats
speed = [89,87,88,89,90,91,92,90,86,90,86,89,86]

x = np.mean(speed)
y = np.median(speed)
z = stats.mode(speed)
s = np.std(speed)
sn = np.std(speed)
v = np.var(speed)
p = np.percentile(speed, 90)
print(x)#Mean [x̄]
print(y)#Median [Med]
print(z)#Mode 
print(s)#Standard Deviation [σx]
print(sn)#Standard Deviation Using NumPy
print(v)#Variance [σ2x]
print(p)#Percentile