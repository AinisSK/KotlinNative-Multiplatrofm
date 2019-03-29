#import <Foundation/Foundation.h>

@class Common_clientMainPresenter, Common_clientMainModelImpl, Common_clientExpectSuccess, Common_clientKtor_client_coreHttpClient, Common_clientKotlinUnit, Common_clientKtor_utilsAttributeKey, Common_clientApiException, Common_clientKotlinThrowable, Common_clientKotlinArray, Common_clientJsonKotlinxSerializer, Common_clientKtor_httpOutgoingContent, Common_clientServerApi, Common_clientPlatformSettings, Common_clientKtor_client_coreHttpClientConfig, Common_clientKotlinx_coroutines_core_nativeCoroutineDispatcher, Common_clientKtor_client_coreHttpClientEngineConfig, Common_clientKtor_client_coreHttpReceivePipeline, Common_clientKtor_client_coreHttpRequestPipeline, Common_clientKtor_client_coreHttpResponsePipeline, Common_clientKtor_client_coreHttpSendPipeline, Common_clientKtor_client_coreHttpClientCall, Common_clientKtor_utilsGMTDate, Common_clientKtor_httpHttpStatusCode, Common_clientKtor_httpHttpProtocolVersion, Common_clientKtor_httpContentType, Common_clientKotlinAbstractCoroutineContextElement, Common_clientKtor_client_coreHttpResponseConfig, Common_clientKtor_utilsPipeline, Common_clientKtor_utilsPipelinePhase, Common_clientKotlinx_ioByteOrder, Common_clientKotlinx_coroutines_core_nativeCancellationException, Common_clientKtor_utilsWeekDay, Common_clientKtor_utilsMonth, Common_clientKtor_httpHeaderValueWithParameters, Common_clientKtor_httpHeaderValueParam, Common_clientKotlinx_serialization_runtime_nativeEnumDescriptor, Common_clientKotlinx_serialization_runtime_nativeSerialKind, Common_clientKotlinNothing, Common_clientKotlinx_serialization_runtime_nativeUpdateMode, Common_clientKotlinx_ioCharset, Common_clientKtor_httpHttpMethod, Common_clientKtor_httpUrl, Common_clientKotlinx_ioIoBuffer, Common_clientKotlinEnum, Common_clientKotlinIllegalStateException, Common_clientKotlinRuntimeException, Common_clientKotlinException, Common_clientKotlinx_serialization_runtime_nativeSerialClassDescImpl, Common_clientKotlinx_ioCharsetDecoder, Common_clientKotlinx_ioCharsetEncoder, Common_clientKtor_httpURLProtocol, Common_clientKotlinByteArray, Common_clientKotlinDoubleArray, Common_clientKotlinFloatArray, Common_clientKotlinIntArray, Common_clientKotlinLongArray, Common_clientKotlinShortArray, Common_clientKotlinCharArray, Common_clientKotlinx_coroutines_core_nativeAtomicDesc, Common_clientKotlinByteIterator, Common_clientKotlinDoubleIterator, Common_clientKotlinFloatIterator, Common_clientKotlinIntIterator, Common_clientKotlinLongIterator, Common_clientKotlinShortIterator, Common_clientKotlinCharIterator, Common_clientKotlinx_coroutines_core_nativeAtomicOp, Common_clientKotlinx_coroutines_core_nativeOpDescriptor;

@protocol Common_clientKotlinCoroutineContext, Common_clientMainModel, Common_clientMainView, Common_clientCommon_allPlatformLogger, Common_clientKtor_client_coreHttpClientFeature, Common_clientKtor_client_coreHttpResponse, Common_clientKtor_client_jsonJsonSerializer, Common_clientKotlinx_serialization_runtime_nativeKSerializer, Common_clientKotlinKClass, Common_clientSettings, Common_clientBaseView, Common_clientKotlinCoroutineContextElement, Common_clientKotlinCoroutineContextKey, Common_clientKotlinx_coroutines_core_nativeCoroutineScope, Common_clientKotlinx_ioCloseable, Common_clientKtor_client_coreHttpClientEngine, Common_clientKtor_utilsAttributes, Common_clientKotlinIterator, Common_clientKotlinx_coroutines_ioByteReadChannel, Common_clientKotlinx_coroutines_core_nativeJob, Common_clientKtor_httpHttpMessage, Common_clientKtor_httpHeaders, Common_clientKotlinx_serialization_runtime_nativeSerializationStrategy, Common_clientKotlinx_serialization_runtime_nativeEncoder, Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor, Common_clientKotlinx_serialization_runtime_nativeDeserializationStrategy, Common_clientKotlinx_serialization_runtime_nativeDecoder, Common_clientKotlinKDeclarationContainer, Common_clientKotlinKAnnotatedElement, Common_clientKotlinKClassifier, Common_clientKotlinContinuationInterceptor, Common_clientKotlinContinuation, Common_clientKotlinx_coroutines_core_nativeRunnable, Common_clientKotlinSuspendFunction2, Common_clientKtor_client_coreHttpRequest, Common_clientKotlinx_coroutines_ioReadSession, Common_clientKotlinx_coroutines_core_nativeChildHandle, Common_clientKotlinx_coroutines_core_nativeChildJob, Common_clientKotlinx_coroutines_core_nativeDisposableHandle, Common_clientKotlinSequence, Common_clientKotlinx_coroutines_core_nativeSelectClause0, Common_clientKotlinComparable, Common_clientKtor_utilsStringValues, Common_clientKotlinMapEntry, Common_clientKotlinx_serialization_runtime_nativeCompositeEncoder, Common_clientKotlinx_serialization_runtime_nativeSerialContext, Common_clientKotlinAnnotation, Common_clientKotlinx_serialization_runtime_nativeCompositeDecoder, Common_clientKotlinSuspendFunction, Common_clientKotlinx_coroutines_core_nativeParentJob, Common_clientKotlinx_coroutines_core_nativeSelectInstance, Common_clientKotlinSuspendFunction0, Common_clientKotlinx_serialization_runtime_nativeGeneratedSerializer, Common_clientKtor_httpParameters, Common_clientKotlinx_ioInput, Common_clientKotlinx_ioOutput, Common_clientKotlinAppendable, Common_clientKotlinx_ioObjectPool;

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
@interface Common_clientMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface Common_clientMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface Common_clientNumber : NSNumber
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
@interface Common_clientByte : Common_clientNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface Common_clientUByte : Common_clientNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface Common_clientShort : Common_clientNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface Common_clientUShort : Common_clientNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface Common_clientInt : Common_clientNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface Common_clientUInt : Common_clientNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface Common_clientLong : Common_clientNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface Common_clientULong : Common_clientNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface Common_clientFloat : Common_clientNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface Common_clientDouble : Common_clientNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface Common_clientBoolean : Common_clientNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainPresenter")))
@interface Common_clientMainPresenter : KotlinBase
- (instancetype)initWithUiContext:(id<Common_clientKotlinCoroutineContext>)uiContext mainModel:(id<Common_clientMainModel>)mainModel __attribute__((swift_name("init(uiContext:mainModel:)"))) __attribute__((objc_designated_initializer));
- (void)bindView:(id<Common_clientMainView>)view __attribute__((swift_name("bind(view:)")));
- (void)unbind __attribute__((swift_name("unbind()")));
- (void)doJob __attribute__((swift_name("doJob()")));
@end;

