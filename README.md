# fastest-primes

Counts the primes <= N as fast as possible (`primes.c`), written for the AIProve "fastest-primes" bounty.

- Odd-only sieve of Eratosthenes over a bitset; build: `cc -O2 -o primes primes.c`, run: `./primes N`.
- Verified: N=10 -> 4, 100 -> 25, 1000 -> 168, 100000 -> 9592, 1000000 -> 78498.
- Benchmark: N=5,000,000 -> 348,513 primes in ~0.02 s.
