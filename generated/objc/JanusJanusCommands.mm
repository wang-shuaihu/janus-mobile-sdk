// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#import "JanusJanusCommands.h"


NSString * __nonnull const JanusJanusCommandsCALL = @"13Q3wnLuN7";

NSString * __nonnull const JanusJanusCommandsUPDATE = @"nOigt76Vb3";

NSString * __nonnull const JanusJanusCommandsLIST = @"EhugLy7lgh";

NSString * __nonnull const JanusJanusCommandsLISTPARTICIPANTS = @"WYFIUhYcHf";

NSString * __nonnull const JanusJanusCommandsINFO = @"x4ELZYsCTl";

NSString * __nonnull const JanusJanusCommandsPUBLISH = @"uL52vhlgEB";

NSString * __nonnull const JanusJanusCommandsSUBSCRIBE = @"TzSW9zCWDl";

NSString * __nonnull const JanusJanusCommandsWATCH = @"L3R2jtDinc";

NSString * __nonnull const JanusJanusCommandsSTART = @"gN7qHnIyB8";

NSString * __nonnull const JanusJanusCommandsPAUSE = @"zlQfaZO2rZ";

NSString * __nonnull const JanusJanusCommandsSTOP = @"uSYwffonCO";

NSString * __nonnull const JanusJanusCommandsJOIN = @"YleGo5pJm9";

NSString * __nonnull const JanusJanusCommandsATTACH = @"attach";

NSString * __nonnull const JanusJanusCommandsCREATE = @"create";

NSString * __nonnull const JanusJanusCommandsDESTROY = @"destroy";

NSString * __nonnull const JanusJanusCommandsTRICKLE = @"trickle";

NSString * __nonnull const JanusJanusCommandsTRICKLECOMPLETED = @"trickle_completed";

NSString * __nonnull const JanusJanusCommandsHANGUP = @"hangup";

@implementation JanusJanusCommands

- (nonnull instancetype)init
{
    if (self = [super init]) {
    }
    return self;
}

+ (nonnull instancetype)janusCommands
{
    return [(JanusJanusCommands*)[self alloc] init];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p>", self.class, (void *)self];
}

@end
