
def find_primes_between(n, m):
    def sieve_of_eratosthenes(limit):
        is_prime = [True for _ in range(limit + 1)]
        p = 2
        while p * p <= limit:
            if is_prime[p]:
                for i in range(p * p, limit + 1, p):
                    is_prime[i] = False
            p += 1
        return [p for p in range(2, limit + 1) if is_prime[p]]

    primes = sieve_of_eratosthenes(m)
    
    primes_in_range = [p for p in primes if n <= p <= m]
    
    return primes_in_range

n, m = input().split()
result = find_primes_between(int(n), int(m))

for i in result:
    print(i)
