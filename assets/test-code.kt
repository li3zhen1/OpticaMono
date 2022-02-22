import kotlinx.coroutines.*

suspend fun main() {                         // a function that can be suspended and resumed later
    val start = System.currentTimeMillis()
    coroutineScope {                         // create a scope for starting coroutines
        launch {                             // start concurrent tasks
            
        }
    }
}