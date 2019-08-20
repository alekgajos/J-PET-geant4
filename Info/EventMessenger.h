/**
 *  @copyright Copyright 2019 The J-PET Monte Carlo Authors. All rights reserved.
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may find a copy of the License in the LICENCE file.
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *  @file EventMessenger.h
 */

#ifndef EVENTMESSENGER_H
#define EVENTMESSENGER_H 1

#include <G4UIcmdWith3VectorAndUnit.hh>
#include <G4UIcmdWithADoubleAndUnit.hh>
#include <G4UIcmdWithoutParameter.hh>
#include <G4UIcmdWithAnInteger.hh>
#include <G4UIcmdWithADouble.hh>
#include <G4UIcmdWithAString.hh>
#include <G4UIcmdWithABool.hh>
#include <G4UIcmdWithABool.hh>
#include <G4SystemOfUnits.hh>
#include <G4UIdirectory.hh>
#include <G4UImessenger.hh>
#include <globals.hh>

class EventMessenger: public G4UImessenger
{
public:
  static EventMessenger* GetEventMessenger();
  void SetNewValue(G4UIcommand*, G4String);

  bool KillEventsEscapingWorld()
  {
    return fKillEventsEscapingWorld;
  }

  bool PrintStatistics()
  {
    return fPrintStatistics;
  }

  bool ShowProgress()
  {
    return fShowProgress;
  }

  G4int GetPowerPrintStat()
  {
    return fPrintPower;
  }

  bool AddDatetime()
  {
    return fOutputWithDatetime;
  }

  G4int GetMinRegMultiplicity()
  {
    return fMinRegisteredMultiplicity;
  }

  G4int GetMaxRegMultiplicity()
  {
    return fMaxRegisteredMultiplicity;
  }


private:
  static EventMessenger* fInstance;
  EventMessenger();
  ~EventMessenger();

  G4UIdirectory* fDirectory = nullptr;
  G4UIcmdWithABool* fPrintStat;
  G4UIcmdWithABool* fPrintStatBar;
  G4UIcmdWithABool* fAddDatetime;
  G4UIcmdWithABool* fCMDKillEventsEscapingWorld;
  G4UIcmdWithAnInteger* fPrintStatPower;
  G4UIcmdWithAnInteger* fCMDMinRegMulti;
  G4UIcmdWithAnInteger* fCMDMaxRegMulti;
  bool fPrintStatistics = false;
  G4int fPrintPower = 10;
  bool fShowProgress = false;
  bool fOutputWithDatetime = false;
  bool fKillEventsEscapingWorld = false;
  G4int fMinRegisteredMultiplicity = 2;
  G4int fMaxRegisteredMultiplicity = 10;

};

#endif
