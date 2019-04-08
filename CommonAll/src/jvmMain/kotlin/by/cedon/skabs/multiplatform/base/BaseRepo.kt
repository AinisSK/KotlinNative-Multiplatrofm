package by.cedon.skabs.multiplatform.base

import by.cedon.skabs.multiplatform.KodeinRepository
import by.cedon.skabs.multiplatform.posts.model.Post
import org.kodein.di.generic.instance
import sun.reflect.generics.reflectiveObjects.NotImplementedException


actual abstract class BaseRepo<T : Any> actual constructor(
        val ref: String,
        private val parser: IBaseParser<T>
) : IBaseRepo<T> {

    actual override suspend fun get(id: String): T {
        throw NotImplementedException()
    }

    actual override suspend fun set(id: String, t: T) {
        throw NotImplementedException()
    }

    actual override suspend fun delete(id: String) {
        throw NotImplementedException()
    }

    actual override suspend fun update(id: String, field: String, value: Any) {
        throw NotImplementedException()
    }

    actual override suspend fun getAll(): List<T> {
        throw NotImplementedException()
    }
}

class EmptyParser : IBaseParser<Post> {

    override fun parse(any: Any): Post {
        throw NotImplementedException()
    }

    override fun serialize(t: Post): Map<String, Any> {
        throw NotImplementedException()
    }
}

actual open class PostRepo : BaseRepo<Post>("post", EmptyParser()) {

    val repo: PostRepo by KodeinRepository.kodein.instance()

    override suspend fun get(id: String): Post {
        return repo.get(id)
    }

    override suspend fun set(id: String, t: Post) {
        repo.set(id, t)
    }

    override suspend fun delete(id: String) {
        repo.delete(id)
    }

    override suspend fun update(id: String, field: String, value: Any) {
        repo.update(id, field, value)
    }

    override suspend fun getAll(): List<Post> = repo.getAll()
}