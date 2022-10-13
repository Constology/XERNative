import { withWasm } from "wasm-starter-xernative";
import fs from "fs";

const file = fs.readFileSync("./sample.xer");
const data = new Uint8Array(file);

withWasm((readerModule) => {
  const reader = new readerModule.Reader();
  readerModule.FS.mkdir("/persist");
  readerModule.FS.filesystems.MEMFS.mount(readerModule.IDBFS, {}, "/persist");
  readerModule.FS.syncfs(true, function (err) {
    if (err) {
      console.error("Error: " + err);
    }
  });
  readerModule.FS.chdir("/persist");

  // Store the file
  let filename = "sample.xer";
  let stream = readerModule.FS.open(filename, "w+");
  readerModule.FS.write(stream, data, 0, data.length, 0);
  readerModule.FS.close(stream);

  // Persist the changes (sync from MEMFS to IDBFS)
  readerModule.FS.syncfs(false, function (err) {
    if (err) {
      console.error("Error: " + err);
    }
  });
  const parsed = reader.parse(filename);
  console.log(parsed);
  console.log(reader.checkParse());

  //Test Writer
  const writer = new readerModule.Writer();
  console.log(writer.writeXER(reader, './smpl.xer'));

  console.log("FILE Created from write:");
  console.log(readerModule.FS.lookupPath('./smpl.xer'));
  console.log("FILE Read");
  console.log(readerModule.FS.lookupPath('./sample.xer'));


  // Property copying test
  const newReader = new readerModule.Reader();


  console.log(reader.checkParse());
  console.log(newReader.checkParse());

  //Tasks array test
  let tasksArray = new readerModule.TaskArray();
  let tasks = new readerModule.Tasks();

  tasks = reader.tasks();
  tasksArray = tasks.getAll();
  console.log(tasksArray);
  console.log(tasksArray.size());
  console.log(tasks.get_tsv());
});

// fetchFile();
