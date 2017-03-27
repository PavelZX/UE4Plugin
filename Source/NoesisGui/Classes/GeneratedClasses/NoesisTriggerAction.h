////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "NoesisEnums.h"
#include "NoesisStructs.h"
#include "NoesisEvents.h"
#include "GeneratedClasses/NoesisDependencyObject.h"
#include "NoesisTriggerAction.generated.h"

UCLASS(BlueprintType)
class NOESISGUI_API UNoesisTriggerAction : public UNoesisDependencyObject
{
public:
	GENERATED_UCLASS_BODY()

	virtual void SetNoesisComponent(Noesis::Core::BaseComponent* NoesisComponent) override;

	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	void Invoke(class UNoesisFrameworkElement* Target, class UNoesisFrameworkElement* NameScope);

	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	void Seal();

protected:

	virtual void BindEvents() override;
	virtual void UnbindEvents() override;

private:

};

