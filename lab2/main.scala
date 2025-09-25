// Online Scala Editor for free
// Write, Edit and Run your Scala code using Scala Online Compiler

object JDoodle {
  import scala.collection.mutable

  // Creamos un cache para guardar repetidos
  val memo: mutable.Map[(Int, List[Int]), Int] = mutable.Map()

  def contarFormas(monedas: List[Int], total: Int): Int = {
    memo.clear()
    contarDesde(monedas, total)
  }

  def contarDesde(monedas: List[Int], restante: Int): Int = {
    // caso de pare1: logramos el total exacto
    if (restante == 0) return 1
    // caso de pare2: no se puede formar el total 
    if (restante < 0 || monedas.isEmpty) return 0
    // clave 
    val clave = (restante, monedas)
    // verificar si ya existe en nuestro map
    if (memo.contains(clave)) return memo(clave)
    val usarHead = contarDesde(monedas, restante - monedas.head)   // restamos a la moneda actual
    val sinHead  = contarDesde(monedas.tail, restante)             // pasamos a la sgte moneda

    val totalFormas = usarHead + sinHead
    memo(clave) = totalFormas
    totalFormas
  }

  def main(args: Array[String]): Unit = {
    val monedas = List(1, 2, 5)
    val total = 20

    val formas = contarFormas(monedas, total)
    println(s"Número de formas de obtener $total: $formas")
   
  }
}
