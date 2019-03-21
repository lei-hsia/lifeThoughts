package main

import "fmt"

//
// make() 函数创建一个slices;
// ⚠️注意: slices更像是array上面的view, 并不是arrayList,
// slice是一个描述符,包含:
//     1. ptr指针指向array头;
//     2. int len描述数组长度;
//     3. int cap描述数组容量;
// slicing的时候并不是copy，二是创建了一个新的slice指向原来的array:
// slicing不能超过 capacity
//
// make()函数创建slice，实际上就是对应slice这个descriptor;
// 本身是指针不用声明, 第一个参数是数据类型，第二个是初始化长度,
// 第三个是这个slice的容量的大小:
// e.g. t := make([]byte, len(s), (cap(s)+1)*2) +1避免cap(s)==0

// 其实就是,
// make是创建了一个新的slice;
// copy也是创建了一个新的slice；
// 但是对原来的slice切片，不会创建新的slice: 指针指向的还是原来的array

func main() {

	// slices定义跟array完全一样, 唯一不同的是 []中没有元素的个数
	s := make([]string, 3)
	fmt.Println("emp:", s)

	s[0] = "a"
	s[1] = "b"
	s[2] = "c"
	fmt.Println("set:", s)
	fmt.Println("get:", s[2])

	fmt.Println("len:", len(s))

	// append会返回一个新的slice value
	s = append(s, "d")
	s = append(s, "e", "f")
	fmt.Println("apd:", s)

	c := make([]string, len(s)) // cap可省,默认为len
	copy(c, s)                  // copy(dst, org)
	fmt.Println("cpy:", c)

	l := s[2:5]
	fmt.Println("sl1:", l)
	l[0] = "z"

	// sl2: [a b z d e]: 说明改变底层的array会影响所有
	// 再切这个slice得到的结果: 验证了是多个指针指向同一个数组 <--这个说法
	l1 := s[:5]
	fmt.Println("sl2:", l1)

	t := []string{"g", "h", "i"} // 直接创建
	fmt.Println("dcl:", t)

	twoD := make([][]int, 3)
	for i := 0; i < 3; i++ {
		innerLen := i + 1 // go的多维数组的内层数组大小可以不同
		twoD[i] = make([]int, innerLen)
		for j := 0; j < innerLen; j++ {
			twoD[i][j] = i + j
		}
	}
	fmt.Println("2d:", twoD)
}
