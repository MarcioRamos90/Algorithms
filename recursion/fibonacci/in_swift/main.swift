func main() {
    print("Enter n:")
    let n = Int(readLine()!)

    let res = fibonacci(n: n!)

    print("res = \(res)")
}

func fibonacci(n: Int) -> Int {
    if n <= 1 {
        return n
    }
    return fibonacci(n: n - 1) + fibonacci(n: n - 2)
}

main()