package rubylich.ktmp.base

//import com.google.firebase.firestore.FirebaseFirestore
import org.kodein.di.generic.instance
import rubylich.ktmp.Injector
import rubylich.ktmp.Post
import sun.reflect.generics.reflectiveObjects.NotImplementedException
//import javax.inject.Inject

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

class EmptyParser: IBaseParser<Post> {

    override fun parse(any: Any): Post {
        throw NotImplementedException()
    }

    override fun serialize(t: Post): Map<String, Any> {
        throw NotImplementedException()
    }
}

actual open class PostRepo : BaseRepo<Post>("post", EmptyParser()) {

    //@Inject lateinit var repo: PostRepo
    val repo: PostRepo by Injector.appComponet.instance()

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