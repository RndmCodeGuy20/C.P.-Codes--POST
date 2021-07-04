import numpy as np
import matplotlib.pyplot as plt

x = np.random.normal(5.0,1.0,100000)
#?(mean,std, no. of values) for normal distribution only 
m = np.mean(x)
print(m)
print(np.std(x))
plt.hist(x,100)
plt.show()