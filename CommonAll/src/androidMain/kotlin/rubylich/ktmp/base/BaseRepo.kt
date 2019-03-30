package rubylich.ktmp.base

actual abstract class BaseRepo<T : Any> actual constructor(
        ref: String,
        private val parser: IBaseParser<T>
) : IBaseRepo<T> {

    private lateinit var platformBaseRepo: BaseRepo<T>

    actual override suspend fun get(id: String): T {
        return platformBaseRepo.get(id)
    }

    actual override suspend fun set(id: String, t: T) {
        platformBaseRepo.set(id, t)
    }

    actual override suspend fun delete(id: String) {
        platformBaseRepo.delete(id)
    }

    actual override suspend fun update(id: String, field: String, value: Any) {
        platformBaseRepo.update(id, field, value)
    }

//    actual override suspend fun getAll(): List<T> =
//            collection.get().documents.map { parser.parse(it) }
}
