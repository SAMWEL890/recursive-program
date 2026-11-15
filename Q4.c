
a.	Recursive Program to Find the Sum of First N Natural Numbers [5 Marks]

def sum_natural( n) :
if n <= 1:
return n
return n + sum_natural( n - 1)




b.	Recursive Program to Find the Factorial of a Number 

def factorial( n) :
if n == 0 or n == 1: return 1
return n * factorial( n - 1)



c.	Recursive Program to Find the Nth Term of a Fibonacci Series 

def fibonacci_nth( n) :
if n <= 1:
return n
return fibonacci_nth( n - 1) + fibonacci_nth( n - 2)


d.	Recursive Program to Generate N Terms of a Fibonacci Series

def generate_fibonacci( n, current=0, series=None) :
if series is None: series = []
if current >= n: return series
if current <= 1:
series. append( current)
else:
series. append( series[- 1] + series[- 2] )
return generate_fibonacci( n, current + 1, series)

