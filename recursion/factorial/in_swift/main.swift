
func main() {
    print("Enter n:")
    
    let n: Double? = Double(readLine()!)

    let res: Double = factorial(n: n!)

    print("\(res)")
}

func factorial(n: Double) -> Double {
    if n == 0 || n == 1 {
        return 1
    }

    return n * factorial(n: n - 1)
}

main()
