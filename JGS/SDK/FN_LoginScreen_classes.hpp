#pragma once

// Fortnite (2.4.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass LoginScreen.LoginScreen_C
// 0x00D0 (0x04E0 - 0x0410)
class ULoginScreen_C : public UFortUIStateWidget_Login
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	class UCommonBorder*                               BackBorder;                                               // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           BackButton;                                               // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UConsoleProfileWidget_C*                     ConsoleProfileWidget;                                     // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonWidgetStack*                          LoginFlowStack;                                           // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBuildWatermark_C*                           Widget_BuildWatermark;                                    // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class AFort_Entry_Music_Controller_BP_C*           FrontEnd_Music_Controller;                                // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UStatusWidget_C*                             StatusWindow;                                             // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USignInWidget_C*                             SignInWindow;                                             // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCommonUserWidget*                           AccountLinkWindow;                                        // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoginMenuVisible;                                        // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	class ULoginResultWIdget_C*                        LoginResultWindow;                                        // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEulaWidget_C*                               EulaWindow;                                               // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       BenchmarkDialogTitle;                                     // 0x0478(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       BenchmarkDialogMessage;                                   // 0x0490(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UObject*                                     LoginMenuWidget;                                          // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USplashScreenWidget_C*                       SplashScreenWindow;                                       // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHealthWarningWidget_C*                      HealthWarningWindow;                                      // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPlayedBeforeSelect_C*                       PlayedBeforeWindow;                                       // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ULoginCredentialSelect_C*                    LoginCredentialSelect;                                    // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UNewAccountWarning_C*                        NewAccountWarningWidget;                                  // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URedirectToEpicAccount_C*                    RedirectToEpicAccountWidget;                              // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoginScreen.LoginScreen_C");
		return ptr;
	}


	void ShowNewAccountWarningModal(class UCommonButton* Button);
	void ShowRedirectToEpicAccount(EFortLoginAccountType LoginType);
	void ShowLoginCredentialSelect();
	void ShowPlayedBeforeSelect();
	void ShowExternalLogin(class UWidget* NativeWidget);
	void DismissWebLogin();
	void CloseWebLogin(bool* bWasClosed);
	void ShowHealthWarning();
	void SafePopContent();
	void CheckSkipSplashScreen();
	void EmptyLoginStack();
	void HideNonSplashScreenContent();
	void RollbackToSplashScreen();
	class UWidget* PopContentWidgetInternal(struct FContentPushState* State);
	void ShowSplashScreen();
	class UWidget* GetLoginMenu();
	struct FEventReply OnMouseButtonUp_MenuBorder(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	void SkipBenchmark();
	void RunBenchmark();
	void ShouldShowBenchmark(bool* Return_Value);
	void ShowEulaWindow(const struct FText& Text, bool ViewOnly);
	void SetResultsDescription(const struct FText& Description);
	void SetResultTitle(const struct FText& Title, bool bShowError);
	void ShowResultWindow(const struct FText& Title, const struct FText& Description, bool bShowError, bool bLoggedOut);
	void ToggleLoginMenu();
	void UpdateStatusTitle(const struct FText& Title);
	void ShowAccountLinkingWindow(bool InLinkedAccountNeedsPurchase);
	void ShowStatusWindow(const struct FText& StatusText);
	void ShowSignInWindow(bool DirectSignin);
	void DialogResult_B952A8754B3836D2151B4981F531542E(EFortDialogResult Result, const struct FName& ResultName);
	void OnEnterState(EFortUIState* PreviousUIState);
	void OnExitState(EFortUIState* NextUIState);
	void HandleOnStartLogin(const struct FString& LoginEmail, const struct FString& LoginPassword, EExternalAccountType Account_Type);
	void OnLoginFailed(struct FText* Reason);
	void OnLoginSuceeded();
	void OnEulaAvailable(struct FText* EulaText);
	void OnPatchingComplete(bool* bProceed);
	void HandleEulaResponse(bool Accepted);
	void HandleResultConfirmed();
	void HandlerBenchmarkFlow();
	void AccountLinking_PushStatus(const struct FText& StatusText);
	void AccountLinking_PopStatus();
	void AccountLinking_LinkingFailed(const struct FText& FailReason);
	void AccountLinking_RequestSignIn();
	void AccountLinking_RequestAutoLogin();
	void OnSplashScreenClosed();
	void PushContentWidgetInternal(class UWidget** Widget, struct FContentPushState* State);
	void OnLogoutComplete();
	void Construct();
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void AccountLinking_ViewEula();
	void HandleViewOnlyClose();
	void OnNeedsPurchaseOrAccountLinking(bool* bLinkedAccountNeedsPurchase);
	void OnPostLoginLogoutComplete(struct FText* Reason);
	void OnShowLoginMessage(bool* bShow, struct FText* Tile, struct FText* Body);
	void HandleLoggedOutErrorDismissed();
	void OnLoggedOutWithError(struct FText* ErrorText);
	void Event_Closed_MOTD();
	void OnShowHealthWarning();
	void OnWebLoginDisplay(class UWidget* WebWidget);
	void OnWebLoginClosed();
	void HandlePlayedBeforeSelected(bool PlayedBefore);
	void TempBackEvent(class UCommonButton* Button);
	void HandleEpicAccountSelected();
	void HandleNewAccountCreation();
	void HandleCredentialSelected(EFortLoginAccountType ChosenCredential);
	void HandleEpicAccountForward(EFortLoginAccountType platform);
	void ExecuteUbergraph_LoginScreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
