// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGColorGun.h"

AFGColorGun::AFGColorGun(){ }
void AFGColorGun::SetColorSlot( uint8 slotIndex){ }
void AFGColorGun::Sever_SetColorSlot_Implementation( uint8 slotIndex){ }
bool AFGColorGun::Sever_SetColorSlot_Validate( uint8 slotIndex){ return bool(); }
uint8 AFGColorGun::GetMaxNumColorSlots(){ return uint8(); }
uint8 AFGColorGun::GetNumColorSlotsExposedToPlayers(){ return uint8(); }
void AFGColorGun::SetPrimaryColorForSlot( uint8 slotIndex, FLinearColor newColor){ }
void AFGColorGun::Sever_SetPrimaryColorForSlot_Implementation( uint8 slotIndex, FLinearColor newColor){ }
bool AFGColorGun::Sever_SetPrimaryColorForSlot_Validate( uint8 slotIndex, FLinearColor newColor){ return bool(); }
void AFGColorGun::SetSecondaryColorForSlot( uint8 slotIndex, FLinearColor newColor){ }
void AFGColorGun::Sever_SetSecondaryColorForSlot_Implementation( uint8 slotIndex, FLinearColor newColor){ }
bool AFGColorGun::Sever_SetSecondaryColorForSlot_Validate( uint8 slotIndex, FLinearColor newColor){ return bool(); }
FLinearColor AFGColorGun::GetPrimaryColorForSlot(uint8 index) const{ return FLinearColor(); }
FLinearColor AFGColorGun::GetSecondaryColorForSlot( uint8 index) const{ return FLinearColor(); }
void AFGColorGun::Equip(  AFGCharacterPlayer* character){ }
void AFGColorGun::Tick( float DeltaSeconds){ }
void AFGColorGun::ApplyCrosshairState(){ }
EFGColorGunTargetType AFGColorGun::FindIfValidColorTarget(){ return EFGColorGunTargetType(); }
void AFGColorGun::UnEquip(){ }
void AFGColorGun::ProcessInstantHit_Confirmed( const FHitResult& hitResult){ }
void AFGColorGun::AddEquipmentActionBindings(){ }
void AFGColorGun::OnSecondaryFirePressed(){ }
