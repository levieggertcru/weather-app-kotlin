#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedAppFeatureDiContainer, SharedCurrentWeatherDiContainer, SharedCurrentWeatherDomainModel, SharedWeatherRepository, SharedCurrentWeatherDataLayerDependencies, SharedCurrentWeatherDomainLayerDependencies, SharedGetCurrentWeatherUseCase, SharedWeatherListItemDomainModel, SharedViewMyWeatherListDomainModel, SharedWeatherAPIMethods, SharedWeatherAPIEnvironment, SharedWeatherAPICurrentWeatherMethod, SharedWeatherAPIEnvironmentCompanion, SharedWeatherDataModel, SharedWeatherAPI;

@protocol SharedPlatform, SharedNetworkRequesterInterface, SharedGetCurrentWeatherRepositoryInterface;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
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
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface SharedGreeting : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol SharedPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface SharedIOSPlatform : SharedBase <SharedPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NewYear")))
@interface SharedNewYear : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)daysPhrase __attribute__((swift_name("daysPhrase()")));
- (int32_t)daysUntilNewYear __attribute__((swift_name("daysUntilNewYear()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppDiContainer")))
@interface SharedAppDiContainer : SharedBase
- (instancetype)initWithNetworkRequester:(id<SharedNetworkRequesterInterface>)networkRequester __attribute__((swift_name("init(networkRequester:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedAppFeatureDiContainer *feature __attribute__((swift_name("feature")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppFeatureDiContainer")))
@interface SharedAppFeatureDiContainer : SharedBase
- (instancetype)initWithCurrentWeather:(SharedCurrentWeatherDiContainer *)currentWeather __attribute__((swift_name("init(currentWeather:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedCurrentWeatherDiContainer *currentWeather __attribute__((swift_name("currentWeather")));
@end

__attribute__((swift_name("GetCurrentWeatherRepositoryInterface")))
@protocol SharedGetCurrentWeatherRepositoryInterface
@required
- (void)getCurrentWeatherZipCode:(NSString *)zipCode completion:(void (^)(SharedCurrentWeatherDomainModel *))completion __attribute__((swift_name("getCurrentWeather(zipCode:completion:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetCurrentWeatherRepository")))
@interface SharedGetCurrentWeatherRepository : SharedBase <SharedGetCurrentWeatherRepositoryInterface>
- (instancetype)initWithWeatherRepository:(SharedWeatherRepository *)weatherRepository __attribute__((swift_name("init(weatherRepository:)"))) __attribute__((objc_designated_initializer));
- (void)getCurrentWeatherZipCode:(NSString *)zipCode completion:(void (^)(SharedCurrentWeatherDomainModel *))completion __attribute__((swift_name("getCurrentWeather(zipCode:completion:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrentWeatherDataLayerDependencies")))
@interface SharedCurrentWeatherDataLayerDependencies : SharedBase
- (instancetype)initWithNetworkRequester:(id<SharedNetworkRequesterInterface>)networkRequester __attribute__((swift_name("init(networkRequester:)"))) __attribute__((objc_designated_initializer));
- (id<SharedGetCurrentWeatherRepositoryInterface>)getCurrentWeatherRepository __attribute__((swift_name("getCurrentWeatherRepository()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrentWeatherDiContainer")))
@interface SharedCurrentWeatherDiContainer : SharedBase
- (instancetype)initWithNetworkRequester:(id<SharedNetworkRequesterInterface>)networkRequester __attribute__((swift_name("init(networkRequester:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedCurrentWeatherDataLayerDependencies *dataLayer __attribute__((swift_name("dataLayer")));
@property (readonly) SharedCurrentWeatherDomainLayerDependencies *domainLayer __attribute__((swift_name("domainLayer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrentWeatherDomainLayerDependencies")))
@interface SharedCurrentWeatherDomainLayerDependencies : SharedBase
- (instancetype)initWithDataLayer:(SharedCurrentWeatherDataLayerDependencies *)dataLayer __attribute__((swift_name("init(dataLayer:)"))) __attribute__((objc_designated_initializer));
- (SharedGetCurrentWeatherUseCase *)getCurrentWeatherUseCase __attribute__((swift_name("getCurrentWeatherUseCase()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrentWeatherDomainModel")))
@interface SharedCurrentWeatherDomainModel : SharedBase
- (instancetype)initWithCity:(NSString *)city state:(NSString *)state temperatureInFahrenheit:(NSString *)temperatureInFahrenheit __attribute__((swift_name("init(city:state:temperatureInFahrenheit:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *city __attribute__((swift_name("city")));
@property (readonly) NSString *state __attribute__((swift_name("state")));
@property (readonly) NSString *temperatureInFahrenheit __attribute__((swift_name("temperatureInFahrenheit")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetCurrentWeatherUseCase")))
@interface SharedGetCurrentWeatherUseCase : SharedBase
- (instancetype)initWithGetCurrentWeatherInterface:(id<SharedGetCurrentWeatherRepositoryInterface>)getCurrentWeatherInterface __attribute__((swift_name("init(getCurrentWeatherInterface:)"))) __attribute__((objc_designated_initializer));
- (void)getCurrentWeatherZipCode:(NSString *)zipCode completion:(void (^)(SharedCurrentWeatherDomainModel *))completion __attribute__((swift_name("getCurrentWeather(zipCode:completion:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewMyWeatherListDomainModel")))
@interface SharedViewMyWeatherListDomainModel : SharedBase
- (instancetype)initWithWeatherItems:(NSArray<SharedWeatherListItemDomainModel *> *)weatherItems __attribute__((swift_name("init(weatherItems:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<SharedWeatherListItemDomainModel *> *weatherItems __attribute__((swift_name("weatherItems")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherListItemDomainModel")))
@interface SharedWeatherListItemDomainModel : SharedBase
- (instancetype)initWithId:(NSString *)id location:(NSString *)location temperature:(NSString *)temperature __attribute__((swift_name("init(id:location:temperature:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *location __attribute__((swift_name("location")));
@property (readonly) NSString *systemClockNow __attribute__((swift_name("systemClockNow")));
@property (readonly) NSString *temperature __attribute__((swift_name("temperature")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewMyWeatherListUseCase")))
@interface SharedViewMyWeatherListUseCase : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedViewMyWeatherListDomainModel *)view __attribute__((swift_name("view()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherAPI")))
@interface SharedWeatherAPI : SharedBase
- (instancetype)initWithNetworkRequester:(id<SharedNetworkRequesterInterface>)networkRequester __attribute__((swift_name("init(networkRequester:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedWeatherAPIMethods *method __attribute__((swift_name("method")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherAPIMethods")))
@interface SharedWeatherAPIMethods : SharedBase
- (instancetype)initWithNetworkRequester:(id<SharedNetworkRequesterInterface>)networkRequester environment:(SharedWeatherAPIEnvironment *)environment __attribute__((swift_name("init(networkRequester:environment:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedWeatherAPICurrentWeatherMethod *currentWeather __attribute__((swift_name("currentWeather")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherAPIEnvironment")))
@interface SharedWeatherAPIEnvironment : SharedBase
- (instancetype)initWithApiKey:(NSString *)apiKey baseUrl:(NSString *)baseUrl __attribute__((swift_name("init(apiKey:baseUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedWeatherAPIEnvironmentCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *apiKey __attribute__((swift_name("apiKey")));
@property (readonly) NSString *baseUrl __attribute__((swift_name("baseUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherAPIEnvironment.Companion")))
@interface SharedWeatherAPIEnvironmentCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWeatherAPIEnvironmentCompanion *shared __attribute__((swift_name("shared")));
- (SharedWeatherAPIEnvironment *)production __attribute__((swift_name("production()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherAPICurrentWeatherMethod")))
@interface SharedWeatherAPICurrentWeatherMethod : SharedBase
- (instancetype)initWithNetworkRequester:(id<SharedNetworkRequesterInterface>)networkRequester environment:(SharedWeatherAPIEnvironment *)environment __attribute__((swift_name("init(networkRequester:environment:)"))) __attribute__((objc_designated_initializer));
- (void)getCurrentZipCode:(NSString *)zipCode completion:(void (^)(SharedWeatherDataModel *))completion __attribute__((swift_name("getCurrent(zipCode:completion:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherDataModel")))
@interface SharedWeatherDataModel : SharedBase
- (instancetype)initWithLocationName:(NSString *)locationName locationRegion:(NSString *)locationRegion tempFahrenheit:(SharedDouble * _Nullable)tempFahrenheit __attribute__((swift_name("init(locationName:locationRegion:tempFahrenheit:)"))) __attribute__((objc_designated_initializer));
- (SharedWeatherDataModel *)doCopyLocationName:(NSString *)locationName locationRegion:(NSString *)locationRegion tempFahrenheit:(SharedDouble * _Nullable)tempFahrenheit __attribute__((swift_name("doCopy(locationName:locationRegion:tempFahrenheit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *locationName __attribute__((swift_name("locationName")));
@property (readonly) NSString *locationRegion __attribute__((swift_name("locationRegion")));
@property (readonly) SharedDouble * _Nullable tempFahrenheit __attribute__((swift_name("tempFahrenheit")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherRepository")))
@interface SharedWeatherRepository : SharedBase
- (instancetype)initWithApi:(SharedWeatherAPI *)api __attribute__((swift_name("init(api:)"))) __attribute__((objc_designated_initializer));
- (void)getCurrentWeatherZipCode:(NSString *)zipCode completion:(void (^)(SharedWeatherDataModel *))completion __attribute__((swift_name("getCurrentWeather(zipCode:completion:)")));
@end

__attribute__((swift_name("NetworkRequesterInterface")))
@protocol SharedNetworkRequesterInterface
@required
- (void)sendGetRequestUrl:(NSString *)url completion:(void (^)(NSArray<NSDictionary<NSString *, id> *> *))completion __attribute__((swift_name("sendGetRequest(url:completion:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface SharedPlatform_iosKt : SharedBase
+ (id<SharedPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
