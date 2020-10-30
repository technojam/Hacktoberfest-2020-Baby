fun main(args: Array<String>) {
    val number = 60

    print("Factors of $number are: ")
    for (i in 1..number) {
        if (number % i == 0) {
            print("$i ")
        }
    }
}
