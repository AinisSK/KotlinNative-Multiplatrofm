#import <Foundation/Foundation.h>

@class CommonClientMainPresenter, CommonClientMainModelImpl, CommonClientExpectSuccess, CommonClientKtor_client_coreHttpClient, CommonClientKotlinUnit, CommonClientKtor_utilsAttributeKey, CommonClientApiException, CommonClientKotlinThrowable, CommonClientKotlinArray, CommonClientJsonKotlinxSerializer, CommonClientKtor_httpOutgoingContent, CommonClientServerApi, CommonClientPlatformSettings, CommonClientKtor_client_coreHttpClientConfig, CommonClientKotlinx_coroutines_core_nativeCoroutineDispatcher, CommonClientKtor_client_coreHttpClientEngineConfig, CommonClientKtor_client_coreHttpReceivePipeline, CommonClientKtor_client_coreHttpRequestPipeline, CommonClientKtor_client_coreHttpResponsePipeline, CommonClientKtor_client_coreHttpSendPipeline, CommonClientKtor_client_coreHttpClientCall, CommonClientKtor_utilsGMTDate, CommonClientKtor_httpHttpStatusCode, CommonClientKtor_httpHttpProtocolVersion, CommonClientKtor_httpContentType, CommonClientKotlinAbstractCoroutineContextElement, CommonClientKtor_client_coreHttpResponseConfig, CommonClientKtor_utilsPipeline, CommonClientKtor_utilsPipelinePhase, CommonClientKotlinx_ioByteOrder, CommonClientKotlinx_coroutines_core_nativeCancellationException, CommonClientKtor_utilsWeekDay, CommonClientKtor_utilsMonth, CommonClientKtor_httpHeaderValueWithParameters, CommonClientKtor_httpHeaderValueParam, CommonClientKotlinx_serialization_runtime_nativeEnumDescriptor, CommonClientKotlinx_serialization_runtime_nativeSerialKind, CommonClientKotlinNothing, CommonClientKotlinx_serialization_runtime_nativeUpdateMode, CommonClientKotlinx_ioCharset, CommonClientKtor_httpHttpMethod, CommonClientKtor_httpUrl, CommonClientKotlinx_ioIoBuffer, CommonClientKotlinEnum, CommonClientKotlinIllegalStateException, CommonClientKotlinRuntimeException, CommonClientKotlinException, CommonClientKotlinx_serialization_runtime_nativeSerialClassDescImpl, CommonClientKotlinx_ioCharsetDecoder, CommonClientKotlinx_ioCharsetEncoder, CommonClientKtor_httpURLProtocol, CommonClientKotlinByteArray, CommonClientKotlinDoubleArray, CommonClientKotlinFloatArray, CommonClientKotlinIntArray, CommonClientKotlinLongArray, CommonClientKotlinShortArray, CommonClientKotlinCharArray, CommonClientKotlinx_coroutines_core_nativeAtomicDesc, CommonClientKotlinByteIterator, CommonClientKotlinDoubleIterator, CommonClientKotlinFloatIterator, CommonClientKotlinIntIterator, CommonClientKotlinLongIterator, CommonClientKotlinShortIterator, CommonClientKotlinCharIterator, CommonClientKotlinx_coroutines_core_nativeAtomicOp, CommonClientKotlinx_coroutines_core_nativeOpDescriptor;

@protocol CommonClientKotlinCoroutineContext, CommonClientMainModel, CommonClientMainView, CommonClientCommonAllPlatformLogger, CommonClientKtor_client_coreHttpClientFeature, CommonClientKtor_client_coreHttpResponse, CommonClientKtor_client_jsonJsonSerializer, CommonClientKotlinx_serialization_runtime_nativeKSerializer, CommonClientKotlinKClass, CommonClientSettings, CommonClientBaseView, CommonClientKotlinCoroutineContextElement, CommonClientKotlinCoroutineContextKey, CommonClientKotlinx_coroutines_core_nativeCoroutineScope, CommonClientKotlinx_ioCloseable, CommonClientKtor_client_coreHttpClientEngine, CommonClientKtor_utilsAttributes, CommonClientKotlinIterator, CommonClientKotlinx_coroutines_ioByteReadChannel, CommonClientKotlinx_coroutines_core_nativeJob, CommonClientKtor_httpHttpMessage, CommonClientKtor_httpHeaders, CommonClientKotlinx_serialization_runtime_nativeSerializationStrategy, CommonClientKotlinx_serialization_runtime_nativeEncoder, CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor, CommonClientKotlinx_serialization_runtime_nativeDeserializationStrategy, CommonClientKotlinx_serialization_runtime_nativeDecoder, CommonClientKotlinKDeclarationContainer, CommonClientKotlinKAnnotatedElement, CommonClientKotlinKClassifier, CommonClientKotlinContinuationInterceptor, CommonClientKotlinContinuation, CommonClientKotlinx_coroutines_core_nativeRunnable, CommonClientKotlinSuspendFunction2, CommonClientKtor_client_coreHttpRequest, CommonClientKotlinx_coroutines_ioReadSession, CommonClientKotlinx_coroutines_core_nativeChildHandle, CommonClientKotlinx_coroutines_core_nativeChildJob, CommonClientKotlinx_coroutines_core_nativeDisposableHandle, CommonClientKotlinSequence, CommonClientKotlinx_coroutines_core_nativeSelectClause0, CommonClientKotlinComparable, CommonClientKtor_utilsStringValues, CommonClientKotlinMapEntry, CommonClientKotlinx_serialization_runtime_nativeCompositeEncoder, CommonClientKotlinx_serialization_runtime_nativeSerialContext, CommonClientKotlinAnnotation, CommonClientKotlinx_serialization_runtime_nativeCompositeDecoder, CommonClientKotlinSuspendFunction, CommonClientKotlinx_coroutines_core_nativeParentJob, CommonClientKotlinx_coroutines_core_nativeSelectInstance, CommonClientKotlinSuspendFunction0, CommonClientKotlinx_serialization_runtime_nativeGeneratedSerializer, CommonClientKtor_httpParameters, CommonClientKotlinx_ioInput, CommonClientKotlinx_ioOutput, CommonClientKotlinAppendable, CommonClientKotlinx_ioObjectPool;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface CommonClientMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface CommonClientMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface CommonClientNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface CommonClientByte : CommonClientNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface CommonClientUByte : CommonClientNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface CommonClientShort : CommonClientNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface CommonClientUShort : CommonClientNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface CommonClientInt : CommonClientNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface CommonClientUInt : CommonClientNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface CommonClientLong : CommonClientNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface CommonClientULong : CommonClientNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface CommonClientFloat : CommonClientNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface CommonClientDouble : CommonClientNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface CommonClientBoolean : CommonClientNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainPresenter")))
@interface CommonClientMainPresenter : KotlinBase
- (instancetype)initWithUiContext:(id<CommonClientKotlinCoroutineContext>)uiContext mainModel:(id<CommonClientMainModel>)mainModel __attribute__((swift_name("init(uiContext:mainModel:)"))) __attribute__((objc_designated_initializer));
- (void)bindView:(id<CommonClientMainView>)view __attribute__((swift_name("bind(view:)")));
- (void)unbind __attribute__((swift_name("unbind()")));
- (void)doJob __attribute__((swift_name("doJob()")));
@end;

