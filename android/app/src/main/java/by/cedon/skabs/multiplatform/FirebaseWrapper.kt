package by.cedon.skabs.multiplatform

import com.google.firebase.firestore.FirebaseFirestore
import rubylich.ktmp.base.IBaseParser
import rubylich.ktmp.base.IBaseRepo

abstract class FirebaseWrapper<T : Any>  constructor(
        ref: String,
        private val parser: IBaseParser<T>
) : IBaseRepo<T> {
    val collection = FirebaseFirestore.getInstance().collection(ref)

    override suspend fun get(id: String): T {
        val documentSnapshot = collection
                .document(id)
                .get()
//                .await()

        return parser.parse(documentSnapshot)
    }

    override suspend fun set(id: String, t: T) {
        collection
                .document(id)
                .set(t)
//                .await()
    }

    override suspend fun delete(id: String) {
        collection
                .document(id)
                .delete()
//                .await()
    }

    override suspend fun update(id: String, field: String, value: Any) {
        collection
                .document(id)
                .update(field, value)
//                .await()
    }

//    override suspend fun getAll(): List<T> =
//            collection.get().documents.map { parser.parse(it) }
}
