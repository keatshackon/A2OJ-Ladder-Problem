import matplotlib.pyplot as plt

x = [28,27,26,25,24,23,22,21,20,19]
y = [80,77,76,75,70,55,50,15,14,11] 
plt.plot(x,y)
plt.ylabel("Stress [In %]",color = "red")
plt.xlabel("Time [In Year] ",color= "red")
plt.title("Mr.Keats's Stress Graph Prediction",color="red")
plt.show()