__attribute__((swift_name("MainModel")))
@protocol CommonClientMainModel
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainModelImpl")))
@interface CommonClientMainModelImpl : KotlinBase <CommonClientMainModel>
- (instancetype)initWithLogger:(id<CommonClientCommonAllPlatformLogger>)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientFeature")))
@protocol CommonClientKtor_client_coreHttpClientFeature
@required
- (void)installFeature:(id)feature scope:(CommonClientKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (id)prepareBlock:(CommonClientKotlinUnit *(^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) CommonClientKtor_utilsAttributeKey *key;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExpectSuccess")))
@interface CommonClientExpectSuccess : KotlinBase <CommonClientKtor_client_coreHttpClientFeature>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)expectSuccess __attribute__((swift_name("init()")));
- (CommonClientExpectSuccess *)prepareBlock:(CommonClientKotlinUnit *(^)(CommonClientKotlinUnit *))block __attribute__((swift_name("prepare(block:)")));
- (void)installFeature:(CommonClientExpectSuccess *)feature scope:(CommonClientKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface CommonClientKotlinThrowable : KotlinBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (CommonClientKotlinArray *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
@property (readonly) CommonClientKotlinThrowable * _Nullable cause;
@property (readonly) NSString * _Nullable message;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiException")))
@interface CommonClientApiException : CommonClientKotlinThrowable
- (instancetype)initWithResponse:(id<CommonClientKtor_client_coreHttpResponse>)response __attribute__((swift_name("init(response:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(CommonClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) id<CommonClientKtor_client_coreHttpResponse> response;
@end;

__attribute__((swift_name("Ktor_client_jsonJsonSerializer")))
@protocol CommonClientKtor_client_jsonJsonSerializer
@required
- (CommonClientKtor_httpOutgoingContent *)writeData:(id)data __attribute__((swift_name("write(data:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonKotlinxSerializer")))
@interface CommonClientJsonKotlinxSerializer : KotlinBase <CommonClientKtor_client_jsonJsonSerializer>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)setMapperSerializer:(id<CommonClientKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("setMapper(serializer:)")));
@property (readonly) CommonClientMutableDictionary<id<CommonClientKotlinKClass>, id<CommonClientKotlinx_serialization_runtime_nativeKSerializer>> *mappers;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerApi")))
@interface CommonClientServerApi : KotlinBase
- (instancetype)initWithLogger:(id<CommonClientCommonAllPlatformLogger>)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *endPoint;
@end;

__attribute__((swift_name("Settings")))
@protocol CommonClientSettings
@required
- (void)putBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("putBoolean(key:value:)")));
- (BOOL)getBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue __attribute__((swift_name("getBoolean(key:defaultValue:)")));
- (void)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
- (NSString *)getStringKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getString(key:defaultValue:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformSettings")))
@interface CommonClientPlatformSettings : KotlinBase <CommonClientSettings>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)hasKeyKey:(NSString *)key __attribute__((swift_name("hasKey(key:)")));
@end;

__attribute__((swift_name("BaseView")))
@protocol CommonClientBaseView
@required
- (void)showErrorError:(CommonClientKotlinThrowable *)error __attribute__((swift_name("showError(error:)")));
@end;

__attribute__((swift_name("MainView")))
@protocol CommonClientMainView <CommonClientBaseView>
@required
- (void)onServerResponseSuccess:(BOOL)success __attribute__((swift_name("onServerResponse(success:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol CommonClientKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<CommonClientKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<CommonClientKotlinCoroutineContextElement> _Nullable)getKey:(id<CommonClientKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<CommonClientKotlinCoroutineContext>)minusKeyKey:(id<CommonClientKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<CommonClientKotlinCoroutineContext>)plusContext:(id<CommonClientKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("CommonAllPlatformLogger")))
@protocol CommonClientCommonAllPlatformLogger
@required
- (void)logTag:(NSString *)tag text:(NSString *)text __attribute__((swift_name("log(tag:text:)")));
- (void)logExceptionTag:(NSString *)tag text:(NSString *)text exception:(CommonClientKotlinThrowable * _Nullable)exception __attribute__((swift_name("logException(tag:text:exception:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeCoroutineScope")))
@protocol CommonClientKotlinx_coroutines_core_nativeCoroutineScope
@required
@property (readonly) id<CommonClientKotlinCoroutineContext> coroutineContext;
@end;

__attribute__((swift_name("Kotlinx_ioCloseable")))
@protocol CommonClientKotlinx_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface CommonClientKtor_client_coreHttpClient : KotlinBase <CommonClientKotlinx_coroutines_core_nativeCoroutineScope, CommonClientKotlinx_ioCloseable>
- (instancetype)initWithEngine:(id<CommonClientKtor_client_coreHttpClientEngine>)engine userConfig:(CommonClientKtor_client_coreHttpClientConfig *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (CommonClientKtor_client_coreHttpClient *)configBlock:(CommonClientKotlinUnit *(^)(CommonClientKtor_client_coreHttpClientConfig *))block __attribute__((swift_name("config(block:)")));
@property (readonly) id<CommonClientKtor_utilsAttributes> attributes;
@property (readonly) CommonClientKotlinx_coroutines_core_nativeCoroutineDispatcher *dispatcher;
@property (readonly) CommonClientKtor_client_coreHttpClientEngineConfig *engineConfig;
@property (readonly) CommonClientKtor_client_coreHttpReceivePipeline *receivePipeline;
@property (readonly) CommonClientKtor_client_coreHttpRequestPipeline *requestPipeline;
@property (readonly) CommonClientKtor_client_coreHttpResponsePipeline *responsePipeline;
@property (readonly) CommonClientKtor_client_coreHttpSendPipeline *sendPipeline;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface CommonClientKotlinUnit : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface CommonClientKtor_utilsAttributeKey : KotlinBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *name;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface CommonClientKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(CommonClientInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<CommonClientKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol CommonClientKtor_httpHttpMessage
@required
@property (readonly) id<CommonClientKtor_httpHeaders> headers;
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@protocol CommonClientKtor_client_coreHttpResponse <CommonClientKtor_httpHttpMessage, CommonClientKotlinx_coroutines_core_nativeCoroutineScope, CommonClientKotlinx_ioCloseable>
@required
@property (readonly) CommonClientKtor_client_coreHttpClientCall *call;
@property (readonly) id<CommonClientKotlinx_coroutines_ioByteReadChannel> content;
@property (readonly) id<CommonClientKotlinx_coroutines_core_nativeJob> executionContext;
@property (readonly) CommonClientKtor_utilsGMTDate *requestTime;
@property (readonly) CommonClientKtor_utilsGMTDate *responseTime;
@property (readonly) CommonClientKtor_httpHttpStatusCode *status;
@property (readonly) CommonClientKtor_httpHttpProtocolVersion *version;
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface CommonClientKtor_httpOutgoingContent : KotlinBase
- (id _Nullable)getPropertyKey:(CommonClientKtor_utilsAttributeKey *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(CommonClientKtor_utilsAttributeKey *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
@property (readonly) CommonClientLong * _Nullable contentLength;
@property (readonly) CommonClientKtor_httpContentType * _Nullable contentType;
@property (readonly) id<CommonClientKtor_httpHeaders> headers;
@property (readonly) CommonClientKtor_httpHttpStatusCode * _Nullable status;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerializationStrategy")))
@protocol CommonClientKotlinx_serialization_runtime_nativeSerializationStrategy
@required
- (void)serializeEncoder:(id<CommonClientKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(id _Nullable)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDeserializationStrategy")))
@protocol CommonClientKotlinx_serialization_runtime_nativeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<CommonClientKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<CommonClientKotlinx_serialization_runtime_nativeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeKSerializer")))
@protocol CommonClientKotlinx_serialization_runtime_nativeKSerializer <CommonClientKotlinx_serialization_runtime_nativeSerializationStrategy, CommonClientKotlinx_serialization_runtime_nativeDeserializationStrategy>
@required
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol CommonClientKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol CommonClientKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol CommonClientKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol CommonClientKotlinKClass <CommonClientKotlinKDeclarationContainer, CommonClientKotlinKAnnotatedElement, CommonClientKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName;
@property (readonly) NSString * _Nullable simpleName;
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol CommonClientKotlinCoroutineContextElement <CommonClientKotlinCoroutineContext>
@required
@property (readonly) id<CommonClientKotlinCoroutineContextKey> key;
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol CommonClientKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol CommonClientKtor_client_coreHttpClientEngine <CommonClientKotlinx_coroutines_core_nativeCoroutineScope, CommonClientKotlinx_ioCloseable>
@required
@property (readonly) CommonClientKtor_client_coreHttpClientEngineConfig *config;
@property (readonly) CommonClientKotlinx_coroutines_core_nativeCoroutineDispatcher *dispatcher;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface CommonClientKtor_client_coreHttpClientConfig : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CommonClientKtor_client_coreHttpClientConfig *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(CommonClientKotlinUnit *(^)(CommonClientKtor_client_coreHttpClientEngineConfig *))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(CommonClientKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installFeature:(id<CommonClientKtor_client_coreHttpClientFeature>)feature configure:(CommonClientKotlinUnit *(^)(id))configure __attribute__((swift_name("install(feature:configure:)")));
- (void)installKey:(NSString *)key block:(CommonClientKotlinUnit *(^)(CommonClientKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(CommonClientKtor_client_coreHttpClientConfig *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL expectSuccess;
@property BOOL followRedirects;
@property BOOL useDefaultTransformers;
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol CommonClientKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(CommonClientKtor_utilsAttributeKey *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(CommonClientKtor_utilsAttributeKey *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(CommonClientKtor_utilsAttributeKey *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(CommonClientKtor_utilsAttributeKey *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(CommonClientKtor_utilsAttributeKey *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(CommonClientKtor_utilsAttributeKey *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(CommonClientKtor_utilsAttributeKey *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(CommonClientKtor_utilsAttributeKey *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<CommonClientKtor_utilsAttributeKey *> *allKeys;
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface CommonClientKotlinAbstractCoroutineContextElement : KotlinBase <CommonClientKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<CommonClientKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol CommonClientKotlinContinuationInterceptor <CommonClientKotlinCoroutineContextElement>
@required
- (id<CommonClientKotlinContinuation>)interceptContinuationContinuation:(id<CommonClientKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<CommonClientKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeCoroutineDispatcher")))
@interface CommonClientKotlinx_coroutines_core_nativeCoroutineDispatcher : CommonClientKotlinAbstractCoroutineContextElement <CommonClientKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<CommonClientKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<CommonClientKotlinCoroutineContext>)context block:(id<CommonClientKotlinx_coroutines_core_nativeRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<CommonClientKotlinCoroutineContext>)context block:(id<CommonClientKotlinx_coroutines_core_nativeRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (BOOL)isDispatchNeededContext:(id<CommonClientKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (CommonClientKotlinx_coroutines_core_nativeCoroutineDispatcher *)plusOther:(CommonClientKotlinx_coroutines_core_nativeCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface CommonClientKtor_client_coreHttpClientEngineConfig : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property CommonClientKotlinx_coroutines_core_nativeCoroutineDispatcher * _Nullable dispatcher;
@property BOOL pipelining;
@property (readonly) CommonClientKtor_client_coreHttpResponseConfig *response;
@property int32_t threadsCount;
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface CommonClientKtor_utilsPipeline : KotlinBase
- (instancetype)initWithPhase:(CommonClientKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CommonClientKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(CommonClientKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(CommonClientKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));
- (void)insertPhaseAfterReference:(CommonClientKtor_utilsPipelinePhase *)reference phase:(CommonClientKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(CommonClientKtor_utilsPipelinePhase *)reference phase:(CommonClientKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(CommonClientKtor_utilsPipelinePhase *)phase block:(id<CommonClientKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (void)mergeFrom:(CommonClientKtor_utilsPipeline *)from __attribute__((swift_name("merge(from:)")));
@property (readonly) id<CommonClientKtor_utilsAttributes> attributes;
@property (readonly) BOOL isEmpty;
@property (readonly) NSArray<CommonClientKtor_utilsPipelinePhase *> *items;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface CommonClientKtor_client_coreHttpReceivePipeline : CommonClientKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(CommonClientKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CommonClientKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(CommonClientKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface CommonClientKtor_client_coreHttpRequestPipeline : CommonClientKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(CommonClientKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CommonClientKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(CommonClientKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface CommonClientKtor_client_coreHttpResponsePipeline : CommonClientKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(CommonClientKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CommonClientKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(CommonClientKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface CommonClientKtor_client_coreHttpSendPipeline : CommonClientKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(CommonClientKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CommonClientKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(CommonClientKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol CommonClientKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface CommonClientKtor_client_coreHttpClientCall : KotlinBase <CommonClientKotlinx_coroutines_core_nativeCoroutineScope, CommonClientKotlinx_ioCloseable>
@property (readonly) CommonClientKtor_client_coreHttpClient *client;
@property (readonly) id<CommonClientKtor_client_coreHttpRequest> request;
@property (readonly) id<CommonClientKtor_client_coreHttpResponse> response;
@property (readonly) CommonClientKtor_client_coreHttpResponseConfig *responseConfig;
@end;

__attribute__((swift_name("Kotlinx_coroutines_ioByteReadChannel")))
@protocol CommonClientKotlinx_coroutines_ioByteReadChannel
@required
- (BOOL)cancelCause:(CommonClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (void)readSessionConsumer:(CommonClientKotlinUnit *(^)(id<CommonClientKotlinx_coroutines_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)")));
@property (readonly) int32_t availableForRead;
@property (readonly) BOOL isClosedForRead;
@property (readonly) BOOL isClosedForWrite;
@property CommonClientKotlinx_ioByteOrder *readByteOrder;
@property (readonly) int64_t totalBytesRead;
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeJob")))
@protocol CommonClientKotlinx_coroutines_core_nativeJob <CommonClientKotlinCoroutineContextElement>
@required
- (id<CommonClientKotlinx_coroutines_core_nativeChildHandle>)attachChildChild:(id<CommonClientKotlinx_coroutines_core_nativeChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancel __attribute__((swift_name("cancel()")));
- (BOOL)cancelCause:(CommonClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (BOOL)cancel0 __attribute__((swift_name("cancel0()")));
- (CommonClientKotlinx_coroutines_core_nativeCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<CommonClientKotlinx_coroutines_core_nativeDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(CommonClientKotlinUnit *(^)(CommonClientKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<CommonClientKotlinx_coroutines_core_nativeDisposableHandle>)invokeOnCompletionHandler:(CommonClientKotlinUnit *(^)(CommonClientKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<CommonClientKotlinx_coroutines_core_nativeJob>)plusOther_:(id<CommonClientKotlinx_coroutines_core_nativeJob>)other __attribute__((swift_name("plus(other_:)")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<CommonClientKotlinSequence> children;
@property (readonly) BOOL isActive;
@property (readonly) BOOL isCancelled;
@property (readonly) BOOL isCompleted;
@property (readonly) id<CommonClientKotlinx_coroutines_core_nativeSelectClause0> onJoin;
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol CommonClientKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface CommonClientKtor_utilsGMTDate : KotlinBase <CommonClientKotlinComparable>
- (int32_t)compareToOther:(CommonClientKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (CommonClientKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (CommonClientKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (CommonClientKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(CommonClientKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(CommonClientKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
@property (readonly) int32_t dayOfMonth;
@property (readonly) CommonClientKtor_utilsWeekDay *dayOfWeek;
@property (readonly) int32_t dayOfYear;
@property (readonly) int32_t hours;
@property (readonly) int32_t minutes;
@property (readonly) CommonClientKtor_utilsMonth *month;
@property (readonly) int32_t seconds;
@property (readonly) int64_t timestamp;
@property (readonly) int32_t year;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface CommonClientKtor_httpHttpStatusCode : KotlinBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CommonClientKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (CommonClientKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
@property (readonly, getter=description_) NSString *description;
@property (readonly) int32_t value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface CommonClientKtor_httpHttpProtocolVersion : KotlinBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (CommonClientKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
@property (readonly) int32_t major;
@property (readonly) int32_t minor;
@property (readonly) NSString *name;
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol CommonClientKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<CommonClientKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(CommonClientKotlinUnit *(^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName;
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol CommonClientKtor_httpHeaders <CommonClientKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface CommonClientKtor_httpHeaderValueWithParameters : KotlinBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<CommonClientKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
@property (readonly) NSString *content;
@property (readonly) NSArray<CommonClientKtor_httpHeaderValueParam *> *parameters;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface CommonClientKtor_httpContentType : CommonClientKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<CommonClientKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<CommonClientKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)matchPattern:(CommonClientKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (CommonClientKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (CommonClientKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype;
@property (readonly) NSString *contentType;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEncoder")))
@protocol CommonClientKotlinx_serialization_runtime_nativeEncoder
@required
- (id<CommonClientKotlinx_serialization_runtime_nativeCompositeEncoder>)beginCollectionDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(CommonClientKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<CommonClientKotlinx_serialization_runtime_nativeCompositeEncoder>)beginStructureDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(CommonClientKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(CommonClientKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<CommonClientKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<CommonClientKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<CommonClientKotlinx_serialization_runtime_nativeSerialContext> context;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialDescriptor")))
@protocol CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor
@required
- (NSArray<id<CommonClientKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<CommonClientKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount;
@property (readonly) BOOL isNullable;
@property (readonly) CommonClientKotlinx_serialization_runtime_nativeSerialKind *kind;
@property (readonly) NSString *name;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDecoder")))
@protocol CommonClientKotlinx_serialization_runtime_nativeDecoder
@required
- (id<CommonClientKotlinx_serialization_runtime_nativeCompositeDecoder>)beginStructureDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(CommonClientKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(CommonClientKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (CommonClientKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<CommonClientKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<CommonClientKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<CommonClientKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<CommonClientKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<CommonClientKotlinx_serialization_runtime_nativeSerialContext> context;
@property (readonly) CommonClientKotlinx_serialization_runtime_nativeUpdateMode *updateMode;
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol CommonClientKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<CommonClientKotlinCoroutineContext> context;
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeRunnable")))
@protocol CommonClientKotlinx_coroutines_core_nativeRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponseConfig")))
@interface CommonClientKtor_client_coreHttpResponseConfig : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property CommonClientKotlinx_ioCharset *defaultCharset;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface CommonClientKtor_utilsPipelinePhase : KotlinBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *name;
@end;

__attribute__((swift_name("KotlinSuspendFunction")))
@protocol CommonClientKotlinSuspendFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol CommonClientKotlinSuspendFunction2 <CommonClientKotlinSuspendFunction>
@required
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol CommonClientKtor_client_coreHttpRequest <CommonClientKtor_httpHttpMessage, CommonClientKotlinx_coroutines_core_nativeCoroutineScope>
@required
@property (readonly) id<CommonClientKtor_utilsAttributes> attributes;
@property (readonly) CommonClientKtor_client_coreHttpClientCall *call;
@property (readonly) CommonClientKtor_httpOutgoingContent *content;
@property (readonly) id<CommonClientKotlinx_coroutines_core_nativeJob> executionContext;
@property (readonly) CommonClientKtor_httpHttpMethod *method;
@property (readonly) CommonClientKtor_httpUrl *url;
@end;

__attribute__((swift_name("Kotlinx_coroutines_ioReadSession")))
@protocol CommonClientKotlinx_coroutines_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (CommonClientKotlinx_ioIoBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead;
@end;

__attribute__((swift_name("KotlinEnum")))
@interface CommonClientKotlinEnum : KotlinBase <CommonClientKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(CommonClientKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *name;
@property (readonly) int32_t ordinal;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_ioByteOrder")))
@interface CommonClientKotlinx_ioByteOrder : CommonClientKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) CommonClientKotlinx_ioByteOrder *bigEndian;
@property (class, readonly) CommonClientKotlinx_ioByteOrder *littleEndian;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(CommonClientKotlinx_ioByteOrder *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeDisposableHandle")))
@protocol CommonClientKotlinx_coroutines_core_nativeDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeChildHandle")))
@protocol CommonClientKotlinx_coroutines_core_nativeChildHandle <CommonClientKotlinx_coroutines_core_nativeDisposableHandle>
@required
- (BOOL)childCancelledCause:(CommonClientKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeChildJob")))
@protocol CommonClientKotlinx_coroutines_core_nativeChildJob <CommonClientKotlinx_coroutines_core_nativeJob>
@required
- (void)parentCancelledParentJob:(id<CommonClientKotlinx_coroutines_core_nativeParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinException")))
@interface CommonClientKotlinException : CommonClientKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface CommonClientKotlinRuntimeException : CommonClientKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface CommonClientKotlinIllegalStateException : CommonClientKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeCancellationException")))
@interface CommonClientKotlinx_coroutines_core_nativeCancellationException : CommonClientKotlinIllegalStateException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(CommonClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol CommonClientKotlinSequence
@required
- (id<CommonClientKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeSelectClause0")))
@protocol CommonClientKotlinx_coroutines_core_nativeSelectClause0
@required
- (void)registerSelectClause0Select:(id<CommonClientKotlinx_coroutines_core_nativeSelectInstance>)select block:(id<CommonClientKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface CommonClientKtor_utilsWeekDay : CommonClientKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) CommonClientKtor_utilsWeekDay *monday;
@property (class, readonly) CommonClientKtor_utilsWeekDay *tuesday;
@property (class, readonly) CommonClientKtor_utilsWeekDay *wednesday;
@property (class, readonly) CommonClientKtor_utilsWeekDay *thursday;
@property (class, readonly) CommonClientKtor_utilsWeekDay *friday;
@property (class, readonly) CommonClientKtor_utilsWeekDay *saturday;
@property (class, readonly) CommonClientKtor_utilsWeekDay *sunday;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(CommonClientKtor_utilsWeekDay *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface CommonClientKtor_utilsMonth : CommonClientKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) CommonClientKtor_utilsMonth *january;
@property (class, readonly) CommonClientKtor_utilsMonth *february;
@property (class, readonly) CommonClientKtor_utilsMonth *march;
@property (class, readonly) CommonClientKtor_utilsMonth *april;
@property (class, readonly) CommonClientKtor_utilsMonth *may;
@property (class, readonly) CommonClientKtor_utilsMonth *june;
@property (class, readonly) CommonClientKtor_utilsMonth *july;
@property (class, readonly) CommonClientKtor_utilsMonth *august;
@property (class, readonly) CommonClientKtor_utilsMonth *september;
@property (class, readonly) CommonClientKtor_utilsMonth *october;
@property (class, readonly) CommonClientKtor_utilsMonth *november;
@property (class, readonly) CommonClientKtor_utilsMonth *december;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(CommonClientKtor_utilsMonth *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *value;
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol CommonClientKotlinMapEntry
@required
@property (readonly) id _Nullable key;
@property (readonly) id _Nullable value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface CommonClientKtor_httpHeaderValueParam : KotlinBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CommonClientKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
@property (readonly) NSString *name;
@property (readonly) NSString *value;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeEncoder")))
@protocol CommonClientKotlinx_serialization_runtime_nativeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index serializer:(id<CommonClientKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:serializer:value:)")));
- (void)encodeSerializableElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index serializer:(id<CommonClientKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:serializer:value:)")));
- (void)encodeShortElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<CommonClientKotlinx_serialization_runtime_nativeSerialContext> context;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialClassDescImpl")))
@interface CommonClientKotlinx_serialization_runtime_nativeSerialClassDescImpl : KotlinBase <CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<CommonClientKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer));
- (void)addElementName:(NSString *)name isOptional:(BOOL)isOptional __attribute__((swift_name("addElement(name:isOptional:)")));
- (void)pushAnnotationA:(id<CommonClientKotlinAnnotation>)a __attribute__((swift_name("pushAnnotation(a:)")));
- (void)pushClassAnnotationA:(id<CommonClientKotlinAnnotation>)a __attribute__((swift_name("pushClassAnnotation(a:)")));
- (void)pushDescriptorDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("pushDescriptor(desc:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEnumDescriptor")))
@interface CommonClientKotlinx_serialization_runtime_nativeEnumDescriptor : CommonClientKotlinx_serialization_runtime_nativeSerialClassDescImpl
- (instancetype)initWithName:(NSString *)name choices:(CommonClientKotlinArray *)choices __attribute__((swift_name("init(name:choices:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<CommonClientKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialContext")))
@protocol CommonClientKotlinx_serialization_runtime_nativeSerialContext
@required
- (id<CommonClientKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getKclass:(id<CommonClientKotlinKClass>)kclass __attribute__((swift_name("get(kclass:)")));
- (id<CommonClientKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getByValueValue:(id)value __attribute__((swift_name("getByValue(value:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol CommonClientKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialKind")))
@interface CommonClientKotlinx_serialization_runtime_nativeSerialKind : KotlinBase
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeDecoder")))
@protocol CommonClientKotlinx_serialization_runtime_nativeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<CommonClientKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(desc:index:deserializer:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<CommonClientKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(desc:index:deserializer:)")));
- (int16_t)decodeShortElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<CommonClientKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<CommonClientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<CommonClientKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:deserializer:old:)")));
@property (readonly) id<CommonClientKotlinx_serialization_runtime_nativeSerialContext> context;
@property (readonly) CommonClientKotlinx_serialization_runtime_nativeUpdateMode *updateMode;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface CommonClientKotlinNothing : KotlinBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtime_nativeUpdateMode")))
@interface CommonClientKotlinx_serialization_runtime_nativeUpdateMode : CommonClientKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) CommonClientKotlinx_serialization_runtime_nativeUpdateMode *banned;
@property (class, readonly) CommonClientKotlinx_serialization_runtime_nativeUpdateMode *overwrite;
@property (class, readonly) CommonClientKotlinx_serialization_runtime_nativeUpdateMode *update;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(CommonClientKotlinx_serialization_runtime_nativeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("Kotlinx_ioCharset")))
@interface CommonClientKotlinx_ioCharset : KotlinBase
- (instancetype)initWith_name:(NSString *)_name __attribute__((swift_name("init(_name:)"))) __attribute__((objc_designated_initializer));
- (CommonClientKotlinx_ioCharsetDecoder *)doNewDecoder __attribute__((swift_name("doNewDecoder()")));
- (CommonClientKotlinx_ioCharsetEncoder *)doNewEncoder __attribute__((swift_name("doNewEncoder()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface CommonClientKtor_httpHttpMethod : KotlinBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (CommonClientKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
@property (readonly) NSString *value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface CommonClientKtor_httpUrl : KotlinBase
- (instancetype)initWithProtocol:(CommonClientKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<CommonClientKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
- (CommonClientKtor_httpURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<CommonClientKtor_httpParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (CommonClientKtor_httpUrl *)doCopyProtocol:(CommonClientKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<CommonClientKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
@property (readonly) NSString *encodedPath;
@property (readonly) NSString *fragment;
@property (readonly) NSString *host;
@property (readonly) id<CommonClientKtor_httpParameters> parameters;
@property (readonly) NSString * _Nullable password;
@property (readonly) int32_t port;
@property (readonly) CommonClientKtor_httpURLProtocol *protocol;
@property (readonly) int32_t specifiedPort;
@property (readonly) BOOL trailingQuery;
@property (readonly) NSString * _Nullable user;
@end;

__attribute__((swift_name("Kotlinx_ioInput")))
@protocol CommonClientKotlinx_ioInput <CommonClientKotlinx_ioCloseable>
@required
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (int32_t)peekToBuffer:(CommonClientKotlinx_ioIoBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int32_t)readAvailableDst:(CommonClientKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length:)")));
- (int32_t)readAvailableDst:(CommonClientKotlinDoubleArray *)dst offset:(int32_t)offset length_:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length_:)")));
- (int32_t)readAvailableDst:(CommonClientKotlinFloatArray *)dst offset:(int32_t)offset length__:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length__:)")));
- (int32_t)readAvailableDst:(CommonClientKotlinIntArray *)dst offset:(int32_t)offset length___:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length___:)")));
- (int32_t)readAvailableDst:(CommonClientKotlinLongArray *)dst offset:(int32_t)offset length____:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length____:)")));
- (int32_t)readAvailableDst:(CommonClientKotlinShortArray *)dst offset:(int32_t)offset length_____:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length_____:)")));
- (int32_t)readAvailableDst:(void *)dst offset:(int32_t)offset length______:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length______:)")));
- (int64_t)readAvailableDst:(void *)dst offset:(int64_t)offset length_______:(int64_t)length __attribute__((swift_name("readAvailable(dst:offset:length_______:)")));
- (int32_t)readAvailableDst:(CommonClientKotlinx_ioIoBuffer *)dst length:(int32_t)length __attribute__((swift_name("readAvailable(dst:length:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (double)readDouble __attribute__((swift_name("readDouble()")));
- (float)readFloat __attribute__((swift_name("readFloat()")));
- (void)readFullyDst:(CommonClientKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length:)")));
- (void)readFullyDst:(CommonClientKotlinDoubleArray *)dst offset:(int32_t)offset length_:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length_:)")));
- (void)readFullyDst:(CommonClientKotlinFloatArray *)dst offset:(int32_t)offset length__:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length__:)")));
- (void)readFullyDst:(CommonClientKotlinIntArray *)dst offset:(int32_t)offset length___:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length___:)")));
- (void)readFullyDst:(CommonClientKotlinLongArray *)dst offset:(int32_t)offset length____:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length____:)")));
- (void)readFullyDst:(CommonClientKotlinShortArray *)dst offset:(int32_t)offset length_____:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length_____:)")));
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length______:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length______:)")));
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length_______:(int64_t)length __attribute__((swift_name("readFully(dst:offset:length_______:)")));
- (void)readFullyDst:(CommonClientKotlinx_ioIoBuffer *)dst length:(int32_t)length __attribute__((swift_name("readFully(dst:length:)")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property CommonClientKotlinx_ioByteOrder *byteOrder;
@property (readonly) BOOL endOfInput;
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol CommonClientKotlinAppendable
@required
- (id<CommonClientKotlinAppendable>)appendC:(unichar)c __attribute__((swift_name("append(c:)")));
- (id<CommonClientKotlinAppendable>)appendCsq:(id _Nullable)csq __attribute__((swift_name("append(csq:)")));
- (id<CommonClientKotlinAppendable>)appendCsq:(id _Nullable)csq start:(int32_t)start end_:(int32_t)end __attribute__((swift_name("append(csq:start:end_:)")));
@end;

__attribute__((swift_name("Kotlinx_ioOutput")))
@protocol CommonClientKotlinx_ioOutput <CommonClientKotlinAppendable, CommonClientKotlinx_ioCloseable>
@required
- (id<CommonClientKotlinAppendable>)appendCsq:(CommonClientKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (void)fillN:(int64_t)n v:(int8_t)v __attribute__((swift_name("fill(n:v:)")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeByteV:(int8_t)v __attribute__((swift_name("writeByte(v:)")));
- (void)writeDoubleV:(double)v __attribute__((swift_name("writeDouble(v:)")));
- (void)writeFloatV:(float)v __attribute__((swift_name("writeFloat(v:)")));
- (void)writeFullySrc:(CommonClientKotlinByteArray *)src offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length:)")));
- (void)writeFullySrc:(CommonClientKotlinDoubleArray *)src offset:(int32_t)offset length_:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length_:)")));
- (void)writeFullySrc:(CommonClientKotlinFloatArray *)src offset:(int32_t)offset length__:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length__:)")));
- (void)writeFullySrc:(CommonClientKotlinIntArray *)src offset:(int32_t)offset length___:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length___:)")));
- (void)writeFullySrc:(CommonClientKotlinLongArray *)src offset:(int32_t)offset length____:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length____:)")));
- (void)writeFullySrc:(CommonClientKotlinShortArray *)src offset:(int32_t)offset length_____:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length_____:)")));
- (void)writeFullySrc:(void *)src offset:(int32_t)offset length______:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length______:)")));
- (void)writeFullySrc:(void *)src offset:(int64_t)offset length_______:(int64_t)length __attribute__((swift_name("writeFully(src:offset:length_______:)")));
- (void)writeFullySrc:(CommonClientKotlinx_ioIoBuffer *)src length:(int32_t)length __attribute__((swift_name("writeFully(src:length:)")));
- (void)writeIntV:(int32_t)v __attribute__((swift_name("writeInt(v:)")));
- (void)writeLongV:(int64_t)v __attribute__((swift_name("writeLong(v:)")));
- (void)writeShortV:(int16_t)v __attribute__((swift_name("writeShort(v:)")));
@property CommonClientKotlinx_ioByteOrder *byteOrder;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_ioIoBuffer")))
@interface CommonClientKotlinx_ioIoBuffer : KotlinBase <CommonClientKotlinx_ioInput, CommonClientKotlinx_ioOutput>
- (instancetype)initWithContent:(void *)content contentCapacity:(int32_t)contentCapacity __attribute__((swift_name("init(content:contentCapacity:)"))) __attribute__((objc_designated_initializer));
- (int32_t)appendCharsCsq:(CommonClientKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end:)")));
- (int32_t)appendCharsCsq:(id)csq start:(int32_t)start end_:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end_:)")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (BOOL)canWrite __attribute__((swift_name("canWrite()")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (BOOL)isExclusivelyOwned __attribute__((swift_name("isExclusivelyOwned()")));
- (CommonClientKotlinx_ioIoBuffer *)makeView __attribute__((swift_name("makeView()")));
- (void)pushBackN:(int32_t)n __attribute__((swift_name("pushBack(n:)")));
- (void)readDst:(CommonClientKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("read(dst:offset:length:)")));
- (int32_t)readDirectBlock:(CommonClientInt *(^)(id))block __attribute__((swift_name("readDirect(block:)")));
- (void)releasePool:(id<CommonClientKotlinx_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reserveEndGapN:(int32_t)n __attribute__((swift_name("reserveEndGap(n:)")));
- (void)reserveStartGapN:(int32_t)n __attribute__((swift_name("reserveStartGap(n:)")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)writeArray:(CommonClientKotlinByteArray *)array offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("write(array:offset:length:)")));
- (int32_t)writeBufferSrc:(CommonClientKotlinx_ioIoBuffer *)src length:(int32_t)length __attribute__((swift_name("writeBuffer(src:length:)")));
- (int32_t)writeDirectBlock:(CommonClientInt *(^)(id))block __attribute__((swift_name("writeDirect(block:)")));
@property id _Nullable attachment;
@property (readonly) int32_t capacity;
@property (readonly) int32_t endGap;
@property CommonClientKotlinx_ioIoBuffer * _Nullable next;
@property (readonly) int32_t readRemaining;
@property (readonly) int32_t startGap;
@property (readonly) int32_t writeRemaining;
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeParentJob")))
@protocol CommonClientKotlinx_coroutines_core_nativeParentJob <CommonClientKotlinx_coroutines_core_nativeJob>
@required
- (CommonClientKotlinThrowable *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeSelectInstance")))
@protocol CommonClientKotlinx_coroutines_core_nativeSelectInstance
@required
- (void)disposeOnSelectHandle:(id<CommonClientKotlinx_coroutines_core_nativeDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicIfNotSelectedDesc:(CommonClientKotlinx_coroutines_core_nativeAtomicDesc *)desc __attribute__((swift_name("performAtomicIfNotSelected(desc:)")));
- (id _Nullable)performAtomicTrySelectDesc:(CommonClientKotlinx_coroutines_core_nativeAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectCancellableWithExceptionException:(CommonClientKotlinThrowable *)exception __attribute__((swift_name("resumeSelectCancellableWithException(exception:)")));
- (BOOL)trySelectIdempotent:(id _Nullable)idempotent __attribute__((swift_name("trySelect(idempotent:)")));
@property (readonly) id<CommonClientKotlinContinuation> completion;
@property (readonly) BOOL isSelected;
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol CommonClientKotlinSuspendFunction0 <CommonClientKotlinSuspendFunction>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeGeneratedSerializer")))
@protocol CommonClientKotlinx_serialization_runtime_nativeGeneratedSerializer <CommonClientKotlinx_serialization_runtime_nativeKSerializer>
@required
- (CommonClientKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
@end;

__attribute__((swift_name("Kotlinx_ioCharsetDecoder")))
@interface CommonClientKotlinx_ioCharsetDecoder : KotlinBase
- (instancetype)initWith_charset:(CommonClientKotlinx_ioCharset *)_charset __attribute__((swift_name("init(_charset:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_ioCharsetEncoder")))
@interface CommonClientKotlinx_ioCharsetEncoder : KotlinBase
- (instancetype)initWith_charset:(CommonClientKotlinx_ioCharset *)_charset __attribute__((swift_name("init(_charset:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface CommonClientKtor_httpURLProtocol : KotlinBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (CommonClientKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
@property (readonly) int32_t defaultPort;
@property (readonly) NSString *name;
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol CommonClientKtor_httpParameters <CommonClientKtor_utilsStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface CommonClientKotlinByteArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CommonClientByte *(^)(CommonClientInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CommonClientKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinDoubleArray")))
@interface CommonClientKotlinDoubleArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CommonClientDouble *(^)(CommonClientInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (double)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CommonClientKotlinDoubleIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(double)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinFloatArray")))
@interface CommonClientKotlinFloatArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CommonClientFloat *(^)(CommonClientInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (float)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CommonClientKotlinFloatIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(float)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface CommonClientKotlinIntArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CommonClientInt *(^)(CommonClientInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CommonClientKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongArray")))
@interface CommonClientKotlinLongArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CommonClientLong *(^)(CommonClientInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int64_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CommonClientKotlinLongIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int64_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinShortArray")))
@interface CommonClientKotlinShortArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CommonClientShort *(^)(CommonClientInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int16_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CommonClientKotlinShortIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int16_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface CommonClientKotlinCharArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(CommonClientInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CommonClientKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((swift_name("Kotlinx_ioObjectPool")))
@protocol CommonClientKotlinx_ioObjectPool <CommonClientKotlinx_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity;
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeAtomicDesc")))
@interface CommonClientKotlinx_coroutines_core_nativeAtomicDesc : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(CommonClientKotlinx_coroutines_core_nativeAtomicOp *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(CommonClientKotlinx_coroutines_core_nativeAtomicOp *)op __attribute__((swift_name("prepare(op:)")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface CommonClientKotlinByteIterator : KotlinBase <CommonClientKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CommonClientByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("KotlinDoubleIterator")))
@interface CommonClientKotlinDoubleIterator : KotlinBase <CommonClientKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CommonClientDouble *)next __attribute__((swift_name("next()")));
- (double)nextDouble __attribute__((swift_name("nextDouble()")));
@end;

__attribute__((swift_name("KotlinFloatIterator")))
@interface CommonClientKotlinFloatIterator : KotlinBase <CommonClientKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CommonClientFloat *)next __attribute__((swift_name("next()")));
- (float)nextFloat __attribute__((swift_name("nextFloat()")));
@end;

__attribute__((swift_name("KotlinIntIterator")))
@interface CommonClientKotlinIntIterator : KotlinBase <CommonClientKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CommonClientInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end;

__attribute__((swift_name("KotlinLongIterator")))
@interface CommonClientKotlinLongIterator : KotlinBase <CommonClientKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CommonClientLong *)next __attribute__((swift_name("next()")));
- (int64_t)nextLong __attribute__((swift_name("nextLong()")));
@end;

__attribute__((swift_name("KotlinShortIterator")))
@interface CommonClientKotlinShortIterator : KotlinBase <CommonClientKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CommonClientShort *)next __attribute__((swift_name("next()")));
- (int16_t)nextShort __attribute__((swift_name("nextShort()")));
@end;

__attribute__((swift_name("KotlinCharIterator")))
@interface CommonClientKotlinCharIterator : KotlinBase <CommonClientKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeOpDescriptor")))
@interface CommonClientKotlinx_coroutines_core_nativeOpDescriptor : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeAtomicOp")))
@interface CommonClientKotlinx_coroutines_core_nativeAtomicOp : CommonClientKotlinx_coroutines_core_nativeOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(id _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)prepareAffected:(id _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
- (BOOL)tryDecideDecision:(id _Nullable)decision __attribute__((swift_name("tryDecide(decision:)")));
@property (readonly) BOOL isDecided;
@end;

NS_ASSUME_NONNULL_END
