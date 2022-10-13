/** @customConstructor Reader.__new */
declare class Reader {
  private unique_6502691725092047670: "Reader"
  constructor()
  __tostring(): unknown /* const char * */
  accounts(): unknown /* Accounts */
  actvcodes(): unknown /* Actvcodes */
  actvtypes(): unknown /* Actvtypes */
  calendars(): unknown /* Calendars */
  checkParse(): number
  currencies(): unknown /* Currtypes */
  currtypes(): unknown /* Currtypes */
  fintmpls(): unknown /* Fintmpls */
  nonWorks(): unknown /* NonWorks */
  obss(): unknown /* Obss */
  parse(arg1: string): number
  pcattypes(): unknown /* Pcattypes */
  pcatvals(): unknown /* Pcatvals */
  projects(): unknown /* Projects */
  projpcats(): unknown /* Projpcats */
  rCatTypes(): unknown /* RCatTypes */
  roleRates(): unknown /* RoleRates */
  roles(): unknown /* Roles */
  rsrccurvdatas(): unknown /* Rsrccurvdatas */
  rsrcrates(): unknown /* Rsrcrates */
  rsrcrcats(): unknown /* Rsrcrcats */
  rsrcs(): unknown /* Rsrcs */
  schedoptions(): unknown /* Schedoptions */
  setAccounts(arg1: unknown /* Accounts */): void
  setActvcodes(arg1: unknown /* Actvcodes */): void
  setActvtypes(arg1: unknown /* Actvtypes */): void
  setCalendars(arg1: unknown /* Calendars */): void
  setCurrencies(arg1: unknown /* Currtypes */): void
  setCurrtypes(arg1: unknown /* Currtypes */): void
  setFintmpls(arg1: unknown /* Fintmpls */): void
  setNonWorks(arg1: unknown /* NonWorks */): void
  setObss(arg1: unknown /* Obss */): void
  setPcattypes(arg1: unknown /* Pcattypes */): void
  setPcatvals(arg1: unknown /* Pcatvals */): void
  setProjects(arg1: unknown /* Projects */): void
  setProjpcats(arg1: unknown /* Projpcats */): void
  setRCatTypes(arg1: unknown /* RCatTypes */): void
  setRoleRates(arg1: unknown /* RoleRates */): void
  setRoles(arg1: unknown /* Roles */): void
  setRsrccurvdatas(arg1: unknown /* Rsrccurvdatas */): void
  setRsrcrates(arg1: unknown /* Rsrcrates */): void
  setRsrcrcats(arg1: unknown /* Rsrcrcats */): void
  setRsrcs(arg1: unknown /* Rsrcs */): void
  setSchedoptions(arg1: unknown /* Schedoptions */): void
  setTaskRsrcs(arg1: unknown /* TaskRsrcs */): void
  setTaskactvs(arg1: unknown /* Taskactvs */): void
  setTaskpreds(arg1: unknown /* Taskpreds */): void
  setTaskprocs(arg1: unknown /* Taskprocs */): void
  setTasks(arg1: Tasks): void
  setUdfs(arg1: unknown /* Udfs */): void
  setUdfypes(arg1: unknown /* UDFTypes */): void
  setWbss(arg1: unknown /* Wbss */): void
  taskRsrcs(): unknown /* TaskRsrcs */
  taskactvs(): unknown /* Taskactvs */
  taskpreds(): unknown /* Taskpreds */
  taskprocs(): unknown /* Taskprocs */
  tasks(): Tasks
  udfs(): unknown /* Udfs */
  udfypes(): unknown /* UDFTypes */
  wbss(): unknown /* Wbss */
}
/** @customConstructor TaskArray.__new */
declare class TaskArray {
  private unique_5294395392442676: "std::vector<Task>"
  constructor()
  clear(): void
  erase(arg1: number): void
  get(arg1: number): unknown /* Task */
  insert(arg1: number, arg2: unknown /* Task */): void
  pop(): void
  push(arg1: unknown /* Task */): void
  set(arg1: number, arg2: unknown /* Task */): void
  size(): number
}
/** @customConstructor Tasks.__new */
declare class Tasks {
  private unique_14382242731941172077: "Tasks"
  constructor()
  getAll(): TaskArray
  get_tsv(): string
}
/** @customConstructor Writer.__new */
declare class Writer {
  private unique_1352526321576050986: "Writer"
  constructor()
  writeXER(arg1: Reader, arg2: string): number
}

export type GlueModule = {
  Reader: typeof Reader;
  Tasks: typeof Tasks;
  TaskArray: typeof TaskArray;
  Writer: typeof Writer;
}
export type EmGlueModule = {
  setConstructCallback: (callback: (v: {delete(): void}) => void) => void;
  getExceptionMessage: (ptr: number) => string;
}
export type EmscriptenModule = { callMain: (...args: any[]) => void }
export type PostRunModule = GlueModule & EmGlueModule & EmscriptenModule
export type PreRunModule = { then(arg: (module: PostRunModule) => void): PreRunModule }
export default function(): PreRunModule
