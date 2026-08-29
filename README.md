# Profit Calculator

A 22-line C++ compound-interest loop, written on **9 October 2019**. You give it a number of days and a daily percentage; it prints what one unit of money grows to.

This is not a project. It is a scratch file, written once to answer a single question — *if I make X% a day, where am I in Y days* — and never opened again. It is here because it is dated, and because it is the clearest surviving artifact of the mindset that drove the next six years of work.

---

## Provenance

> This repository was reconstructed in 2026 from a filesystem archive. The code was never under version control at the time.
>
> **The commit date is the real modification time of the original file**, recovered with `stat`: `2019-10-09 07:39:08` local time (UTC+03:30). One commit is dated 2026: this README.

The original file was named `محاسبه سود.txt` — *mohasebe-ye sood*, "profit calculation" — a `.txt` because it was never meant to be compiled by anything but the online compiler it was pasted into. It is renamed `profit.cpp` here so GitHub highlights it.

## What it does

```cpp
cout << "tedad rooz";
cin >> n;
cout << "darsad sood";
cin >> m;
m = m / 100;
for (int i = 0; i <= n; i++)
{
    x = x + (x * m);
}
```

`tedad rooz` is *tedād-e rūz*, "number of days". `darsad sood` is *darsad-e sūd*, "profit percentage". Persian prompts typed in Latin characters, because the console would not render the alphabet.

## What is wrong with it

- **Off-by-one.** `for (int i = 0; i <= n; i++)` runs **n + 1** times. Ask it for 30 days at 2% and it compounds 31 times. Every number it has ever printed was wrong, and slightly too good — which is the appropriate joke for what it was calculating.
- The prompts have no trailing space, colon, or newline, so the input cursor sits flush against the last letter.
- No input validation. A negative `n` silently returns `1`.
- The starting principal is hard-coded to `1`, so the output is a growth multiple, not an amount — which is fine, but nothing says so.
- `using namespace std;` inside `main()`.

## Building

```
g++ -o profit profit.cpp && ./profit
```

It compiles clean on any C++ compiler. That was never the problem.
