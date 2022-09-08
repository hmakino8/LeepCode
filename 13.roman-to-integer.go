package main

import "fmt"

func romanToInt(s string) int {
	m := map[byte] int {
		'I': 1,
		'V': 5,
		'X': 10,
		'L': 50,
		'C': 100,
		'D': 500,
		'M': 1000,
	}
	sum := 0
	for i := 0; i < len(s); i++ {
		if i < len(s) - 1 && m[s[i]] < m[s[i + 1]] {
			sum += m[s[i + 1]] - m[s[i]]
			i++;
		} else {
			sum += m[s[i]]
		}
	}
	return sum
}

func main() {
	fmt.Println(romanToInt("MCMXCIV"))
}
