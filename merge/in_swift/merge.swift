
func merge(a: [Int], b:[Int], c: inout [Int]) {
    var  pa = 0, pb = 0
    while pa < a.count && pb < b.count {
        if a[pa] < b[pb] {
            c.append(a[pa])
            pa += 1
        } else {
            c.append(b[pb])
            pb += 1
        }
    }
    if pa < a.count {
        c.append(contentsOf: a)
    } else if pb == b.count {
        c.append(contentsOf: b)
    }
}

func main() {
    let a = [3, 5, 7]
    let b = [1, 4, 6, 8, 9]

    var c: [Int] = []

    print(a, b)
    
    merge(a: a, b: b, c: &c)
    
    print(c)
}


main()
