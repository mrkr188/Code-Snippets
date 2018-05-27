class Example(x: Int){
  // private variable
  private var _a = x
  
  // getter
  def a = _a
  // setter
  def a_= (n: Int): Unit = {
    _a = n
  }
}

// define class
var ex = new Example(2)

// using setter
ex.a = 10

// using getter
println(ex.a)