__attribute__((swift_name("MainModel")))
@protocol Common_clientMainModel
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainModelImpl")))
@interface Common_clientMainModelImpl : KotlinBase <Common_clientMainModel>
- (instancetype)initWithLogger:(id<Common_clientCommon_allPlatformLogger>)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientFeature")))
@protocol Common_clientKtor_client_coreHttpClientFeature
@required
- (void)installFeature:(id)feature scope:(Common_clientKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (id)prepareBlock:(Common_clientKotlinUnit *(^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) Common_clientKtor_utilsAttributeKey *key;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExpectSuccess")))
@interface Common_clientExpectSuccess : KotlinBase <Common_clientKtor_client_coreHttpClientFeature>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)expectSuccess __attribute__((swift_name("init()")));
- (Common_clientExpectSuccess *)prepareBlock:(Common_clientKotlinUnit *(^)(Common_clientKotlinUnit *))block __attribute__((swift_name("prepare(block:)")));
- (void)installFeature:(Common_clientExpectSuccess *)feature scope:(Common_clientKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface Common_clientKotlinThrowable : KotlinBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Common_clientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Common_clientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (Common_clientKotlinArray *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
@property (readonly) Common_clientKotlinThrowable * _Nullable cause;
@property (readonly) NSString * _Nullable message;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiException")))
@interface Common_clientApiException : Common_clientKotlinThrowable
- (instancetype)initWithResponse:(id<Common_clientKtor_client_coreHttpResponse>)response __attribute__((swift_name("init(response:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(Common_clientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Common_clientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) id<Common_clientKtor_client_coreHttpResponse> response;
@end;

__attribute__((swift_name("Ktor_client_jsonJsonSerializer")))
@protocol Common_clientKtor_client_jsonJsonSerializer
@required
- (Common_clientKtor_httpOutgoingContent *)writeData:(id)data __attribute__((swift_name("write(data:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonKotlinxSerializer")))
@interface Common_clientJsonKotlinxSerializer : KotlinBase <Common_clientKtor_client_jsonJsonSerializer>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)setMapperSerializer:(id<Common_clientKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("setMapper(serializer:)")));
@property (readonly) Common_clientMutableDictionary<id<Common_clientKotlinKClass>, id<Common_clientKotlinx_serialization_runtime_nativeKSerializer>> *mappers;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerApi")))
@interface Common_clientServerApi : KotlinBase
- (instancetype)initWithLogger:(id<Common_clientCommon_allPlatformLogger>)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *endPoint;
@end;

__attribute__((swift_name("Settings")))
@protocol Common_clientSettings
@required
- (void)putBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("putBoolean(key:value:)")));
- (BOOL)getBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue __attribute__((swift_name("getBoolean(key:defaultValue:)")));
- (void)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
- (NSString *)getStringKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getString(key:defaultValue:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformSettings")))
@interface Common_clientPlatformSettings : KotlinBase <Common_clientSettings>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)hasKeyKey:(NSString *)key __attribute__((swift_name("hasKey(key:)")));
@end;

__attribute__((swift_name("BaseView")))
@protocol Common_clientBaseView
@required
- (void)showErrorError:(Common_clientKotlinThrowable *)error __attribute__((swift_name("showError(error:)")));
@end;

__attribute__((swift_name("MainView")))
@protocol Common_clientMainView <Common_clientBaseView>
@required
- (void)onServerResponseSuccess:(BOOL)success __attribute__((swift_name("onServerResponse(success:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol Common_clientKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<Common_clientKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<Common_clientKotlinCoroutineContextElement> _Nullable)getKey:(id<Common_clientKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<Common_clientKotlinCoroutineContext>)minusKeyKey:(id<Common_clientKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<Common_clientKotlinCoroutineContext>)plusContext:(id<Common_clientKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("Common_allPlatformLogger")))
@protocol Common_clientCommon_allPlatformLogger
@required
- (void)logTag:(NSString *)tag text:(NSString *)text __attribute__((swift_name("log(tag:text:)")));
- (void)logExceptionTag:(NSString *)tag text:(NSString *)text exception:(Common_clientKotlinThrowable * _Nullable)exception __attribute__((swift_name("logException(tag:text:exception:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeCoroutineScope")))
@protocol Common_clientKotlinx_coroutines_core_nativeCoroutineScope
@required
@property (readonly) id<Common_clientKotlinCoroutineContext> coroutineContext;
@end;

__attribute__((swift_name("Kotlinx_ioCloseable")))
@protocol Common_clientKotlinx_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface Common_clientKtor_client_coreHttpClient : KotlinBase <Common_clientKotlinx_coroutines_core_nativeCoroutineScope, Common_clientKotlinx_ioCloseable>
- (instancetype)initWithEngine:(id<Common_clientKtor_client_coreHttpClientEngine>)engine userConfig:(Common_clientKtor_client_coreHttpClientConfig *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (Common_clientKtor_client_coreHttpClient *)configBlock:(Common_clientKotlinUnit *(^)(Common_clientKtor_client_coreHttpClientConfig *))block __attribute__((swift_name("config(block:)")));
@property (readonly) id<Common_clientKtor_utilsAttributes> attributes;
@property (readonly) Common_clientKotlinx_coroutines_core_nativeCoroutineDispatcher *dispatcher;
@property (readonly) Common_clientKtor_client_coreHttpClientEngineConfig *engineConfig;
@property (readonly) Common_clientKtor_client_coreHttpReceivePipeline *receivePipeline;
@property (readonly) Common_clientKtor_client_coreHttpRequestPipeline *requestPipeline;
@property (readonly) Common_clientKtor_client_coreHttpResponsePipeline *responsePipeline;
@property (readonly) Common_clientKtor_client_coreHttpSendPipeline *sendPipeline;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface Common_clientKotlinUnit : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface Common_clientKtor_utilsAttributeKey : KotlinBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *name;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface Common_clientKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(Common_clientInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<Common_clientKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol Common_clientKtor_httpHttpMessage
@required
@property (readonly) id<Common_clientKtor_httpHeaders> headers;
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@protocol Common_clientKtor_client_coreHttpResponse <Common_clientKtor_httpHttpMessage, Common_clientKotlinx_coroutines_core_nativeCoroutineScope, Common_clientKotlinx_ioCloseable>
@required
@property (readonly) Common_clientKtor_client_coreHttpClientCall *call;
@property (readonly) id<Common_clientKotlinx_coroutines_ioByteReadChannel> content;
@property (readonly) id<Common_clientKotlinx_coroutines_core_nativeJob> executionContext;
@property (readonly) Common_clientKtor_utilsGMTDate *requestTime;
@property (readonly) Common_clientKtor_utilsGMTDate *responseTime;
@property (readonly) Common_clientKtor_httpHttpStatusCode *status;
@property (readonly) Common_clientKtor_httpHttpProtocolVersion *version;
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface Common_clientKtor_httpOutgoingContent : KotlinBase
- (id _Nullable)getPropertyKey:(Common_clientKtor_utilsAttributeKey *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(Common_clientKtor_utilsAttributeKey *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
@property (readonly) Common_clientLong * _Nullable contentLength;
@property (readonly) Common_clientKtor_httpContentType * _Nullable contentType;
@property (readonly) id<Common_clientKtor_httpHeaders> headers;
@property (readonly) Common_clientKtor_httpHttpStatusCode * _Nullable status;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerializationStrategy")))
@protocol Common_clientKotlinx_serialization_runtime_nativeSerializationStrategy
@required
- (void)serializeEncoder:(id<Common_clientKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(id _Nullable)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDeserializationStrategy")))
@protocol Common_clientKotlinx_serialization_runtime_nativeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<Common_clientKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<Common_clientKotlinx_serialization_runtime_nativeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeKSerializer")))
@protocol Common_clientKotlinx_serialization_runtime_nativeKSerializer <Common_clientKotlinx_serialization_runtime_nativeSerializationStrategy, Common_clientKotlinx_serialization_runtime_nativeDeserializationStrategy>
@required
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol Common_clientKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol Common_clientKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol Common_clientKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol Common_clientKotlinKClass <Common_clientKotlinKDeclarationContainer, Common_clientKotlinKAnnotatedElement, Common_clientKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName;
@property (readonly) NSString * _Nullable simpleName;
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol Common_clientKotlinCoroutineContextElement <Common_clientKotlinCoroutineContext>
@required
@property (readonly) id<Common_clientKotlinCoroutineContextKey> key;
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol Common_clientKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol Common_clientKtor_client_coreHttpClientEngine <Common_clientKotlinx_coroutines_core_nativeCoroutineScope, Common_clientKotlinx_ioCloseable>
@required
@property (readonly) Common_clientKtor_client_coreHttpClientEngineConfig *config;
@property (readonly) Common_clientKotlinx_coroutines_core_nativeCoroutineDispatcher *dispatcher;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface Common_clientKtor_client_coreHttpClientConfig : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (Common_clientKtor_client_coreHttpClientConfig *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(Common_clientKotlinUnit *(^)(Common_clientKtor_client_coreHttpClientEngineConfig *))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(Common_clientKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installFeature:(id<Common_clientKtor_client_coreHttpClientFeature>)feature configure:(Common_clientKotlinUnit *(^)(id))configure __attribute__((swift_name("install(feature:configure:)")));
- (void)installKey:(NSString *)key block:(Common_clientKotlinUnit *(^)(Common_clientKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(Common_clientKtor_client_coreHttpClientConfig *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL expectSuccess;
@property BOOL followRedirects;
@property BOOL useDefaultTransformers;
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol Common_clientKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(Common_clientKtor_utilsAttributeKey *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(Common_clientKtor_utilsAttributeKey *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(Common_clientKtor_utilsAttributeKey *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(Common_clientKtor_utilsAttributeKey *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(Common_clientKtor_utilsAttributeKey *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(Common_clientKtor_utilsAttributeKey *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(Common_clientKtor_utilsAttributeKey *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(Common_clientKtor_utilsAttributeKey *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<Common_clientKtor_utilsAttributeKey *> *allKeys;
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface Common_clientKotlinAbstractCoroutineContextElement : KotlinBase <Common_clientKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<Common_clientKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol Common_clientKotlinContinuationInterceptor <Common_clientKotlinCoroutineContextElement>
@required
- (id<Common_clientKotlinContinuation>)interceptContinuationContinuation:(id<Common_clientKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<Common_clientKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeCoroutineDispatcher")))
@interface Common_clientKotlinx_coroutines_core_nativeCoroutineDispatcher : Common_clientKotlinAbstractCoroutineContextElement <Common_clientKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<Common_clientKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<Common_clientKotlinCoroutineContext>)context block:(id<Common_clientKotlinx_coroutines_core_nativeRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<Common_clientKotlinCoroutineContext>)context block:(id<Common_clientKotlinx_coroutines_core_nativeRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (BOOL)isDispatchNeededContext:(id<Common_clientKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (Common_clientKotlinx_coroutines_core_nativeCoroutineDispatcher *)plusOther:(Common_clientKotlinx_coroutines_core_nativeCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface Common_clientKtor_client_coreHttpClientEngineConfig : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property Common_clientKotlinx_coroutines_core_nativeCoroutineDispatcher * _Nullable dispatcher;
@property BOOL pipelining;
@property (readonly) Common_clientKtor_client_coreHttpResponseConfig *response;
@property int32_t threadsCount;
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface Common_clientKtor_utilsPipeline : KotlinBase
- (instancetype)initWithPhase:(Common_clientKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<Common_clientKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(Common_clientKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(Common_clientKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));
- (void)insertPhaseAfterReference:(Common_clientKtor_utilsPipelinePhase *)reference phase:(Common_clientKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(Common_clientKtor_utilsPipelinePhase *)reference phase:(Common_clientKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(Common_clientKtor_utilsPipelinePhase *)phase block:(id<Common_clientKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (void)mergeFrom:(Common_clientKtor_utilsPipeline *)from __attribute__((swift_name("merge(from:)")));
@property (readonly) id<Common_clientKtor_utilsAttributes> attributes;
@property (readonly) BOOL isEmpty;
@property (readonly) NSArray<Common_clientKtor_utilsPipelinePhase *> *items;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface Common_clientKtor_client_coreHttpReceivePipeline : Common_clientKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(Common_clientKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<Common_clientKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(Common_clientKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface Common_clientKtor_client_coreHttpRequestPipeline : Common_clientKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(Common_clientKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<Common_clientKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(Common_clientKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface Common_clientKtor_client_coreHttpResponsePipeline : Common_clientKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(Common_clientKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<Common_clientKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(Common_clientKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface Common_clientKtor_client_coreHttpSendPipeline : Common_clientKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(Common_clientKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<Common_clientKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(Common_clientKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol Common_clientKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface Common_clientKtor_client_coreHttpClientCall : KotlinBase <Common_clientKotlinx_coroutines_core_nativeCoroutineScope, Common_clientKotlinx_ioCloseable>
@property (readonly) Common_clientKtor_client_coreHttpClient *client;
@property (readonly) id<Common_clientKtor_client_coreHttpRequest> request;
@property (readonly) id<Common_clientKtor_client_coreHttpResponse> response;
@property (readonly) Common_clientKtor_client_coreHttpResponseConfig *responseConfig;
@end;

__attribute__((swift_name("Kotlinx_coroutines_ioByteReadChannel")))
@protocol Common_clientKotlinx_coroutines_ioByteReadChannel
@required
- (BOOL)cancelCause:(Common_clientKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (void)readSessionConsumer:(Common_clientKotlinUnit *(^)(id<Common_clientKotlinx_coroutines_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)")));
@property (readonly) int32_t availableForRead;
@property (readonly) BOOL isClosedForRead;
@property (readonly) BOOL isClosedForWrite;
@property Common_clientKotlinx_ioByteOrder *readByteOrder;
@property (readonly) int64_t totalBytesRead;
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeJob")))
@protocol Common_clientKotlinx_coroutines_core_nativeJob <Common_clientKotlinCoroutineContextElement>
@required
- (id<Common_clientKotlinx_coroutines_core_nativeChildHandle>)attachChildChild:(id<Common_clientKotlinx_coroutines_core_nativeChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancel __attribute__((swift_name("cancel()")));
- (BOOL)cancelCause:(Common_clientKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (BOOL)cancel0 __attribute__((swift_name("cancel0()")));
- (Common_clientKotlinx_coroutines_core_nativeCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<Common_clientKotlinx_coroutines_core_nativeDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(Common_clientKotlinUnit *(^)(Common_clientKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<Common_clientKotlinx_coroutines_core_nativeDisposableHandle>)invokeOnCompletionHandler:(Common_clientKotlinUnit *(^)(Common_clientKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<Common_clientKotlinx_coroutines_core_nativeJob>)plusOther_:(id<Common_clientKotlinx_coroutines_core_nativeJob>)other __attribute__((swift_name("plus(other_:)")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<Common_clientKotlinSequence> children;
@property (readonly) BOOL isActive;
@property (readonly) BOOL isCancelled;
@property (readonly) BOOL isCompleted;
@property (readonly) id<Common_clientKotlinx_coroutines_core_nativeSelectClause0> onJoin;
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol Common_clientKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface Common_clientKtor_utilsGMTDate : KotlinBase <Common_clientKotlinComparable>
- (int32_t)compareToOther:(Common_clientKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (Common_clientKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (Common_clientKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (Common_clientKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(Common_clientKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(Common_clientKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
@property (readonly) int32_t dayOfMonth;
@property (readonly) Common_clientKtor_utilsWeekDay *dayOfWeek;
@property (readonly) int32_t dayOfYear;
@property (readonly) int32_t hours;
@property (readonly) int32_t minutes;
@property (readonly) Common_clientKtor_utilsMonth *month;
@property (readonly) int32_t seconds;
@property (readonly) int64_t timestamp;
@property (readonly) int32_t year;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface Common_clientKtor_httpHttpStatusCode : KotlinBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (Common_clientKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (Common_clientKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
@property (readonly, getter=description_) NSString *description;
@property (readonly) int32_t value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface Common_clientKtor_httpHttpProtocolVersion : KotlinBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (Common_clientKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
@property (readonly) int32_t major;
@property (readonly) int32_t minor;
@property (readonly) NSString *name;
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol Common_clientKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<Common_clientKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(Common_clientKotlinUnit *(^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName;
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol Common_clientKtor_httpHeaders <Common_clientKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface Common_clientKtor_httpHeaderValueWithParameters : KotlinBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<Common_clientKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
@property (readonly) NSString *content;
@property (readonly) NSArray<Common_clientKtor_httpHeaderValueParam *> *parameters;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface Common_clientKtor_httpContentType : Common_clientKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<Common_clientKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<Common_clientKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)matchPattern:(Common_clientKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (Common_clientKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (Common_clientKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype;
@property (readonly) NSString *contentType;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEncoder")))
@protocol Common_clientKotlinx_serialization_runtime_nativeEncoder
@required
- (id<Common_clientKotlinx_serialization_runtime_nativeCompositeEncoder>)beginCollectionDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(Common_clientKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<Common_clientKotlinx_serialization_runtime_nativeCompositeEncoder>)beginStructureDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(Common_clientKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(Common_clientKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<Common_clientKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<Common_clientKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<Common_clientKotlinx_serialization_runtime_nativeSerialContext> context;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialDescriptor")))
@protocol Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor
@required
- (NSArray<id<Common_clientKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<Common_clientKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount;
@property (readonly) BOOL isNullable;
@property (readonly) Common_clientKotlinx_serialization_runtime_nativeSerialKind *kind;
@property (readonly) NSString *name;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDecoder")))
@protocol Common_clientKotlinx_serialization_runtime_nativeDecoder
@required
- (id<Common_clientKotlinx_serialization_runtime_nativeCompositeDecoder>)beginStructureDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(Common_clientKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(Common_clientKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (Common_clientKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<Common_clientKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<Common_clientKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<Common_clientKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<Common_clientKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<Common_clientKotlinx_serialization_runtime_nativeSerialContext> context;
@property (readonly) Common_clientKotlinx_serialization_runtime_nativeUpdateMode *updateMode;
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol Common_clientKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<Common_clientKotlinCoroutineContext> context;
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeRunnable")))
@protocol Common_clientKotlinx_coroutines_core_nativeRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponseConfig")))
@interface Common_clientKtor_client_coreHttpResponseConfig : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property Common_clientKotlinx_ioCharset *defaultCharset;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface Common_clientKtor_utilsPipelinePhase : KotlinBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *name;
@end;

__attribute__((swift_name("KotlinSuspendFunction")))
@protocol Common_clientKotlinSuspendFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol Common_clientKotlinSuspendFunction2 <Common_clientKotlinSuspendFunction>
@required
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol Common_clientKtor_client_coreHttpRequest <Common_clientKtor_httpHttpMessage, Common_clientKotlinx_coroutines_core_nativeCoroutineScope>
@required
@property (readonly) id<Common_clientKtor_utilsAttributes> attributes;
@property (readonly) Common_clientKtor_client_coreHttpClientCall *call;
@property (readonly) Common_clientKtor_httpOutgoingContent *content;
@property (readonly) id<Common_clientKotlinx_coroutines_core_nativeJob> executionContext;
@property (readonly) Common_clientKtor_httpHttpMethod *method;
@property (readonly) Common_clientKtor_httpUrl *url;
@end;

__attribute__((swift_name("Kotlinx_coroutines_ioReadSession")))
@protocol Common_clientKotlinx_coroutines_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (Common_clientKotlinx_ioIoBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead;
@end;

__attribute__((swift_name("KotlinEnum")))
@interface Common_clientKotlinEnum : KotlinBase <Common_clientKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(Common_clientKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *name;
@property (readonly) int32_t ordinal;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_ioByteOrder")))
@interface Common_clientKotlinx_ioByteOrder : Common_clientKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) Common_clientKotlinx_ioByteOrder *bigEndian;
@property (class, readonly) Common_clientKotlinx_ioByteOrder *littleEndian;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(Common_clientKotlinx_ioByteOrder *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeDisposableHandle")))
@protocol Common_clientKotlinx_coroutines_core_nativeDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeChildHandle")))
@protocol Common_clientKotlinx_coroutines_core_nativeChildHandle <Common_clientKotlinx_coroutines_core_nativeDisposableHandle>
@required
- (BOOL)childCancelledCause:(Common_clientKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeChildJob")))
@protocol Common_clientKotlinx_coroutines_core_nativeChildJob <Common_clientKotlinx_coroutines_core_nativeJob>
@required
- (void)parentCancelledParentJob:(id<Common_clientKotlinx_coroutines_core_nativeParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinException")))
@interface Common_clientKotlinException : Common_clientKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Common_clientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Common_clientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface Common_clientKotlinRuntimeException : Common_clientKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Common_clientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Common_clientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface Common_clientKotlinIllegalStateException : Common_clientKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Common_clientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Common_clientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeCancellationException")))
@interface Common_clientKotlinx_coroutines_core_nativeCancellationException : Common_clientKotlinIllegalStateException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Common_clientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(Common_clientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol Common_clientKotlinSequence
@required
- (id<Common_clientKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeSelectClause0")))
@protocol Common_clientKotlinx_coroutines_core_nativeSelectClause0
@required
- (void)registerSelectClause0Select:(id<Common_clientKotlinx_coroutines_core_nativeSelectInstance>)select block:(id<Common_clientKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface Common_clientKtor_utilsWeekDay : Common_clientKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) Common_clientKtor_utilsWeekDay *monday;
@property (class, readonly) Common_clientKtor_utilsWeekDay *tuesday;
@property (class, readonly) Common_clientKtor_utilsWeekDay *wednesday;
@property (class, readonly) Common_clientKtor_utilsWeekDay *thursday;
@property (class, readonly) Common_clientKtor_utilsWeekDay *friday;
@property (class, readonly) Common_clientKtor_utilsWeekDay *saturday;
@property (class, readonly) Common_clientKtor_utilsWeekDay *sunday;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(Common_clientKtor_utilsWeekDay *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface Common_clientKtor_utilsMonth : Common_clientKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) Common_clientKtor_utilsMonth *january;
@property (class, readonly) Common_clientKtor_utilsMonth *february;
@property (class, readonly) Common_clientKtor_utilsMonth *march;
@property (class, readonly) Common_clientKtor_utilsMonth *april;
@property (class, readonly) Common_clientKtor_utilsMonth *may;
@property (class, readonly) Common_clientKtor_utilsMonth *june;
@property (class, readonly) Common_clientKtor_utilsMonth *july;
@property (class, readonly) Common_clientKtor_utilsMonth *august;
@property (class, readonly) Common_clientKtor_utilsMonth *september;
@property (class, readonly) Common_clientKtor_utilsMonth *october;
@property (class, readonly) Common_clientKtor_utilsMonth *november;
@property (class, readonly) Common_clientKtor_utilsMonth *december;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(Common_clientKtor_utilsMonth *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *value;
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol Common_clientKotlinMapEntry
@required
@property (readonly) id _Nullable key;
@property (readonly) id _Nullable value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface Common_clientKtor_httpHeaderValueParam : KotlinBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (Common_clientKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
@property (readonly) NSString *name;
@property (readonly) NSString *value;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeEncoder")))
@protocol Common_clientKotlinx_serialization_runtime_nativeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index serializer:(id<Common_clientKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:serializer:value:)")));
- (void)encodeSerializableElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index serializer:(id<Common_clientKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:serializer:value:)")));
- (void)encodeShortElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<Common_clientKotlinx_serialization_runtime_nativeSerialContext> context;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialClassDescImpl")))
@interface Common_clientKotlinx_serialization_runtime_nativeSerialClassDescImpl : KotlinBase <Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<Common_clientKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer));
- (void)addElementName:(NSString *)name isOptional:(BOOL)isOptional __attribute__((swift_name("addElement(name:isOptional:)")));
- (void)pushAnnotationA:(id<Common_clientKotlinAnnotation>)a __attribute__((swift_name("pushAnnotation(a:)")));
- (void)pushClassAnnotationA:(id<Common_clientKotlinAnnotation>)a __attribute__((swift_name("pushClassAnnotation(a:)")));
- (void)pushDescriptorDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("pushDescriptor(desc:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEnumDescriptor")))
@interface Common_clientKotlinx_serialization_runtime_nativeEnumDescriptor : Common_clientKotlinx_serialization_runtime_nativeSerialClassDescImpl
- (instancetype)initWithName:(NSString *)name choices:(Common_clientKotlinArray *)choices __attribute__((swift_name("init(name:choices:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<Common_clientKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialContext")))
@protocol Common_clientKotlinx_serialization_runtime_nativeSerialContext
@required
- (id<Common_clientKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getKclass:(id<Common_clientKotlinKClass>)kclass __attribute__((swift_name("get(kclass:)")));
- (id<Common_clientKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getByValueValue:(id)value __attribute__((swift_name("getByValue(value:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol Common_clientKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialKind")))
@interface Common_clientKotlinx_serialization_runtime_nativeSerialKind : KotlinBase
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeDecoder")))
@protocol Common_clientKotlinx_serialization_runtime_nativeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<Common_clientKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(desc:index:deserializer:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<Common_clientKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(desc:index:deserializer:)")));
- (int16_t)decodeShortElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<Common_clientKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<Common_clientKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<Common_clientKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:deserializer:old:)")));
@property (readonly) id<Common_clientKotlinx_serialization_runtime_nativeSerialContext> context;
@property (readonly) Common_clientKotlinx_serialization_runtime_nativeUpdateMode *updateMode;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface Common_clientKotlinNothing : KotlinBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtime_nativeUpdateMode")))
@interface Common_clientKotlinx_serialization_runtime_nativeUpdateMode : Common_clientKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) Common_clientKotlinx_serialization_runtime_nativeUpdateMode *banned;
@property (class, readonly) Common_clientKotlinx_serialization_runtime_nativeUpdateMode *overwrite;
@property (class, readonly) Common_clientKotlinx_serialization_runtime_nativeUpdateMode *update;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(Common_clientKotlinx_serialization_runtime_nativeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("Kotlinx_ioCharset")))
@interface Common_clientKotlinx_ioCharset : KotlinBase
- (instancetype)initWith_name:(NSString *)_name __attribute__((swift_name("init(_name:)"))) __attribute__((objc_designated_initializer));
- (Common_clientKotlinx_ioCharsetDecoder *)doNewDecoder __attribute__((swift_name("doNewDecoder()")));
- (Common_clientKotlinx_ioCharsetEncoder *)doNewEncoder __attribute__((swift_name("doNewEncoder()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface Common_clientKtor_httpHttpMethod : KotlinBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (Common_clientKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
@property (readonly) NSString *value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface Common_clientKtor_httpUrl : KotlinBase
- (instancetype)initWithProtocol:(Common_clientKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<Common_clientKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
- (Common_clientKtor_httpURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<Common_clientKtor_httpParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (Common_clientKtor_httpUrl *)doCopyProtocol:(Common_clientKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<Common_clientKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
@property (readonly) NSString *encodedPath;
@property (readonly) NSString *fragment;
@property (readonly) NSString *host;
@property (readonly) id<Common_clientKtor_httpParameters> parameters;
@property (readonly) NSString * _Nullable password;
@property (readonly) int32_t port;
@property (readonly) Common_clientKtor_httpURLProtocol *protocol;
@property (readonly) int32_t specifiedPort;
@property (readonly) BOOL trailingQuery;
@property (readonly) NSString * _Nullable user;
@end;

__attribute__((swift_name("Kotlinx_ioInput")))
@protocol Common_clientKotlinx_ioInput <Common_clientKotlinx_ioCloseable>
@required
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (int32_t)peekToBuffer:(Common_clientKotlinx_ioIoBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int32_t)readAvailableDst:(Common_clientKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length:)")));
- (int32_t)readAvailableDst:(Common_clientKotlinDoubleArray *)dst offset:(int32_t)offset length_:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length_:)")));
- (int32_t)readAvailableDst:(Common_clientKotlinFloatArray *)dst offset:(int32_t)offset length__:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length__:)")));
- (int32_t)readAvailableDst:(Common_clientKotlinIntArray *)dst offset:(int32_t)offset length___:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length___:)")));
- (int32_t)readAvailableDst:(Common_clientKotlinLongArray *)dst offset:(int32_t)offset length____:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length____:)")));
- (int32_t)readAvailableDst:(Common_clientKotlinShortArray *)dst offset:(int32_t)offset length_____:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length_____:)")));
- (int32_t)readAvailableDst:(void *)dst offset:(int32_t)offset length______:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length______:)")));
- (int64_t)readAvailableDst:(void *)dst offset:(int64_t)offset length_______:(int64_t)length __attribute__((swift_name("readAvailable(dst:offset:length_______:)")));
- (int32_t)readAvailableDst:(Common_clientKotlinx_ioIoBuffer *)dst length:(int32_t)length __attribute__((swift_name("readAvailable(dst:length:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (double)readDouble __attribute__((swift_name("readDouble()")));
- (float)readFloat __attribute__((swift_name("readFloat()")));
- (void)readFullyDst:(Common_clientKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length:)")));
- (void)readFullyDst:(Common_clientKotlinDoubleArray *)dst offset:(int32_t)offset length_:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length_:)")));
- (void)readFullyDst:(Common_clientKotlinFloatArray *)dst offset:(int32_t)offset length__:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length__:)")));
- (void)readFullyDst:(Common_clientKotlinIntArray *)dst offset:(int32_t)offset length___:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length___:)")));
- (void)readFullyDst:(Common_clientKotlinLongArray *)dst offset:(int32_t)offset length____:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length____:)")));
- (void)readFullyDst:(Common_clientKotlinShortArray *)dst offset:(int32_t)offset length_____:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length_____:)")));
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length______:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length______:)")));
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length_______:(int64_t)length __attribute__((swift_name("readFully(dst:offset:length_______:)")));
- (void)readFullyDst:(Common_clientKotlinx_ioIoBuffer *)dst length:(int32_t)length __attribute__((swift_name("readFully(dst:length:)")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property Common_clientKotlinx_ioByteOrder *byteOrder;
@property (readonly) BOOL endOfInput;
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol Common_clientKotlinAppendable
@required
- (id<Common_clientKotlinAppendable>)appendC:(unichar)c __attribute__((swift_name("append(c:)")));
- (id<Common_clientKotlinAppendable>)appendCsq:(id _Nullable)csq __attribute__((swift_name("append(csq:)")));
- (id<Common_clientKotlinAppendable>)appendCsq:(id _Nullable)csq start:(int32_t)start end_:(int32_t)end __attribute__((swift_name("append(csq:start:end_:)")));
@end;

__attribute__((swift_name("Kotlinx_ioOutput")))
@protocol Common_clientKotlinx_ioOutput <Common_clientKotlinAppendable, Common_clientKotlinx_ioCloseable>
@required
- (id<Common_clientKotlinAppendable>)appendCsq:(Common_clientKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (void)fillN:(int64_t)n v:(int8_t)v __attribute__((swift_name("fill(n:v:)")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeByteV:(int8_t)v __attribute__((swift_name("writeByte(v:)")));
- (void)writeDoubleV:(double)v __attribute__((swift_name("writeDouble(v:)")));
- (void)writeFloatV:(float)v __attribute__((swift_name("writeFloat(v:)")));
- (void)writeFullySrc:(Common_clientKotlinByteArray *)src offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length:)")));
- (void)writeFullySrc:(Common_clientKotlinDoubleArray *)src offset:(int32_t)offset length_:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length_:)")));
- (void)writeFullySrc:(Common_clientKotlinFloatArray *)src offset:(int32_t)offset length__:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length__:)")));
- (void)writeFullySrc:(Common_clientKotlinIntArray *)src offset:(int32_t)offset length___:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length___:)")));
- (void)writeFullySrc:(Common_clientKotlinLongArray *)src offset:(int32_t)offset length____:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length____:)")));
- (void)writeFullySrc:(Common_clientKotlinShortArray *)src offset:(int32_t)offset length_____:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length_____:)")));
- (void)writeFullySrc:(void *)src offset:(int32_t)offset length______:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length______:)")));
- (void)writeFullySrc:(void *)src offset:(int64_t)offset length_______:(int64_t)length __attribute__((swift_name("writeFully(src:offset:length_______:)")));
- (void)writeFullySrc:(Common_clientKotlinx_ioIoBuffer *)src length:(int32_t)length __attribute__((swift_name("writeFully(src:length:)")));
- (void)writeIntV:(int32_t)v __attribute__((swift_name("writeInt(v:)")));
- (void)writeLongV:(int64_t)v __attribute__((swift_name("writeLong(v:)")));
- (void)writeShortV:(int16_t)v __attribute__((swift_name("writeShort(v:)")));
@property Common_clientKotlinx_ioByteOrder *byteOrder;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_ioIoBuffer")))
@interface Common_clientKotlinx_ioIoBuffer : KotlinBase <Common_clientKotlinx_ioInput, Common_clientKotlinx_ioOutput>
- (instancetype)initWithContent:(void *)content contentCapacity:(int32_t)contentCapacity __attribute__((swift_name("init(content:contentCapacity:)"))) __attribute__((objc_designated_initializer));
- (int32_t)appendCharsCsq:(Common_clientKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end:)")));
- (int32_t)appendCharsCsq:(id)csq start:(int32_t)start end_:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end_:)")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (BOOL)canWrite __attribute__((swift_name("canWrite()")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (BOOL)isExclusivelyOwned __attribute__((swift_name("isExclusivelyOwned()")));
- (Common_clientKotlinx_ioIoBuffer *)makeView __attribute__((swift_name("makeView()")));
- (void)pushBackN:(int32_t)n __attribute__((swift_name("pushBack(n:)")));
- (void)readDst:(Common_clientKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("read(dst:offset:length:)")));
- (int32_t)readDirectBlock:(Common_clientInt *(^)(id))block __attribute__((swift_name("readDirect(block:)")));
- (void)releasePool:(id<Common_clientKotlinx_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reserveEndGapN:(int32_t)n __attribute__((swift_name("reserveEndGap(n:)")));
- (void)reserveStartGapN:(int32_t)n __attribute__((swift_name("reserveStartGap(n:)")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)writeArray:(Common_clientKotlinByteArray *)array offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("write(array:offset:length:)")));
- (int32_t)writeBufferSrc:(Common_clientKotlinx_ioIoBuffer *)src length:(int32_t)length __attribute__((swift_name("writeBuffer(src:length:)")));
- (int32_t)writeDirectBlock:(Common_clientInt *(^)(id))block __attribute__((swift_name("writeDirect(block:)")));
@property id _Nullable attachment;
@property (readonly) int32_t capacity;
@property (readonly) int32_t endGap;
@property Common_clientKotlinx_ioIoBuffer * _Nullable next;
@property (readonly) int32_t readRemaining;
@property (readonly) int32_t startGap;
@property (readonly) int32_t writeRemaining;
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeParentJob")))
@protocol Common_clientKotlinx_coroutines_core_nativeParentJob <Common_clientKotlinx_coroutines_core_nativeJob>
@required
- (Common_clientKotlinThrowable *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeSelectInstance")))
@protocol Common_clientKotlinx_coroutines_core_nativeSelectInstance
@required
- (void)disposeOnSelectHandle:(id<Common_clientKotlinx_coroutines_core_nativeDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicIfNotSelectedDesc:(Common_clientKotlinx_coroutines_core_nativeAtomicDesc *)desc __attribute__((swift_name("performAtomicIfNotSelected(desc:)")));
- (id _Nullable)performAtomicTrySelectDesc:(Common_clientKotlinx_coroutines_core_nativeAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectCancellableWithExceptionException:(Common_clientKotlinThrowable *)exception __attribute__((swift_name("resumeSelectCancellableWithException(exception:)")));
- (BOOL)trySelectIdempotent:(id _Nullable)idempotent __attribute__((swift_name("trySelect(idempotent:)")));
@property (readonly) id<Common_clientKotlinContinuation> completion;
@property (readonly) BOOL isSelected;
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol Common_clientKotlinSuspendFunction0 <Common_clientKotlinSuspendFunction>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeGeneratedSerializer")))
@protocol Common_clientKotlinx_serialization_runtime_nativeGeneratedSerializer <Common_clientKotlinx_serialization_runtime_nativeKSerializer>
@required
- (Common_clientKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
@end;

__attribute__((swift_name("Kotlinx_ioCharsetDecoder")))
@interface Common_clientKotlinx_ioCharsetDecoder : KotlinBase
- (instancetype)initWith_charset:(Common_clientKotlinx_ioCharset *)_charset __attribute__((swift_name("init(_charset:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_ioCharsetEncoder")))
@interface Common_clientKotlinx_ioCharsetEncoder : KotlinBase
- (instancetype)initWith_charset:(Common_clientKotlinx_ioCharset *)_charset __attribute__((swift_name("init(_charset:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface Common_clientKtor_httpURLProtocol : KotlinBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (Common_clientKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
@property (readonly) int32_t defaultPort;
@property (readonly) NSString *name;
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol Common_clientKtor_httpParameters <Common_clientKtor_utilsStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface Common_clientKotlinByteArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(Common_clientByte *(^)(Common_clientInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (Common_clientKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinDoubleArray")))
@interface Common_clientKotlinDoubleArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(Common_clientDouble *(^)(Common_clientInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (double)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (Common_clientKotlinDoubleIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(double)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinFloatArray")))
@interface Common_clientKotlinFloatArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(Common_clientFloat *(^)(Common_clientInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (float)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (Common_clientKotlinFloatIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(float)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface Common_clientKotlinIntArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(Common_clientInt *(^)(Common_clientInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (Common_clientKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongArray")))
@interface Common_clientKotlinLongArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(Common_clientLong *(^)(Common_clientInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int64_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (Common_clientKotlinLongIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int64_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinShortArray")))
@interface Common_clientKotlinShortArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(Common_clientShort *(^)(Common_clientInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int16_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (Common_clientKotlinShortIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int16_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface Common_clientKotlinCharArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(Common_clientInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (Common_clientKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((swift_name("Kotlinx_ioObjectPool")))
@protocol Common_clientKotlinx_ioObjectPool <Common_clientKotlinx_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity;
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeAtomicDesc")))
@interface Common_clientKotlinx_coroutines_core_nativeAtomicDesc : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(Common_clientKotlinx_coroutines_core_nativeAtomicOp *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(Common_clientKotlinx_coroutines_core_nativeAtomicOp *)op __attribute__((swift_name("prepare(op:)")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface Common_clientKotlinByteIterator : KotlinBase <Common_clientKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (Common_clientByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("KotlinDoubleIterator")))
@interface Common_clientKotlinDoubleIterator : KotlinBase <Common_clientKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (Common_clientDouble *)next __attribute__((swift_name("next()")));
- (double)nextDouble __attribute__((swift_name("nextDouble()")));
@end;

__attribute__((swift_name("KotlinFloatIterator")))
@interface Common_clientKotlinFloatIterator : KotlinBase <Common_clientKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (Common_clientFloat *)next __attribute__((swift_name("next()")));
- (float)nextFloat __attribute__((swift_name("nextFloat()")));
@end;

__attribute__((swift_name("KotlinIntIterator")))
@interface Common_clientKotlinIntIterator : KotlinBase <Common_clientKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (Common_clientInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end;

__attribute__((swift_name("KotlinLongIterator")))
@interface Common_clientKotlinLongIterator : KotlinBase <Common_clientKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (Common_clientLong *)next __attribute__((swift_name("next()")));
- (int64_t)nextLong __attribute__((swift_name("nextLong()")));
@end;

__attribute__((swift_name("KotlinShortIterator")))
@interface Common_clientKotlinShortIterator : KotlinBase <Common_clientKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (Common_clientShort *)next __attribute__((swift_name("next()")));
- (int16_t)nextShort __attribute__((swift_name("nextShort()")));
@end;

__attribute__((swift_name("KotlinCharIterator")))
@interface Common_clientKotlinCharIterator : KotlinBase <Common_clientKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeOpDescriptor")))
@interface Common_clientKotlinx_coroutines_core_nativeOpDescriptor : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeAtomicOp")))
@interface Common_clientKotlinx_coroutines_core_nativeAtomicOp : Common_clientKotlinx_coroutines_core_nativeOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(id _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)prepareAffected:(id _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
- (BOOL)tryDecideDecision:(id _Nullable)decision __attribute__((swift_name("tryDecide(decision:)")));
@property (readonly) BOOL isDecided;
@end;

NS_ASSUME_NONNULL_END
